#pragma once
//#include "inicio.h"

namespace FeLogin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de formulario
	/// </summary>
	public ref class formulario : public System::Windows::Forms::Form
	{
	public:
		formulario(void)
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
		~formulario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ lbdpi;
	private: System::Windows::Forms::Label^ lb1nombre;
	private: System::Windows::Forms::Label^ lb2nombre;
	private: System::Windows::Forms::Label^ lb1apellido;
	private: System::Windows::Forms::Label^ lb2apellido;
	private: System::Windows::Forms::Label^ lbedad;
	private: System::Windows::Forms::Label^ lbsexosi;
	private: System::Windows::Forms::Label^ lbtelefono;
	private: System::Windows::Forms::Label^ lbdireccion;
	private: System::Windows::Forms::Button^ btnCancelar;

	protected:






	protected:




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(formulario::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->lbdpi = (gcnew System::Windows::Forms::Label());
			this->lb1nombre = (gcnew System::Windows::Forms::Label());
			this->lb2nombre = (gcnew System::Windows::Forms::Label());
			this->lb1apellido = (gcnew System::Windows::Forms::Label());
			this->lb2apellido = (gcnew System::Windows::Forms::Label());
			this->lbedad = (gcnew System::Windows::Forms::Label());
			this->lbsexosi = (gcnew System::Windows::Forms::Label());
			this->lbtelefono = (gcnew System::Windows::Forms::Label());
			this->lbdireccion = (gcnew System::Windows::Forms::Label());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnCancelar);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(231, 527);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F));
			this->button1->Location = System::Drawing::Point(0, 219);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(231, 33);
			this->button1->TabIndex = 190;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(231, 219);
			this->panel3->TabIndex = 189;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->ImageLocation = L"C:\\Users\\josue\\source\\repos\\FeLogin\\img\\zz.gif";
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(46, 42);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(128, 132);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 189;
			this->pictureBox2->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->Controls->Add(this->numericUpDown1);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->lbdpi);
			this->panel2->Controls->Add(this->lb1nombre);
			this->panel2->Controls->Add(this->lb2nombre);
			this->panel2->Controls->Add(this->lb1apellido);
			this->panel2->Controls->Add(this->lb2apellido);
			this->panel2->Controls->Add(this->lbedad);
			this->panel2->Controls->Add(this->lbsexosi);
			this->panel2->Controls->Add(this->lbtelefono);
			this->panel2->Controls->Add(this->lbdireccion);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(231, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(570, 527);
			this->panel2->TabIndex = 1;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(246, 296);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(95, 20);
			this->numericUpDown1->TabIndex = 191;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"M", L"F" });
			this->comboBox1->Location = System::Drawing::Point(413, 295);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(95, 21);
			this->comboBox1->TabIndex = 190;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::Gray;
			this->textBox8->Location = System::Drawing::Point(246, 372);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(262, 25);
			this->textBox8->TabIndex = 186;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Gray;
			this->textBox5->Location = System::Drawing::Point(246, 332);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(262, 25);
			this->textBox5->TabIndex = 185;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Gray;
			this->textBox2->Location = System::Drawing::Point(246, 256);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(262, 25);
			this->textBox2->TabIndex = 184;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Gray;
			this->textBox3->Location = System::Drawing::Point(246, 216);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(262, 25);
			this->textBox3->TabIndex = 183;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::Gray;
			this->textBox4->Location = System::Drawing::Point(246, 176);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(262, 25);
			this->textBox4->TabIndex = 182;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::Gray;
			this->textBox10->Location = System::Drawing::Point(246, 140);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(262, 25);
			this->textBox10->TabIndex = 181;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::Gray;
			this->textBox9->Location = System::Drawing::Point(246, 100);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(262, 25);
			this->textBox9->TabIndex = 180;
			// 
			// lbdpi
			// 
			this->lbdpi->AutoSize = true;
			this->lbdpi->BackColor = System::Drawing::Color::Transparent;
			this->lbdpi->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbdpi->ForeColor = System::Drawing::Color::White;
			this->lbdpi->Location = System::Drawing::Point(74, 100);
			this->lbdpi->Name = L"lbdpi";
			this->lbdpi->Size = System::Drawing::Size(34, 17);
			this->lbdpi->TabIndex = 179;
			this->lbdpi->Text = L"Dpi:";
			// 
			// lb1nombre
			// 
			this->lb1nombre->AutoSize = true;
			this->lb1nombre->BackColor = System::Drawing::Color::Transparent;
			this->lb1nombre->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb1nombre->ForeColor = System::Drawing::Color::White;
			this->lb1nombre->Location = System::Drawing::Point(75, 140);
			this->lb1nombre->Name = L"lb1nombre";
			this->lb1nombre->Size = System::Drawing::Size(107, 17);
			this->lb1nombre->TabIndex = 178;
			this->lb1nombre->Text = L"Primer Nombre:";
			// 
			// lb2nombre
			// 
			this->lb2nombre->AutoSize = true;
			this->lb2nombre->BackColor = System::Drawing::Color::Transparent;
			this->lb2nombre->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb2nombre->ForeColor = System::Drawing::Color::White;
			this->lb2nombre->Location = System::Drawing::Point(74, 179);
			this->lb2nombre->Name = L"lb2nombre";
			this->lb2nombre->Size = System::Drawing::Size(120, 17);
			this->lb2nombre->TabIndex = 177;
			this->lb2nombre->Text = L"Segundo Nombre:";
			// 
			// lb1apellido
			// 
			this->lb1apellido->AutoSize = true;
			this->lb1apellido->BackColor = System::Drawing::Color::Transparent;
			this->lb1apellido->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb1apellido->ForeColor = System::Drawing::Color::White;
			this->lb1apellido->Location = System::Drawing::Point(75, 219);
			this->lb1apellido->Name = L"lb1apellido";
			this->lb1apellido->Size = System::Drawing::Size(109, 17);
			this->lb1apellido->TabIndex = 176;
			this->lb1apellido->Text = L"Primer Apellido:";
			// 
			// lb2apellido
			// 
			this->lb2apellido->AutoSize = true;
			this->lb2apellido->BackColor = System::Drawing::Color::Transparent;
			this->lb2apellido->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb2apellido->ForeColor = System::Drawing::Color::White;
			this->lb2apellido->Location = System::Drawing::Point(74, 256);
			this->lb2apellido->Name = L"lb2apellido";
			this->lb2apellido->Size = System::Drawing::Size(126, 17);
			this->lb2apellido->TabIndex = 175;
			this->lb2apellido->Text = L"Segundo Apellido: ";
			// 
			// lbedad
			// 
			this->lbedad->AutoSize = true;
			this->lbedad->BackColor = System::Drawing::Color::Transparent;
			this->lbedad->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbedad->ForeColor = System::Drawing::Color::White;
			this->lbedad->Location = System::Drawing::Point(74, 295);
			this->lbedad->Name = L"lbedad";
			this->lbedad->Size = System::Drawing::Size(42, 17);
			this->lbedad->TabIndex = 174;
			this->lbedad->Text = L"Edad:";
			// 
			// lbsexosi
			// 
			this->lbsexosi->AutoSize = true;
			this->lbsexosi->BackColor = System::Drawing::Color::Transparent;
			this->lbsexosi->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbsexosi->ForeColor = System::Drawing::Color::White;
			this->lbsexosi->Location = System::Drawing::Point(366, 298);
			this->lbsexosi->Name = L"lbsexosi";
			this->lbsexosi->Size = System::Drawing::Size(41, 17);
			this->lbsexosi->TabIndex = 173;
			this->lbsexosi->Text = L"Sexo:";
			// 
			// lbtelefono
			// 
			this->lbtelefono->AutoSize = true;
			this->lbtelefono->BackColor = System::Drawing::Color::Transparent;
			this->lbtelefono->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbtelefono->ForeColor = System::Drawing::Color::White;
			this->lbtelefono->Location = System::Drawing::Point(74, 335);
			this->lbtelefono->Name = L"lbtelefono";
			this->lbtelefono->Size = System::Drawing::Size(66, 17);
			this->lbtelefono->TabIndex = 172;
			this->lbtelefono->Text = L"Telefono:";
			// 
			// lbdireccion
			// 
			this->lbdireccion->AutoSize = true;
			this->lbdireccion->BackColor = System::Drawing::Color::Transparent;
			this->lbdireccion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbdireccion->ForeColor = System::Drawing::Color::White;
			this->lbdireccion->Location = System::Drawing::Point(74, 372);
			this->lbdireccion->Name = L"lbdireccion";
			this->lbdireccion->Size = System::Drawing::Size(70, 17);
			this->lbdireccion->TabIndex = 171;
			this->lbdireccion->Text = L"Direccion:";
			// 
			// btnCancelar
			// 
			this->btnCancelar->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F));
			this->btnCancelar->Location = System::Drawing::Point(0, 252);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(231, 33);
			this->btnCancelar->TabIndex = 191;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &formulario::btnCancelar_Click_1);
			// 
			// formulario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(801, 527);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"formulario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"formulario";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
private: System::Void btncancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void btnguardar_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*formulario::Visible = false;//cerramos un formulario*/
	//FeLogin::inicio^ ini = gcnew FeLogin::inicio();
	//ini->Show();

}
private: System::Void btnCancelar_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Close();
	/*formulario::Visible = false;//cerramos un formulario
	FeLogin::inicio^ ini = gcnew FeLogin::inicio();
	ini->Show();*/
}
};
}
