/**
 * Project Untitled
 */


#include "User.h"

/**
 * User implementation
 */

Model::User::User(String^ Name, String^ Password, String^ Email, int Id)
{
	this->Id = Id;
	this->Name = Name;
	this->Password = Password;
	this->Email = Email;
}
