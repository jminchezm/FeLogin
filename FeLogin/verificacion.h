#pragma once
#include "Conexion.h"
#include "verificacion.h"

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
	/// Resumen de verificacion
	/// </summary>
	public ref class verificacion : public System::Windows::Forms::Form
	{
	public:
		verificacion(void)
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
		~verificacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btSalir;





	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtCodigo;
	private: System::Windows::Forms::TextBox^ txtDeporte;
	private: System::Windows::Forms::TextBox^ txtColor;
	private: System::Windows::Forms::TextBox^ txtMascota;
	private: System::Windows::Forms::TextBox^ txtFecha;










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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btSalir = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->txtDeporte = (gcnew System::Windows::Forms::TextBox());
			this->txtColor = (gcnew System::Windows::Forms::TextBox());
			this->txtMascota = (gcnew System::Windows::Forms::TextBox());
			this->txtFecha = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(330, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Datos Especiales";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(216, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Deporte Favorito";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(216, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Color Favorito";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(216, 251);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nombre de Mascota";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(216, 300);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Fecha importante";
			// 
			// btSalir
			// 
			this->btSalir->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSalir->Location = System::Drawing::Point(381, 390);
			this->btSalir->Name = L"btSalir";
			this->btSalir->Size = System::Drawing::Size(102, 37);
			this->btSalir->TabIndex = 9;
			this->btSalir->Text = L"Salir";
			this->btSalir->UseVisualStyleBackColor = true;
			this->btSalir->Click += gcnew System::EventHandler(this, &verificacion::btSalir_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(216, 124);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Dpi de Usuario";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(381, 347);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 37);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Ingresar Datos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &verificacion::button1_Click);
			// 
			// txtCodigo
			// 
			this->txtCodigo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCodigo->Location = System::Drawing::Point(367, 120);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(242, 23);
			this->txtCodigo->TabIndex = 13;
			// 
			// txtDeporte
			// 
			this->txtDeporte->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDeporte->Location = System::Drawing::Point(367, 164);
			this->txtDeporte->Name = L"txtDeporte";
			this->txtDeporte->Size = System::Drawing::Size(242, 23);
			this->txtDeporte->TabIndex = 14;
			// 
			// txtColor
			// 
			this->txtColor->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtColor->Location = System::Drawing::Point(367, 205);
			this->txtColor->Name = L"txtColor";
			this->txtColor->Size = System::Drawing::Size(242, 23);
			this->txtColor->TabIndex = 15;
			// 
			// txtMascota
			// 
			this->txtMascota->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMascota->Location = System::Drawing::Point(367, 247);
			this->txtMascota->Name = L"txtMascota";
			this->txtMascota->Size = System::Drawing::Size(242, 23);
			this->txtMascota->TabIndex = 16;
			// 
			// txtFecha
			// 
			this->txtFecha->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFecha->Location = System::Drawing::Point(367, 296);
			this->txtFecha->Name = L"txtFecha";
			this->txtFecha->Size = System::Drawing::Size(242, 23);
			this->txtFecha->TabIndex = 17;
			// 
			// verificacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(791, 462);
			this->Controls->Add(this->txtFecha);
			this->Controls->Add(this->txtMascota);
			this->Controls->Add(this->txtColor);
			this->Controls->Add(this->txtDeporte);
			this->Controls->Add(this->txtCodigo);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btSalir);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"verificacion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"verificacion";
			this->Load += gcnew System::EventHandler(this, &verificacion::verificacion_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void verificacion_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion datosUsuario;
		datosUsuario.insertar2(Convert::ToInt64(txtCodigo->Text), txtDeporte->Text, txtColor->Text, txtMascota->Text, txtFecha->Text);

		MessageBox::Show("Datos ingresados y guardados correctamente", "Registro guardado", MessageBoxButtons::OK, MessageBoxIcon::Information);
	
		txtCodigo->Text = "";
		txtDeporte->Text = "";
		txtColor->Text = "";
		txtMascota->Text = "";
		txtFecha->Text = "";
	}
};
}
