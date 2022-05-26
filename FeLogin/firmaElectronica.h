#pragma once
#include <cstdlib>

namespace FeLogin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Data;
	using namespace Data::SqlClient;

	/// <summary>
	/// Resumen de firmaElectronica
	/// </summary>
	public ref class firmaElectronica : public System::Windows::Forms::Form
	{
	public:
		firmaElectronica(void)
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
		~firmaElectronica()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lblnombre;
	private: System::Windows::Forms::Label^ lbldpi;
	private: System::Windows::Forms::Label^ lblfirma;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblnombre = (gcnew System::Windows::Forms::Label());
			this->lbldpi = (gcnew System::Windows::Forms::Label());
			this->lblfirma = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(329, 258);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generar Firma Electrónica";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &firmaElectronica::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(553, 397);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(8, 8);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// lblnombre
			// 
			this->lblnombre->AutoSize = true;
			this->lblnombre->Location = System::Drawing::Point(193, 109);
			this->lblnombre->Name = L"lblnombre";
			this->lblnombre->Size = System::Drawing::Size(141, 13);
			this->lblnombre->TabIndex = 2;
			this->lblnombre->Text = L"Johny David Chiroy Guarcax";
			// 
			// lbldpi
			// 
			this->lbldpi->AutoSize = true;
			this->lbldpi->Location = System::Drawing::Point(528, 109);
			this->lbldpi->Name = L"lbldpi";
			this->lbldpi->Size = System::Drawing::Size(85, 13);
			this->lbldpi->TabIndex = 3;
			this->lbldpi->Text = L"3108198060701";
			// 
			// lblfirma
			// 
			this->lblfirma->AutoSize = true;
			this->lblfirma->Location = System::Drawing::Point(376, 201);
			this->lblfirma->Name = L"lblfirma";
			this->lblfirma->Size = System::Drawing::Size(67, 13);
			this->lblfirma->TabIndex = 4;
			this->lblfirma->Text = L"0102030405";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(370, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"BIENVENIDO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(238, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Nombre ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(550, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"DPI";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(370, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Firma Electrónica";
			// 
			// firmaElectronica
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(791, 462);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblfirma);
			this->Controls->Add(this->lbldpi);
			this->Controls->Add(this->lblnombre);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"firmaElectronica";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"firmaElectronica";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ firmaElectronica = Convert::ToString(1000000000000000000 + rand() % (9999999999999999999 - 1000000000000000000));
		MessageBox::Show(firmaElectronica);
	}
};
}
