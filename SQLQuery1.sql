--Instrucciones SQL del tipo DDL
IF OBJECT_ID('dbo.TBL_ORDER_DISH', 'U') IS NOT NULL 
  DROP TABLE dbo.TBL_ORDER_DISH
GO
IF OBJECT_ID('dbo.TBL_ORDER', 'U') IS NOT NULL 
  DROP TABLE dbo.TBL_ORDER
GO
IF OBJECT_ID('dbo.DISH', 'U') IS NOT NULL 
  DROP TABLE dbo.DISH 
GO
IF OBJECT_ID('dbo.ROBOT_WAITER', 'U') IS NOT NULL 
  DROP TABLE dbo.ROBOT_WAITER 
GO
CREATE TABLE ROBOT_WAITER 
( 
    ID         INT NOT NULL PRIMARY KEY IDENTITY(1,1), 
    BRAND      VARCHAR(200) NOT NULL, 
	BATTERY_LEVEL INT NOT NULL,
    SPEED       INT NOT NULL,
    PHOTO		IMAGE
)
GO
CREATE TABLE DISH (
	ID 		INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	NAME	VARCHAR(200) NOT NULL,
	TYPE 	VARCHAR(20) NOT NULL,
	PRICE	DECIMAL(10,2),
	PHOTO	IMAGE,
	IS_SOUP	CHAR(1),
	CONTAINS_GARNISH CHAR(1),
	IS_SUGARY CHAR(1),
	VOLUME	INT
)
GO
	INSERT INTO DISH (NAME, TYPE, PRICE, IS_SOUP)
	VALUES ('Wantan frito', 'STARTER', 7.5, 'N')	
	INSERT INTO DISH (NAME, TYPE, PRICE, IS_SOUP)
	VALUES ('Siu mai', 'STARTER', 7.5, 'N')	
	INSERT INTO DISH (NAME, TYPE, PRICE, IS_SOUP, CONTAINS_GARNISH)
	VALUES ('Kam Lu Wantan', 'MAIN', 21.5, 'N', 'Y')
	INSERT INTO DISH (NAME, TYPE, PRICE, IS_SOUP, CONTAINS_GARNISH)
	VALUES ('Sopita Wantan', 'MAIN', 15, 'Y', 'N')
	INSERT INTO DISH (NAME, TYPE, PRICE, IS_SOUP, CONTAINS_GARNISH)
	VALUES ('Pato Pekinés', 'MAIN', 25.5, 'N', 'Y')
	
GO
CREATE TABLE TBL_ORDER (
	ID 		INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	STATUS 	CHAR(1),
	INIT_DATE_TIME	DATETIME,
	END_DATE_TIME	DATETIME,
	TOTAL 	DECIMAL(10,2),
	ROBOT_ID 	INT,
	CUSTOMER VARCHAR(100)
)
GO
ALTER TABLE TBL_ORDER
ADD CONSTRAINT FK_TBL_ORDER_ROBOT_ID FOREIGN KEY (ROBOT_ID)
REFERENCES ROBOT_WAITER(ID)
--ON DELETE CASCADE
GO
CREATE TABLE TBL_ORDER_DISH (
	ID 			INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	ORDER_ID 	INT,
	DISH_ID		INT,
	QUANTITY	INT,
	SUBTOTAL	DECIMAL(10,2)
)
GO
ALTER TABLE TBL_ORDER_DISH
ADD CONSTRAINT FK_TBL_ORDER_DISH_ORDER_ID FOREIGN KEY (ORDER_ID)
REFERENCES TBL_ORDER(ID)
ON DELETE CASCADE
GO
ALTER TABLE TBL_ORDER_DISH
ADD CONSTRAINT FK_TBL_ORDER_DISH_DISH_ID FOREIGN KEY (DISH_ID)
REFERENCES DISH(ID)
--ON DELETE CASCADE
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddRobotWaiter]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddRobotWaiter]
END
GO
CREATE PROCEDURE dbo.usp_AddRobotWaiter(
    @BRAND      VARCHAR(200), 
	@BATTERY_LEVEL INT,
    @SPEED       INT,
	@PHOTO		IMAGE,
    @ID         INT OUT 	
) AS 
BEGIN
	INSERT INTO ROBOT_WAITER (BRAND, SPEED, BATTERY_LEVEL, PHOTO) 
	SELECT @BRAND, @SPEED, @BATTERY_LEVEL, @PHOTO	
	SET @ID = SCOPE_IDENTITY()
END
GO
DECLARE @new_id INT
EXEC dbo.usp_AddRobotWaiter @BRAND='BELLABOT', @BATTERY_LEVEL=100, @SPEED=4, @PHOTO=NULL, @id=@new_id OUTPUT
GO
DECLARE @new_id INT
EXEC dbo.usp_AddRobotWaiter @BRAND='KIWIBOT', @BATTERY_LEVEL=100, @SPEED=3, @PHOTO=NULL, @id=@new_id OUTPUT
GO
DECLARE @new_id INT
EXEC dbo.usp_AddRobotWaiter @BRAND='FOODIE', @BATTERY_LEVEL=100, @SPEED=3, @PHOTO=NULL, @id=@new_id OUTPUT
GO
DECLARE @new_id INT
EXEC dbo.usp_AddRobotWaiter @BRAND='WALLY', @BATTERY_LEVEL=90, @SPEED=4, @PHOTO=NULL, @id=@new_id OUTPUT
--GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateRobotWaiter]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateRobotWaiter]
END
GO
CREATE PROCEDURE dbo.usp_UpdateRobotWaiter(
    @ID         INT, 	
    @BRAND      VARCHAR(200), 
	@BATTERY_LEVEL INT,
    @SPEED       INT
) AS 
BEGIN
	UPDATE ROBOT_WAITER 
	SET BRAND=@BRAND, SPEED=@SPEED, BATTERY_LEVEL=@BATTERY_LEVEL
	WHERE ID=@ID
END
GO
-- DECLARE @new_id INT
-- EXEC dbo.usp_UpdateRobotWaiter @id=3, @BRAND='FOODIE CO.', @BATTERY_LEVEL=95, @SPEED=4
-- GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteRobotWaiter]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteRobotWaiter]
END
GO
CREATE PROCEDURE dbo.usp_DeleteRobotWaiter(
    @ID         INT
) AS 
BEGIN
	DELETE FROM ROBOT_WAITER 
	WHERE ID=@ID
END
GO
-- EXEC dbo.usp_DeleteRobotWaiter @id=4
-- GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllRobotWaiters]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllRobotWaiters]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllRobotWaiters AS 
BEGIN
	SELECT * FROM ROBOT_WAITER 
END
GO
-- EXEC dbo.usp_QueryAllRobotWaiters
-- GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryRobotWaiterById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryRobotWaiterById]
END
GO
CREATE PROCEDURE dbo.usp_QueryRobotWaiterById (
    @ID         INT
) AS 
BEGIN
	SELECT * FROM ROBOT_WAITER 
	WHERE ID=@ID
END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddDish]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddDish]
END
GO
CREATE PROCEDURE dbo.usp_AddDish(
	@NAME	VARCHAR(200),
	@PRICE	DECIMAL(10,2),
	@PHOTO	IMAGE,
	@TYPE 	VARCHAR(20),	
	@IS_SOUP	CHAR(1),
	@CONTAINS_GARNISH CHAR(1),
	@IS_SUGARY CHAR(1),
	@VOLUME	INT,
    @ID         INT OUT 	
) AS 
BEGIN
	INSERT INTO DISH (NAME, TYPE, PRICE, PHOTO, IS_SOUP, CONTAINS_GARNISH, IS_SUGARY, VOLUME) 
	SELECT @NAME, @TYPE, @PRICE, @PHOTO, @IS_SOUP, @CONTAINS_GARNISH, @IS_SUGARY, @VOLUME
	SET @ID = SCOPE_IDENTITY()
END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateDish]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateDish]
END
GO
CREATE PROCEDURE dbo.usp_UpdateDish(
	@ID         INT,
	@NAME	VARCHAR(200),
	@TYPE 	VARCHAR(20),
	@PRICE	DECIMAL(10,2),
	@PHOTO	IMAGE,
	@IS_SOUP	CHAR(1),
	@CONTAINS_GARNISH CHAR(1),
	@IS_SUGARY CHAR(1),
	@VOLUME	INT    
) AS 
BEGIN
	UPDATE DISH 
	SET NAME=@NAME, TYPE=@TYPE, PRICE=@PRICE, PHOTO=@PHOTO, IS_SOUP=@IS_SOUP, CONTAINS_GARNISH=@CONTAINS_GARNISH, IS_SUGARY=@IS_SUGARY, VOLUME=@VOLUME
	WHERE ID=@ID
END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteDish]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteDish]
END
GO
CREATE PROCEDURE dbo.usp_DeleteDish(
	@ID         INT    
) AS 
BEGIN
	DELETE FROM DISH 
	WHERE ID=@ID
END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllDishes]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllDishes]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllDishes AS 
BEGIN
	SELECT * FROM DISH 
END
GO
-- EXEC dbo.usp_QueryAllDishes
-- GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryDishesByName]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryDishesByName]
END
GO
CREATE PROCEDURE dbo.usp_QueryDishesByName(
    @NAME         VARCHAR(200)
) AS  
BEGIN
	SELECT * FROM DISH 
	WHERE NAME LIKE @NAME
END
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryDishById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryDishById]
END
GO
CREATE PROCEDURE dbo.usp_QueryDishById (
    @ID         INT
) AS 
BEGIN
	SELECT * FROM DISH 
	WHERE ID=@ID
END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddOrder]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddOrder]
END
GO
CREATE PROCEDURE dbo.usp_AddOrder(
	@CUSTOMER 	VARCHAR(100),
	@ROBOT_ID 	INT,
	@TOTAL 		DECIMAL(10,2),
    @ID         INT OUT 	
) AS 
BEGIN
	INSERT INTO TBL_ORDER (CUSTOMER, STATUS, INIT_DATE_TIME, ROBOT_ID, TOTAL) 
	SELECT @CUSTOMER, 'A', GETDATE(), @ROBOT_ID, @TOTAL
	
	SET @ID = SCOPE_IDENTITY()
END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddOrderDish]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddOrderDish]
END
GO
CREATE PROCEDURE dbo.usp_AddOrderDish(
	@ORDER_ID 	INT,
	@DISH_ID 	INT,
	@QUANTITY	INT,
	@SUBTOTAL	DECIMAL(10,2),
    @ID         INT OUT 	
) AS 
BEGIN
	INSERT INTO TBL_ORDER_DISH (ORDER_ID, DISH_ID, QUANTITY, SUBTOTAL) 
	SELECT @ORDER_ID, @DISH_ID, @QUANTITY, @SUBTOTAL
	
	SET @ID = SCOPE_IDENTITY()
END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllOrders]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllOrders]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllOrders AS 
BEGIN
	SELECT * FROM TBL_ORDER
END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryOrderById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryOrderById]
END
GO
CREATE PROCEDURE dbo.usp_QueryOrderById (
    @ID         INT
)
AS 
BEGIN
	SELECT * FROM TBL_ORDER
	WHERE ID=@ID
END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryOrderDishesByOrderId]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryOrderDishesByOrderId]
END
GO
CREATE PROCEDURE dbo.usp_QueryOrderDishesByOrderId (
    @ORDER_ID         INT
)
AS 
BEGIN
	SELECT * FROM TBL_ORDER_DISH
	WHERE ORDER_ID=@ORDER_ID
END
GO
-- EXEC dbo.usp_QueryRobotWaiterById @id=2
-- GO
-- SELECT ID, BRAND AS Marca, SPEED AS Velocidad 
-- FROM ROBOT_WAITER
-- WHERE BRAND LIKE '%bot%' AND SPEED > 2
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllDetailsByOrderId]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllDetailsByOrderId]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllDetailsByOrderId (
    @ORDER_ID         INT
)
AS 
BEGIN
SELECT O.ID, D.ID, D.NAME, D.PRICE, OD.QUANTITY, OD.SUBTOTAL 
FROM TBL_ORDER O, TBL_ORDER_DISH OD, DISH D
WHERE O.ID = @ORDER_ID AND
	  O.ID = OD.ORDER_ID AND
	  OD.DISH_ID = D.ID
END


SELECT * FROM TARJETAS

SELECT * FROM USUARIO