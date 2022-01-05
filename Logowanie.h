#pragma once

#include "Aplikacja.h"

namespace Przychodnia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Logowanie
	/// </summary>
	public ref class Logowanie : public System::Windows::Forms::Form
	{
	public:
		Logowanie(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonZaloguj;
	private: System::Windows::Forms::Button^ buttonAnuluj;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxLogin;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
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
			this->buttonZaloguj = (gcnew System::Windows::Forms::Button());
			this->buttonAnuluj = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonZaloguj
			// 
			this->buttonZaloguj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonZaloguj->Location = System::Drawing::Point(58, 191);
			this->buttonZaloguj->Name = L"buttonZaloguj";
			this->buttonZaloguj->Size = System::Drawing::Size(75, 23);
			this->buttonZaloguj->TabIndex = 0;
			this->buttonZaloguj->Text = L"Zaloguj";
			this->buttonZaloguj->UseVisualStyleBackColor = true;
			this->buttonZaloguj->Click += gcnew System::EventHandler(this, &Logowanie::buttonZaloguj_Click);
			// 
			// buttonAnuluj
			// 
			this->buttonAnuluj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonAnuluj->Location = System::Drawing::Point(160, 191);
			this->buttonAnuluj->Name = L"buttonAnuluj";
			this->buttonAnuluj->Size = System::Drawing::Size(75, 23);
			this->buttonAnuluj->TabIndex = 1;
			this->buttonAnuluj->Text = L"Anuluj";
			this->buttonAnuluj->UseVisualStyleBackColor = true;
			this->buttonAnuluj->Click += gcnew System::EventHandler(this, &Logowanie::buttonAnuluj_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(56, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Login:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(56, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password:";
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxLogin->Location = System::Drawing::Point(145, 55);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(100, 22);
			this->textBoxLogin->TabIndex = 4;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxPassword->Location = System::Drawing::Point(145, 123);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(100, 22);
			this->textBoxPassword->TabIndex = 5;
			// 
			// Logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonAnuluj);
			this->Controls->Add(this->buttonZaloguj);
			this->Name = L"Logowanie";
			this->Text = L"Logowanie";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion

		private: System::Void buttonAnuluj_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

		private: System::Void buttonZaloguj_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ connectionString = L"datasource=localhost; port=3306; username=root; password=Pass1234; database=przychodnia";
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			String^ query = "select user_id "
							"from przychodnia.user "
							"where user_login = '"+textBoxLogin->Text+"' "
							"and user_password = '"+textBoxPassword->Text+"'; ";
			MySqlCommand^ queryExec = gcnew MySqlCommand(query, connection);
			MySqlDataReader^ result;
			try {
				connection->Open();
				result = queryExec->ExecuteReader();
				if (result->Read()) {
					int user_id = result->GetInt32(0);
					this->Hide();
					Aplikacja^ aplikacja = gcnew Aplikacja(user_id);
					aplikacja->ShowDialog();
					this->Close();
				}
				else {
					MessageBox::Show("B³êdne dane logowania.", "B³¹d");
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			finally {
				connection->Close();
			}
		}
	};
}
