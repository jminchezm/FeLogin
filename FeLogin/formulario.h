#pragma once

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

	private: System::Windows::Forms::Label^ lbusuario1;
	private: System::Windows::Forms::Label^ lbdireccion;
	private: System::Windows::Forms::Label^ lbtelefono;
	private: System::Windows::Forms::Label^ lbsexosi;
	private: System::Windows::Forms::Label^ lbedad;
	private: System::Windows::Forms::Label^ lb2apellido;
	private: System::Windows::Forms::Label^ lb1apellido;
	private: System::Windows::Forms::Label^ lb2nombre;
	private: System::Windows::Forms::Label^ lb1nombre;
	private: System::Windows::Forms::Label^ lbdpi;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ btnguardar;
	private: System::Windows::Forms::Button^ btncancelar;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			this->lbusuario1 = (gcnew System::Windows::Forms::Label());
			this->lbdireccion = (gcnew System::Windows::Forms::Label());
			this->lbtelefono = (gcnew System::Windows::Forms::Label());
			this->lbsexosi = (gcnew System::Windows::Forms::Label());
			this->lbedad = (gcnew System::Windows::Forms::Label());
			this->lb2apellido = (gcnew System::Windows::Forms::Label());
			this->lb1apellido = (gcnew System::Windows::Forms::Label());
			this->lb2nombre = (gcnew System::Windows::Forms::Label());
			this->lb1nombre = (gcnew System::Windows::Forms::Label());
			this->lbdpi = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->btnguardar = (gcnew System::Windows::Forms::Button());
			this->btncancelar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbusuario1
			// 
			this->lbusuario1->AutoSize = true;
			this->lbusuario1->BackColor = System::Drawing::Color::Transparent;
			this->lbusuario1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbusuario1->ForeColor = System::Drawing::Color::White;
			this->lbusuario1->Location = System::Drawing::Point(92, 41);
			this->lbusuario1->Name = L"lbusuario1";
			this->lbusuario1->Size = System::Drawing::Size(59, 17);
			this->lbusuario1->TabIndex = 1;
			this->lbusuario1->Text = L"Usuario:";
			// 
			// lbdireccion
			// 
			this->lbdireccion->AutoSize = true;
			this->lbdireccion->BackColor = System::Drawing::Color::Transparent;
			this->lbdireccion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbdireccion->ForeColor = System::Drawing::Color::White;
			this->lbdireccion->Location = System::Drawing::Point(92, 402);
			this->lbdireccion->Name = L"lbdireccion";
			this->lbdireccion->Size = System::Drawing::Size(70, 17);
			this->lbdireccion->TabIndex = 2;
			this->lbdireccion->Text = L"Direccion:";
			// 
			// lbtelefono
			// 
			this->lbtelefono->AutoSize = true;
			this->lbtelefono->BackColor = System::Drawing::Color::Transparent;
			this->lbtelefono->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbtelefono->ForeColor = System::Drawing::Color::White;
			this->lbtelefono->Location = System::Drawing::Point(92, 365);
			this->lbtelefono->Name = L"lbtelefono";
			this->lbtelefono->Size = System::Drawing::Size(66, 17);
			this->lbtelefono->TabIndex = 3;
			this->lbtelefono->Text = L"Telefono:";
			// 
			// lbsexosi
			// 
			this->lbsexosi->AutoSize = true;
			this->lbsexosi->BackColor = System::Drawing::Color::Transparent;
			this->lbsexosi->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbsexosi->ForeColor = System::Drawing::Color::White;
			this->lbsexosi->Location = System::Drawing::Point(92, 323);
			this->lbsexosi->Name = L"lbsexosi";
			this->lbsexosi->Size = System::Drawing::Size(41, 17);
			this->lbsexosi->TabIndex = 4;
			this->lbsexosi->Text = L"Sexo:";
			// 
			// lbedad
			// 
			this->lbedad->AutoSize = true;
			this->lbedad->BackColor = System::Drawing::Color::Transparent;
			this->lbedad->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbedad->ForeColor = System::Drawing::Color::White;
			this->lbedad->Location = System::Drawing::Point(92, 275);
			this->lbedad->Name = L"lbedad";
			this->lbedad->Size = System::Drawing::Size(42, 17);
			this->lbedad->TabIndex = 5;
			this->lbedad->Text = L"Edad:";
			// 
			// lb2apellido
			// 
			this->lb2apellido->AutoSize = true;
			this->lb2apellido->BackColor = System::Drawing::Color::Transparent;
			this->lb2apellido->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb2apellido->ForeColor = System::Drawing::Color::White;
			this->lb2apellido->Location = System::Drawing::Point(92, 236);
			this->lb2apellido->Name = L"lb2apellido";
			this->lb2apellido->Size = System::Drawing::Size(126, 17);
			this->lb2apellido->TabIndex = 6;
			this->lb2apellido->Text = L"Segundo Apellido: ";
			// 
			// lb1apellido
			// 
			this->lb1apellido->AutoSize = true;
			this->lb1apellido->BackColor = System::Drawing::Color::Transparent;
			this->lb1apellido->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb1apellido->ForeColor = System::Drawing::Color::White;
			this->lb1apellido->Location = System::Drawing::Point(93, 199);
			this->lb1apellido->Name = L"lb1apellido";
			this->lb1apellido->Size = System::Drawing::Size(109, 17);
			this->lb1apellido->TabIndex = 7;
			this->lb1apellido->Text = L"Primer Apellido:";
			// 
			// lb2nombre
			// 
			this->lb2nombre->AutoSize = true;
			this->lb2nombre->BackColor = System::Drawing::Color::Transparent;
			this->lb2nombre->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb2nombre->ForeColor = System::Drawing::Color::White;
			this->lb2nombre->Location = System::Drawing::Point(92, 159);
			this->lb2nombre->Name = L"lb2nombre";
			this->lb2nombre->Size = System::Drawing::Size(120, 17);
			this->lb2nombre->TabIndex = 8;
			this->lb2nombre->Text = L"Segundo Nombre:";
			// 
			// lb1nombre
			// 
			this->lb1nombre->AutoSize = true;
			this->lb1nombre->BackColor = System::Drawing::Color::Transparent;
			this->lb1nombre->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb1nombre->ForeColor = System::Drawing::Color::White;
			this->lb1nombre->Location = System::Drawing::Point(93, 120);
			this->lb1nombre->Name = L"lb1nombre";
			this->lb1nombre->Size = System::Drawing::Size(107, 17);
			this->lb1nombre->TabIndex = 9;
			this->lb1nombre->Text = L"Primer Nombre:";
			// 
			// lbdpi
			// 
			this->lbdpi->AutoSize = true;
			this->lbdpi->BackColor = System::Drawing::Color::Transparent;
			this->lbdpi->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbdpi->ForeColor = System::Drawing::Color::White;
			this->lbdpi->Location = System::Drawing::Point(92, 80);
			this->lbdpi->Name = L"lbdpi";
			this->lbdpi->Size = System::Drawing::Size(34, 17);
			this->lbdpi->TabIndex = 10;
			this->lbdpi->Text = L"Dpi:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Gray;
			this->textBox1->Location = System::Drawing::Point(264, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 25);
			this->textBox1->TabIndex = 11;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::Gray;
			this->textBox9->Location = System::Drawing::Point(264, 80);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(262, 25);
			this->textBox9->TabIndex = 19;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::Gray;
			this->textBox10->Location = System::Drawing::Point(264, 120);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(262, 25);
			this->textBox10->TabIndex = 20;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Gray;
			this->textBox2->Location = System::Drawing::Point(264, 236);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(262, 25);
			this->textBox2->TabIndex = 23;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Gray;
			this->textBox3->Location = System::Drawing::Point(264, 196);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(262, 25);
			this->textBox3->TabIndex = 22;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::Gray;
			this->textBox4->Location = System::Drawing::Point(264, 156);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(262, 25);
			this->textBox4->TabIndex = 21;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Gray;
			this->textBox5->Location = System::Drawing::Point(264, 362);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(262, 25);
			this->textBox5->TabIndex = 26;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::Gray;
			this->textBox6->Location = System::Drawing::Point(264, 320);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(262, 25);
			this->textBox6->TabIndex = 25;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::Gray;
			this->textBox7->Location = System::Drawing::Point(264, 275);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(262, 25);
			this->textBox7->TabIndex = 24;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::Gray;
			this->textBox8->Location = System::Drawing::Point(264, 402);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(262, 25);
			this->textBox8->TabIndex = 27;
			// 
			// btnguardar
			// 
			this->btnguardar->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btnguardar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnguardar->ForeColor = System::Drawing::Color::White;
			this->btnguardar->Location = System::Drawing::Point(304, 454);
			this->btnguardar->Name = L"btnguardar";
			this->btnguardar->Size = System::Drawing::Size(90, 33);
			this->btnguardar->TabIndex = 28;
			this->btnguardar->Text = L"Guardar";
			this->btnguardar->UseVisualStyleBackColor = false;
			// 
			// btncancelar
			// 
			this->btncancelar->BackColor = System::Drawing::Color::White;
			this->btncancelar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncancelar->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btncancelar->Location = System::Drawing::Point(410, 454);
			this->btncancelar->Name = L"btncancelar";
			this->btncancelar->Size = System::Drawing::Size(90, 33);
			this->btncancelar->TabIndex = 29;
			this->btncancelar->Text = L"Cancelar";
			this->btncancelar->UseVisualStyleBackColor = false;
			this->btncancelar->Click += gcnew System::EventHandler(this, &formulario::btncancelar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->ImageLocation = L"C:\\Users\\Miguel 07\\source\\repos\\FeLogin\\img\\zz.gif";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(609, 168);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(149, 149);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// formulario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(801, 527);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btncancelar);
			this->Controls->Add(this->btnguardar);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lbdpi);
			this->Controls->Add(this->lb1nombre);
			this->Controls->Add(this->lb2nombre);
			this->Controls->Add(this->lb1apellido);
			this->Controls->Add(this->lb2apellido);
			this->Controls->Add(this->lbedad);
			this->Controls->Add(this->lbsexosi);
			this->Controls->Add(this->lbtelefono);
			this->Controls->Add(this->lbdireccion);
			this->Controls->Add(this->lbusuario1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"formulario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"formulario";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private: System::Void btncancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
