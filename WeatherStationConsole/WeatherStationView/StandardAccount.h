#pragma once

namespace WeatherStationView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de StandardAccount
	/// </summary>
	public ref class StandardAccount : public System::Windows::Forms::Form
	{
	public:
		StandardAccount(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~StandardAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_Config;
	private: System::Windows::Forms::Button^ btn_SignOut;
	private: System::Windows::Forms::Button^ btn_Statistics;
	private: System::Windows::Forms::Button^ btn_Premium;























	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;






















	protected:

	protected:




	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StandardAccount::typeid));
			this->btn_Config = (gcnew System::Windows::Forms::Button());
			this->btn_SignOut = (gcnew System::Windows::Forms::Button());
			this->btn_Statistics = (gcnew System::Windows::Forms::Button());
			this->btn_Premium = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_Config
			// 
			this->btn_Config->BackColor = System::Drawing::Color::OldLace;
			this->btn_Config->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Config.Image")));
			this->btn_Config->Location = System::Drawing::Point(400, 4);
			this->btn_Config->Name = L"btn_Config";
			this->btn_Config->Size = System::Drawing::Size(90, 90);
			this->btn_Config->TabIndex = 0;
			this->btn_Config->UseVisualStyleBackColor = false;
			this->btn_Config->Click += gcnew System::EventHandler(this, &StandardAccount::button1_Click);
			// 
			// btn_SignOut
			// 
			this->btn_SignOut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_SignOut.Image")));
			this->btn_SignOut->Location = System::Drawing::Point(499, 4);
			this->btn_SignOut->Name = L"btn_SignOut";
			this->btn_SignOut->Size = System::Drawing::Size(90, 90);
			this->btn_SignOut->TabIndex = 1;
			this->btn_SignOut->UseVisualStyleBackColor = true;
			// 
			// btn_Statistics
			// 
			this->btn_Statistics->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Statistics.Image")));
			this->btn_Statistics->Location = System::Drawing::Point(595, 4);
			this->btn_Statistics->Name = L"btn_Statistics";
			this->btn_Statistics->Size = System::Drawing::Size(90, 90);
			this->btn_Statistics->TabIndex = 2;
			this->btn_Statistics->UseVisualStyleBackColor = true;
			this->btn_Statistics->Click += gcnew System::EventHandler(this, &StandardAccount::button3_Click);
			// 
			// btn_Premium
			// 
			this->btn_Premium->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Premium.Image")));
			this->btn_Premium->Location = System::Drawing::Point(691, 4);
			this->btn_Premium->Name = L"btn_Premium";
			this->btn_Premium->Size = System::Drawing::Size(90, 90);
			this->btn_Premium->TabIndex = 3;
			this->btn_Premium->UseVisualStyleBackColor = true;
			this->btn_Premium->Click += gcnew System::EventHandler(this, &StandardAccount::btn_Premium_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(50, 124);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(539, 223);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StandardAccount::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Tiempo1";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tiempo2";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tiempo3";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tiempo4";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Tiempo5";
			this->Column5->Name = L"Column5";
			// 
			// StandardAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Navy;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_Premium);
			this->Controls->Add(this->btn_Statistics);
			this->Controls->Add(this->btn_SignOut);
			this->Controls->Add(this->btn_Config);
			this->Name = L"StandardAccount";
			this->Text = L"StandardAccount";
			this->Load += gcnew System::EventHandler(this, &StandardAccount::StandardAccount_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);	

		}
#pragma endregion
	private: System::Void StandardAccount_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void btn_Premium_Click(System::Object^ sender, System::EventArgs^ e) {
    }
 private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
 }
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
