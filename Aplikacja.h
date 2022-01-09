#pragma once

namespace Przychodnia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Aplikacja
	/// </summary>
	public ref class Aplikacja : public System::Windows::Forms::Form
	{
		public:
			String^ connectionString = L"datasource=localhost; port=3306; username=root; password=Pass1234; database=przychodnia";
		private: System::Windows::Forms::CheckBox^ checkBoxWorker;
		public:
		int user_id;
		int rekord_id;
		private: System::Windows::Forms::GroupBox^ groupBoxUser;
	private: System::Windows::Forms::GroupBox^ groupBoxWorkHours;
	private: System::Windows::Forms::GroupBox^ groupBox;
	private: System::Windows::Forms::Button^ button1018;

	private: System::Windows::Forms::Button^ button917;

	private: System::Windows::Forms::Button^ button816;

	private: System::Windows::Forms::Button^ button715;

	private: System::Windows::Forms::TextBox^ textBoxSatE;

	private: System::Windows::Forms::TextBox^ textBoxFriE;

	private: System::Windows::Forms::TextBox^ textBoxThuE;

	private: System::Windows::Forms::TextBox^ textBoxWedE;

	private: System::Windows::Forms::TextBox^ textBoxTueE;

	private: System::Windows::Forms::TextBox^ textBoxMonE;

	private: System::Windows::Forms::TextBox^ textBoxSatS;

	private: System::Windows::Forms::TextBox^ textBoxFriS;

	private: System::Windows::Forms::TextBox^ textBoxThuS;

	private: System::Windows::Forms::TextBox^ textBoxWedS;

	private: System::Windows::Forms::TextBox^ textBoxTueS;

	private: System::Windows::Forms::TextBox^ textBoxMonS;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	public:
		int pracownik_typ;

		Aplikacja(int user_id)
		{
			this->user_id = user_id;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Aplikacja()
		{
			if (components)
			{
				delete components;
			}
		}

		#pragma region DESIGNER
			private: System::Windows::Forms::TextBox^ textBoxSearch;
			private: System::Windows::Forms::Button^ buttonAdd;
			private: System::Windows::Forms::Button^ buttonEdit;
			private: System::Windows::Forms::Button^ buttonDelete;
			private: System::Windows::Forms::TextBox^ textBoxLogin;
			private: System::Windows::Forms::TextBox^ textBoxSurname;
			private: System::Windows::Forms::TextBox^ textBoxName;
			private: System::Windows::Forms::Label^ label5;
			private: System::Windows::Forms::Label^ labelSurname;
			private: System::Windows::Forms::Label^ labelName;
			private: System::Windows::Forms::Button^ buttonSearch;
			private: System::Windows::Forms::DataGridView^ dataGridViewUsers;
			private: System::Windows::Forms::TabControl^ tabControlChangePassword;
			private: System::Windows::Forms::TabPage^ tabPage1;
			private: System::Windows::Forms::Button^ buttonChange;
			private: System::Windows::Forms::TextBox^ textBoxRepeatPassword;
			private: System::Windows::Forms::TextBox^ textBoxNewPassword;
			private: System::Windows::Forms::TextBox^ textBoxOldPassword;
			private: System::Windows::Forms::Label^ label3;
			private: System::Windows::Forms::Label^ label2;
			private: System::Windows::Forms::Label^ label1;
			private: System::Windows::Forms::TabPage^ tabPage2;
			private: System::Windows::Forms::TextBox^ textBoxPassword;
			private: System::Windows::Forms::Label^ label4;
		#pragma endregion

		private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabControlChangePassword = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->buttonChange = (gcnew System::Windows::Forms::Button());
			this->textBoxRepeatPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOldPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxWorkHours = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->button1018 = (gcnew System::Windows::Forms::Button());
			this->button917 = (gcnew System::Windows::Forms::Button());
			this->button816 = (gcnew System::Windows::Forms::Button());
			this->button715 = (gcnew System::Windows::Forms::Button());
			this->textBoxSatE = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFriE = (gcnew System::Windows::Forms::TextBox());
			this->textBoxThuE = (gcnew System::Windows::Forms::TextBox());
			this->textBoxWedE = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTueE = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMonE = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSatS = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFriS = (gcnew System::Windows::Forms::TextBox());
			this->textBoxThuS = (gcnew System::Windows::Forms::TextBox());
			this->textBoxWedS = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTueS = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMonS = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBoxUser = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxWorker = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelSurname = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonEdit = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->dataGridViewUsers = (gcnew System::Windows::Forms::DataGridView());
			this->tabControlChangePassword->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBoxWorkHours->SuspendLayout();
			this->groupBox->SuspendLayout();
			this->groupBoxUser->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUsers))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControlChangePassword
			// 
			this->tabControlChangePassword->Controls->Add(this->tabPage1);
			this->tabControlChangePassword->Controls->Add(this->tabPage2);
			this->tabControlChangePassword->Location = System::Drawing::Point(12, 12);
			this->tabControlChangePassword->Name = L"tabControlChangePassword";
			this->tabControlChangePassword->SelectedIndex = 0;
			this->tabControlChangePassword->Size = System::Drawing::Size(866, 561);
			this->tabControlChangePassword->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->buttonChange);
			this->tabPage1->Controls->Add(this->textBoxRepeatPassword);
			this->tabPage1->Controls->Add(this->textBoxNewPassword);
			this->tabPage1->Controls->Add(this->textBoxOldPassword);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(858, 535);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Zmiana has³a";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// buttonChange
			// 
			this->buttonChange->Enabled = false;
			this->buttonChange->Location = System::Drawing::Point(6, 121);
			this->buttonChange->Name = L"buttonChange";
			this->buttonChange->Size = System::Drawing::Size(846, 357);
			this->buttonChange->TabIndex = 6;
			this->buttonChange->Text = L"Zmieñ";
			this->buttonChange->UseVisualStyleBackColor = true;
			this->buttonChange->Click += gcnew System::EventHandler(this, &Aplikacja::buttonChange_Click);
			// 
			// textBoxRepeatPassword
			// 
			this->textBoxRepeatPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->textBoxRepeatPassword->Location = System::Drawing::Point(149, 89);
			this->textBoxRepeatPassword->Name = L"textBoxRepeatPassword";
			this->textBoxRepeatPassword->Size = System::Drawing::Size(530, 26);
			this->textBoxRepeatPassword->TabIndex = 5;
			this->textBoxRepeatPassword->TextChanged += gcnew System::EventHandler(this, &Aplikacja::textBoxRepeatPassword_TextChanged);
			// 
			// textBoxNewPassword
			// 
			this->textBoxNewPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxNewPassword->Location = System::Drawing::Point(149, 57);
			this->textBoxNewPassword->Name = L"textBoxNewPassword";
			this->textBoxNewPassword->Size = System::Drawing::Size(530, 26);
			this->textBoxNewPassword->TabIndex = 4;
			this->textBoxNewPassword->TextChanged += gcnew System::EventHandler(this, &Aplikacja::textBoxNewPassword_TextChanged);
			// 
			// textBoxOldPassword
			// 
			this->textBoxOldPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxOldPassword->Location = System::Drawing::Point(149, 24);
			this->textBoxOldPassword->Name = L"textBoxOldPassword";
			this->textBoxOldPassword->Size = System::Drawing::Size(530, 26);
			this->textBoxOldPassword->TabIndex = 3;
			this->textBoxOldPassword->TextChanged += gcnew System::EventHandler(this, &Aplikacja::textBoxOldPassword_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(30, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Powtórz has³o:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(30, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nowe has³o:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(30, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Stare has³o:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBoxWorkHours);
			this->tabPage2->Controls->Add(this->groupBoxUser);
			this->tabPage2->Controls->Add(this->buttonAdd);
			this->tabPage2->Controls->Add(this->buttonEdit);
			this->tabPage2->Controls->Add(this->buttonDelete);
			this->tabPage2->Controls->Add(this->textBoxSearch);
			this->tabPage2->Controls->Add(this->buttonSearch);
			this->tabPage2->Controls->Add(this->dataGridViewUsers);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(858, 535);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPageUsers";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBoxWorkHours
			// 
			this->groupBoxWorkHours->Controls->Add(this->groupBox);
			this->groupBoxWorkHours->Controls->Add(this->textBoxSatE);
			this->groupBoxWorkHours->Controls->Add(this->textBoxFriE);
			this->groupBoxWorkHours->Controls->Add(this->textBoxThuE);
			this->groupBoxWorkHours->Controls->Add(this->textBoxWedE);
			this->groupBoxWorkHours->Controls->Add(this->textBoxTueE);
			this->groupBoxWorkHours->Controls->Add(this->textBoxMonE);
			this->groupBoxWorkHours->Controls->Add(this->textBoxSatS);
			this->groupBoxWorkHours->Controls->Add(this->textBoxFriS);
			this->groupBoxWorkHours->Controls->Add(this->textBoxThuS);
			this->groupBoxWorkHours->Controls->Add(this->textBoxWedS);
			this->groupBoxWorkHours->Controls->Add(this->textBoxTueS);
			this->groupBoxWorkHours->Controls->Add(this->textBoxMonS);
			this->groupBoxWorkHours->Controls->Add(this->label11);
			this->groupBoxWorkHours->Controls->Add(this->label10);
			this->groupBoxWorkHours->Controls->Add(this->label9);
			this->groupBoxWorkHours->Controls->Add(this->label8);
			this->groupBoxWorkHours->Controls->Add(this->label7);
			this->groupBoxWorkHours->Controls->Add(this->label6);
			this->groupBoxWorkHours->Location = System::Drawing::Point(16, 270);
			this->groupBoxWorkHours->Name = L"groupBoxWorkHours";
			this->groupBoxWorkHours->Size = System::Drawing::Size(422, 215);
			this->groupBoxWorkHours->TabIndex = 16;
			this->groupBoxWorkHours->TabStop = false;
			this->groupBoxWorkHours->Text = L"Godziny pracy";
			this->groupBoxWorkHours->Visible = false;
			// 
			// groupBox
			// 
			this->groupBox->Controls->Add(this->button1018);
			this->groupBox->Controls->Add(this->button917);
			this->groupBox->Controls->Add(this->button816);
			this->groupBox->Controls->Add(this->button715);
			this->groupBox->Location = System::Drawing::Point(316, 38);
			this->groupBox->Name = L"groupBox";
			this->groupBox->Size = System::Drawing::Size(100, 142);
			this->groupBox->TabIndex = 39;
			this->groupBox->TabStop = false;
			// 
			// button1018
			// 
			this->button1018->Location = System::Drawing::Point(6, 106);
			this->button1018->Name = L"button1018";
			this->button1018->Size = System::Drawing::Size(88, 23);
			this->button1018->TabIndex = 3;
			this->button1018->Text = L"10:00 - 18:00";
			this->button1018->UseVisualStyleBackColor = true;
			this->button1018->Click += gcnew System::EventHandler(this, &Aplikacja::button1018_Click);
			// 
			// button917
			// 
			this->button917->Location = System::Drawing::Point(6, 77);
			this->button917->Name = L"button917";
			this->button917->Size = System::Drawing::Size(88, 23);
			this->button917->TabIndex = 2;
			this->button917->Text = L"9:00 - 17:00";
			this->button917->UseVisualStyleBackColor = true;
			this->button917->Click += gcnew System::EventHandler(this, &Aplikacja::button917_Click);
			// 
			// button816
			// 
			this->button816->Location = System::Drawing::Point(6, 48);
			this->button816->Name = L"button816";
			this->button816->Size = System::Drawing::Size(88, 23);
			this->button816->TabIndex = 1;
			this->button816->Text = L"8:00 - 16:00";
			this->button816->UseVisualStyleBackColor = true;
			this->button816->Click += gcnew System::EventHandler(this, &Aplikacja::button816_Click);
			// 
			// button715
			// 
			this->button715->Location = System::Drawing::Point(6, 19);
			this->button715->Name = L"button715";
			this->button715->Size = System::Drawing::Size(88, 23);
			this->button715->TabIndex = 0;
			this->button715->Text = L"7:00 - 15:00";
			this->button715->UseVisualStyleBackColor = true;
			this->button715->Click += gcnew System::EventHandler(this, &Aplikacja::button715_Click);
			// 
			// textBoxSatE
			// 
			this->textBoxSatE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxSatE->Location = System::Drawing::Point(212, 176);
			this->textBoxSatE->Name = L"textBoxSatE";
			this->textBoxSatE->Size = System::Drawing::Size(87, 26);
			this->textBoxSatE->TabIndex = 38;
			this->textBoxSatE->Text = L"00:00:00";
			// 
			// textBoxFriE
			// 
			this->textBoxFriE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxFriE->Location = System::Drawing::Point(212, 144);
			this->textBoxFriE->Name = L"textBoxFriE";
			this->textBoxFriE->Size = System::Drawing::Size(87, 26);
			this->textBoxFriE->TabIndex = 37;
			this->textBoxFriE->Text = L"00:00:00";
			// 
			// textBoxThuE
			// 
			this->textBoxThuE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxThuE->Location = System::Drawing::Point(212, 112);
			this->textBoxThuE->Name = L"textBoxThuE";
			this->textBoxThuE->Size = System::Drawing::Size(87, 26);
			this->textBoxThuE->TabIndex = 36;
			this->textBoxThuE->Text = L"00:00:00";
			// 
			// textBoxWedE
			// 
			this->textBoxWedE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxWedE->Location = System::Drawing::Point(212, 80);
			this->textBoxWedE->Name = L"textBoxWedE";
			this->textBoxWedE->Size = System::Drawing::Size(87, 26);
			this->textBoxWedE->TabIndex = 35;
			this->textBoxWedE->Text = L"00:00:00";
			// 
			// textBoxTueE
			// 
			this->textBoxTueE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxTueE->Location = System::Drawing::Point(212, 48);
			this->textBoxTueE->Name = L"textBoxTueE";
			this->textBoxTueE->Size = System::Drawing::Size(87, 26);
			this->textBoxTueE->TabIndex = 34;
			this->textBoxTueE->Text = L"00:00:00";
			// 
			// textBoxMonE
			// 
			this->textBoxMonE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxMonE->Location = System::Drawing::Point(212, 16);
			this->textBoxMonE->Name = L"textBoxMonE";
			this->textBoxMonE->Size = System::Drawing::Size(87, 26);
			this->textBoxMonE->TabIndex = 33;
			this->textBoxMonE->Text = L"00:00:00";
			// 
			// textBoxSatS
			// 
			this->textBoxSatS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxSatS->Location = System::Drawing::Point(119, 176);
			this->textBoxSatS->Name = L"textBoxSatS";
			this->textBoxSatS->Size = System::Drawing::Size(87, 26);
			this->textBoxSatS->TabIndex = 32;
			this->textBoxSatS->Text = L"00:00:00";
			// 
			// textBoxFriS
			// 
			this->textBoxFriS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxFriS->Location = System::Drawing::Point(119, 144);
			this->textBoxFriS->Name = L"textBoxFriS";
			this->textBoxFriS->Size = System::Drawing::Size(87, 26);
			this->textBoxFriS->TabIndex = 31;
			this->textBoxFriS->Text = L"00:00:00";
			// 
			// textBoxThuS
			// 
			this->textBoxThuS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxThuS->Location = System::Drawing::Point(119, 112);
			this->textBoxThuS->Name = L"textBoxThuS";
			this->textBoxThuS->Size = System::Drawing::Size(87, 26);
			this->textBoxThuS->TabIndex = 30;
			this->textBoxThuS->Text = L"00:00:00";
			// 
			// textBoxWedS
			// 
			this->textBoxWedS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxWedS->Location = System::Drawing::Point(119, 80);
			this->textBoxWedS->Name = L"textBoxWedS";
			this->textBoxWedS->Size = System::Drawing::Size(87, 26);
			this->textBoxWedS->TabIndex = 29;
			this->textBoxWedS->Text = L"00:00:00";
			// 
			// textBoxTueS
			// 
			this->textBoxTueS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxTueS->Location = System::Drawing::Point(119, 48);
			this->textBoxTueS->Name = L"textBoxTueS";
			this->textBoxTueS->Size = System::Drawing::Size(87, 26);
			this->textBoxTueS->TabIndex = 28;
			this->textBoxTueS->Text = L"00:00:00";
			// 
			// textBoxMonS
			// 
			this->textBoxMonS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxMonS->Location = System::Drawing::Point(119, 16);
			this->textBoxMonS->Name = L"textBoxMonS";
			this->textBoxMonS->Size = System::Drawing::Size(87, 26);
			this->textBoxMonS->TabIndex = 27;
			this->textBoxMonS->Text = L"00:00:00";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(53, 179);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(61, 20);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Sobota";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(61, 147);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 20);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Pi¹tek";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(38, 115);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 20);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Czwartek";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(61, 83);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 20);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Œroda";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(53, 51);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 20);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Wtorek";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(15, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 20);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Poniedzia³ek";
			// 
			// groupBoxUser
			// 
			this->groupBoxUser->Controls->Add(this->textBoxName);
			this->groupBoxUser->Controls->Add(this->checkBoxWorker);
			this->groupBoxUser->Controls->Add(this->textBoxPassword);
			this->groupBoxUser->Controls->Add(this->labelName);
			this->groupBoxUser->Controls->Add(this->label4);
			this->groupBoxUser->Controls->Add(this->labelSurname);
			this->groupBoxUser->Controls->Add(this->label5);
			this->groupBoxUser->Controls->Add(this->textBoxSurname);
			this->groupBoxUser->Controls->Add(this->textBoxLogin);
			this->groupBoxUser->Location = System::Drawing::Point(16, 53);
			this->groupBoxUser->Name = L"groupBoxUser";
			this->groupBoxUser->Size = System::Drawing::Size(422, 211);
			this->groupBoxUser->TabIndex = 15;
			this->groupBoxUser->TabStop = false;
			this->groupBoxUser->Text = L"U¿ytkownik";
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxName->Location = System::Drawing::Point(120, 19);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(290, 26);
			this->textBoxName->TabIndex = 6;
			// 
			// checkBoxWorker
			// 
			this->checkBoxWorker->AutoSize = true;
			this->checkBoxWorker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxWorker->Location = System::Drawing::Point(6, 178);
			this->checkBoxWorker->Name = L"checkBoxWorker";
			this->checkBoxWorker->Size = System::Drawing::Size(100, 24);
			this->checkBoxWorker->TabIndex = 12;
			this->checkBoxWorker->Text = L"Pracownik";
			this->checkBoxWorker->UseVisualStyleBackColor = true;
			this->checkBoxWorker->CheckedChanged += gcnew System::EventHandler(this, &Aplikacja::checkBoxWorker_CheckedChanged);
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxPassword->Location = System::Drawing::Point(120, 142);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(290, 26);
			this->textBoxPassword->TabIndex = 14;
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelName->Location = System::Drawing::Point(14, 22);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(43, 20);
			this->labelName->TabIndex = 3;
			this->labelName->Text = L"Imie:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(14, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 20);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Has³o:";
			// 
			// labelSurname
			// 
			this->labelSurname->AutoSize = true;
			this->labelSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelSurname->Location = System::Drawing::Point(14, 63);
			this->labelSurname->Name = L"labelSurname";
			this->labelSurname->Size = System::Drawing::Size(80, 20);
			this->labelSurname->TabIndex = 4;
			this->labelSurname->Text = L"Nazwisko:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(14, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Login:";
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxSurname->Location = System::Drawing::Point(120, 60);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(290, 26);
			this->textBoxSurname->TabIndex = 7;
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxLogin->Location = System::Drawing::Point(120, 101);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(290, 26);
			this->textBoxLogin->TabIndex = 8;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonAdd->Location = System::Drawing::Point(16, 491);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(100, 34);
			this->buttonAdd->TabIndex = 11;
			this->buttonAdd->Text = L"Dodaj";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Aplikacja::buttonAdd_Click);
			// 
			// buttonEdit
			// 
			this->buttonEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonEdit->Location = System::Drawing::Point(173, 491);
			this->buttonEdit->Name = L"buttonEdit";
			this->buttonEdit->Size = System::Drawing::Size(100, 34);
			this->buttonEdit->TabIndex = 10;
			this->buttonEdit->Text = L"Edytuj";
			this->buttonEdit->UseVisualStyleBackColor = true;
			this->buttonEdit->Visible = false;
			this->buttonEdit->Click += gcnew System::EventHandler(this, &Aplikacja::buttonEdit_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonDelete->Location = System::Drawing::Point(326, 491);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(100, 34);
			this->buttonDelete->TabIndex = 9;
			this->buttonDelete->Text = L"Usuñ:";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Visible = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &Aplikacja::buttonDelete_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxSearch->Location = System::Drawing::Point(16, 17);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(316, 26);
			this->textBoxSearch->TabIndex = 2;
			// 
			// buttonSearch
			// 
			this->buttonSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonSearch->Location = System::Drawing::Point(338, 13);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(100, 34);
			this->buttonSearch->TabIndex = 1;
			this->buttonSearch->Text = L"Szukaj";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &Aplikacja::buttonSearch_Click);
			// 
			// dataGridViewUsers
			// 
			this->dataGridViewUsers->AllowUserToAddRows = false;
			this->dataGridViewUsers->AllowUserToDeleteRows = false;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewUsers->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridViewUsers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewUsers->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridViewUsers->Location = System::Drawing::Point(444, 6);
			this->dataGridViewUsers->Name = L"dataGridViewUsers";
			this->dataGridViewUsers->RowHeadersVisible = false;
			this->dataGridViewUsers->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewUsers->Size = System::Drawing::Size(408, 519);
			this->dataGridViewUsers->TabIndex = 0;
			this->dataGridViewUsers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Aplikacja::dataGridViewUsers_CellClick);
			// 
			// Aplikacja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 584);
			this->Controls->Add(this->tabControlChangePassword);
			this->Name = L"Aplikacja";
			this->Text = L"Aplikacja";
			this->Load += gcnew System::EventHandler(this, &Aplikacja::Aplikacja_Load);
			this->tabControlChangePassword->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBoxWorkHours->ResumeLayout(false);
			this->groupBoxWorkHours->PerformLayout();
			this->groupBox->ResumeLayout(false);
			this->groupBoxUser->ResumeLayout(false);
			this->groupBoxUser->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewUsers))->EndInit();
			this->ResumeLayout(false);

		}
		#pragma endregion

		private: Void buttonChange_show() {
			if (textBoxOldPassword->Text != "" && textBoxNewPassword->Text == textBoxRepeatPassword->Text && textBoxOldPassword->Text != textBoxNewPassword->Text) {
				buttonChange->Enabled = true;
			}
			else {
				buttonChange->Enabled = false;
			}
		}
		private: System::Void Aplikacja_Load(System::Object^ sender, System::EventArgs^ e) {
			refreshDGV();
		}

		private: System::Void textBoxOldPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			buttonChange_show();
		}

		private: System::Void textBoxNewPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			buttonChange_show();
		}

		private: System::Void textBoxRepeatPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			buttonChange_show();
		}

		private: System::Void buttonChange_Click(System::Object^ sender, System::EventArgs^ e) {
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			String^ query = "update przychodnia.user "
							"set user_password = '"+textBoxNewPassword->Text+"' "
							"where user_id = "+user_id+" "
							"and user_password = '"+textBoxOldPassword->Text+"'; ";
			MySqlCommand^ queryExec = gcnew MySqlCommand(query, connection);
			try {
				connection->Open();
				if (queryExec->ExecuteNonQuery()) {
					MessageBox::Show("Has³o zmienione.");
				}
				else {
					MessageBox::Show("Has³o niepoprawne.");
				}
			}
			catch(Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			finally {
				connection->Close();
			}
		}

		private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			String^ query = "select user_id, user_name as Imie, user_surname as Nazwisko, user_login as Login, user_worker as Pracownik "
							"from przychodnia.user "
							"where concat(user_name, ' ', user_surname, user_login) like '%"+textBoxSearch->Text+"%'; ";
			MySqlCommand^ queryExec = gcnew MySqlCommand(query, connection);
			try {
				connection->Open();
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter();
				adapter->SelectCommand = queryExec;
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				BindingSource^ source = gcnew BindingSource();
				source->DataSource = dt;
				dataGridViewUsers->DataSource = source;
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			finally {
				connection->Close();
			}
			dataGridViewUsers->Columns[0]->Visible = false;
		}

		private: System::Void dataGridViewUsers_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			if (e->RowIndex >= 0) {
				rekord_id = Convert::ToInt32(dataGridViewUsers->Rows[e->RowIndex]->Cells[0]->Value);
				textBoxName->Text = dataGridViewUsers->Rows[e->RowIndex]->Cells[1]->Value->ToString();
				textBoxSurname->Text = dataGridViewUsers->Rows[e->RowIndex]->Cells[2]->Value->ToString();
				textBoxLogin->Text = dataGridViewUsers->Rows[e->RowIndex]->Cells[3]->Value->ToString();
				checkBoxWorker->Checked = Convert::ToBoolean(dataGridViewUsers->Rows[e->RowIndex]->Cells[4]->Value);
				buttonEdit->Visible = true;
				buttonDelete->Visible = true;
			}

			if (checkBoxWorker->Checked) {
				MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
				String^ query = "select * "
								"from przychodnia.workhours "
								"where workHours_user_id = '"+ rekord_id +"';";
				MySqlCommand^ queryExec = gcnew MySqlCommand(query, connection);
				MySqlDataReader^ reader;
				try {
					connection->Open();
					reader = queryExec->ExecuteReader();
					while (reader->Read()) {
						textBoxMonS->Text = reader->GetString("workHours_monday_start");
						textBoxMonE->Text = reader->GetString("workHours_monday_end");
						textBoxTueS->Text = reader->GetString("workHours_tuesday_start");
						textBoxTueE->Text = reader->GetString("workHours_tuesday_end");
						textBoxWedS->Text = reader->GetString("workHours_wednesday_start");
						textBoxWedE->Text = reader->GetString("workHours_wednesday_end");
						textBoxThuS->Text = reader->GetString("workHours_thursday_start");
						textBoxThuE->Text = reader->GetString("workHours_thursday_end");
						textBoxFriS->Text = reader->GetString("workHours_friday_start");
						textBoxFriE->Text = reader->GetString("workHours_friday_end");
						textBoxSatS->Text = reader->GetString("workHours_saturday_start");
						textBoxSatE->Text = reader->GetString("workHours_saturday_end");
					}
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
				finally {
					connection->Close();
				}
			}
		}

		private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBoxName->Text->Length < 3 || textBoxSurname->Text->Length < 3 || textBoxLogin->Text->Length <= 3) {
				MessageBox::Show("Uzupe³nij dane.");
				return;
			}
			else {
				if (checkBoxWorker->Checked) {
					pracownik_typ = 1;
				}
				else {
					pracownik_typ = 0;
				}
			}

			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			MySqlCommand^ queryExec = connection->CreateCommand();
			connection->Open();
			MySqlTransaction^ transaction = connection->BeginTransaction(IsolationLevel::ReadCommitted);
			queryExec->Connection = connection;
			queryExec->Transaction = transaction;

			try {
				String^ queryUser = "insert into przychodnia.user "
									"set user_name = '"+ textBoxName->Text +"' "
									", user_surname = '"+ textBoxSurname->Text +"' "
									", user_login = '"+ textBoxLogin->Text +"' "
									", user_password = '"+ textBoxPassword->Text +"' "
									", user_worker = "+ pracownik_typ +"; ";
				queryExec->CommandText = queryUser;
				queryExec->ExecuteNonQuery();
				if (checkBoxWorker->Checked) {
					String^ queryWorkHours = "insert into przychodnia.workhours "
						"set workHours_user_id = last_insert_id() "
						", workHours_monday_start = '" + textBoxMonS->Text + "' "
						", workHours_monday_end = '" + textBoxMonE->Text + "' "
						", workHours_tuesday_start = '" + textBoxTueS->Text + "' "
						", workHours_tuesday_end = '" + textBoxTueE->Text + "' "
						", workHours_wednesday_start = '" + textBoxWedS->Text + "' "
						", workHours_wednesday_end = '" + textBoxWedE->Text + "' "
						", workHours_thursday_start = '" + textBoxThuS->Text + "' "
						", workHours_thursday_end = '" + textBoxThuS->Text + "' "
						", workHours_friday_start = '" + textBoxFriS->Text + "' "
						", workHours_friday_end = '" + textBoxFriE->Text + "' "
						", workHours_saturday_start = '" + textBoxSatS->Text + "' "
						", workHours_saturday_end = '" + textBoxSatE->Text + "'; ";
					queryExec->CommandText = queryWorkHours;
					queryExec->ExecuteNonQuery();
				}
				transaction->Commit();

				if (checkBoxWorker->Checked) {
					MessageBox::Show("Pracownik " + textBoxLogin->Text + " zosta³ dodany");
				}
				else {
					MessageBox::Show("U¿ytkownik " + textBoxLogin->Text + " zosta³ dodany");
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
				transaction->Rollback();
			}
			finally {
				connection->Close();
				clearControls(groupBoxUser);
				clearControls(groupBoxWorkHours);
				refreshDGV();
			}
		}

		private: System::Void buttonEdit_Click(System::Object^ sender, System::EventArgs^ e) {
			if (rekord_id == 1) {
				MessageBox::Show("Nie mo¿na edytowaæ u¿ytkownika admin.");
				return;
			}
			if (textBoxName->Text->Length < 3 || textBoxSurname->Text->Length < 3 || textBoxLogin->Text->Length <= 3) {
				MessageBox::Show("Uzupe³nij dane.");
				return;
			}
			else {
				if (checkBoxWorker->Checked) {
					pracownik_typ = 1;
				}
				else {
					pracownik_typ = 0;
				}
			}
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			MySqlCommand^ queryExec = connection->CreateCommand();
			connection->Open();
			MySqlTransaction^ transaction = connection->BeginTransaction(IsolationLevel::ReadCommitted);
			queryExec->Connection = connection;
			queryExec->Transaction = transaction;
			try {
				String^ querySelect = "select * "
										"from przychodnia.workHours "
										"where workHours_user_id = " + rekord_id +";";
				queryExec->CommandText = querySelect;
				MySqlDataReader^ result = queryExec->ExecuteReader();
				result->Close();
				String^ queryUpdate = "update przychodnia.user "
										"set user_name = '" + textBoxName->Text + "' "
										", user_surname = '" + textBoxSurname->Text + "' "
										", user_login = '" + textBoxLogin->Text + "' "
										", user_password = '" + textBoxPassword->Text + "' "
										", user_worker = " + pracownik_typ + " "
										" where user_id = "+ rekord_id + ";";
				queryExec->CommandText = queryUpdate;
				queryExec->ExecuteNonQuery();

				if (result->HasRows == true && checkBoxWorker->Checked == true) {
					String^ queryUpdate = "update przychodnia.workHours "
						"set workHours_monday_start = '" + textBoxMonS->Text + "' "
						", workHours_monday_end = '" + textBoxMonE->Text + "' "
						", workHours_tuesday_start = '" + textBoxTueS->Text + "' "
						", workHours_tuesday_end = '" + textBoxTueE->Text + "' "
						", workHours_wednesday_start = '" + textBoxWedS->Text + "' "
						", workHours_wednesday_end = '" + textBoxWedE->Text + "' "
						", workHours_thursday_start = '" + textBoxThuS->Text + "' "
						", workHours_thursday_end = '" + textBoxThuE->Text + "' "
						", workHours_friday_start = '" + textBoxFriS->Text + "' "
						", workHours_friday_end = '" + textBoxFriE->Text + "' "
						", workHours_saturday_start = '" + textBoxSatS->Text + "' "
						", workHours_saturday_end = '" + textBoxSatE->Text + "' "
						"where workHours_user_id = "+ rekord_id +";";
					queryExec->CommandText = queryUpdate;
					queryExec->ExecuteNonQuery();
				}
				else if (checkBoxWorker->Checked == true){
					String^ queryWorkHours = "insert into przychodnia.workhours "
						"set workHours_user_id = "+ rekord_id +" "
						", workHours_monday_start = '" + textBoxMonS->Text + "' "
						", workHours_monday_end = '" + textBoxMonE->Text + "' "
						", workHours_tuesday_start = '" + textBoxTueS->Text + "' "
						", workHours_tuesday_end = '" + textBoxTueE->Text + "' "
						", workHours_wednesday_start = '" + textBoxWedS->Text + "' "
						", workHours_wednesday_end = '" + textBoxWedE->Text + "' "
						", workHours_thursday_start = '" + textBoxThuS->Text + "' "
						", workHours_thursday_end = '" + textBoxThuE->Text + "' "
						", workHours_friday_start = '" + textBoxFriS->Text + "' "
						", workHours_friday_end = '" + textBoxFriE->Text + "' "
						", workHours_saturday_start = '" + textBoxSatS->Text + "' "
						", workHours_saturday_end = '" + textBoxSatE->Text + "'; ";
					queryExec->CommandText = queryWorkHours;
					queryExec->ExecuteNonQuery();
				}

				transaction->Commit();
				if (checkBoxWorker->Checked) {
					MessageBox::Show("Pracownik " + textBoxLogin->Text + " zosta³ edytowany");
				}
				else {
					MessageBox::Show("U¿ytkownik " + textBoxLogin->Text + " zosta³ edytowany");
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
				transaction->Rollback();
			}
			finally {
				connection->Close();
				clearControls(groupBoxUser);
				refreshDGV();
			}
		}

		private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
			if (rekord_id == 1) {
				MessageBox::Show("Nie mo¿na usun¹æ u¿ytkownika admin.");
				return;
			}
			if (MessageBox::Show("Czy na pewno chcesz usun¹æ u¿ytkownika?", "Uwaga", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No) {
				return;
			}
			if (checkBoxWorker->Checked) {
				pracownik_typ = 1;
			}
			else {
				pracownik_typ = 0;
			}
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			MySqlCommand^ queryExec = connection->CreateCommand();
			connection->Open();
			MySqlTransaction^ transaction = connection->BeginTransaction(IsolationLevel::ReadCommitted);
			queryExec->Connection = connection;
			queryExec->Transaction = transaction;
			try {
				String^ queryUser = "delete from przychodnia.user "
								"where user_id = " + rekord_id + "; ";
				queryExec->CommandText = queryUser;
				queryExec->ExecuteNonQuery();
				if (checkBoxWorker->Checked) {
					String^ queryWorkHours = "delete from przychodnia.workhours "
											"where workHours_user_id = " + rekord_id + "; ";
					queryExec->CommandText = queryWorkHours;
					queryExec->ExecuteNonQuery();
				}
				transaction->Commit();
				MessageBox::Show("U¿ytkownik zosta³ usuniêty.");
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
				transaction->Rollback();
			}
			finally {
				connection->Close();
				clearControls(groupBoxUser);
				clearControls(groupBoxWorkHours);
				refreshDGV();
			}
		}

		private: System::Void refreshDGV() {
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			String^ query = "select user_id, user_name as Imie, user_surname as Nazwisko, user_login as Login, user_worker as Pracownik "
							"from przychodnia.user ";
			MySqlCommand^ queryExec = gcnew MySqlCommand(query, connection);
			try {
				connection->Open();
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter();
				adapter->SelectCommand = queryExec;
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				BindingSource^ source = gcnew BindingSource();
				source->DataSource = dt;
				dataGridViewUsers->DataSource = source;
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			finally {
				connection->Close();
			}
			dataGridViewUsers->Columns[0]->Visible = false;
		}

		private: System::Void clearControls(Control^ controls) {
			for each (Control^ control in controls->Controls)
			{
				if (control->GetType() == TextBox::typeid) {
					control->Text = "";
				}
				checkBoxWorker->Checked = false;
			}
		}

		private: System::Void setWorkHours(int hour) {
			array<TextBox^>^ starts = { textBoxMonS, textBoxTueS, textBoxWedS, textBoxThuS, textBoxFriS, textBoxSatS };
			array<TextBox^>^ ends = { textBoxMonE, textBoxTueE, textBoxWedE, textBoxThuE, textBoxFriE, textBoxSatE };

			for (int i = 0; i <= 5; i++) {
				starts[i]->Text = hour + ":00";
				ends[i]->Text = hour + 8 + ":00";
			}
		}

		private: System::Void checkBoxWorker_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBoxWorker->Checked) {
				groupBoxWorkHours->Visible = true;
			}
			else {
				groupBoxWorkHours->Visible = false;
			}
		}

		private: System::Void button715_Click(System::Object^ sender, System::EventArgs^ e) {
			setWorkHours(7);
		}
		private: System::Void button816_Click(System::Object^ sender, System::EventArgs^ e) {
			setWorkHours(8);
		}
		private: System::Void button917_Click(System::Object^ sender, System::EventArgs^ e) {
			setWorkHours(9);
		}
		private: System::Void button1018_Click(System::Object^ sender, System::EventArgs^ e) {
			setWorkHours(10);
		}
	};
}
