#pragma once

namespace FeLogin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de inicio
	/// </summary>
	public ref class inicio : public System::Windows::Forms::Form
	{
	public:
		inicio(void)
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
		~inicio()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ lblUsuario;
	private: System::Windows::Forms::TextBox^ txtContraseña;
	private: System::Windows::Forms::TextBox^ txtUsuario;
	private: System::Windows::Forms::Label^ lblContraseña;
	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::Label^ lblCrearU;

	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ lblIntrucciones;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnIngresar;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(inicio::typeid));
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->lblCrearU = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->lblContraseña = (gcnew System::Windows::Forms::Label());
			this->lblUsuario = (gcnew System::Windows::Forms::Label());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->lblIntrucciones = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(143, 299);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(72, 13);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Preciona aqui";
			// 
			// lblCrearU
			// 
			this->lblCrearU->AutoSize = true;
			this->lblCrearU->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCrearU->ForeColor = System::Drawing::Color::White;
			this->lblCrearU->Location = System::Drawing::Point(47, 198);
			this->lblCrearU->Name = L"lblCrearU";
			this->lblCrearU->Size = System::Drawing::Size(205, 40);
			this->lblCrearU->TabIndex = 6;
			this->lblCrearU->Text = L"Crear Usuario";
			this->lblCrearU->Click += gcnew System::EventHandler(this, &inicio::label2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->txtUsuario);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->btnIngresar);
			this->panel2->Controls->Add(this->lblLogin);
			this->panel2->Controls->Add(this->lblContraseña);
			this->panel2->Controls->Add(this->lblUsuario);
			this->panel2->Controls->Add(this->txtContraseña);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(301, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(476, 462);
			this->panel2->TabIndex = 1;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->checkBox1->Location = System::Drawing::Point(106, 314);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(186, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Acepto Terminos y Condiciones";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->BackColor = System::Drawing::Color::Transparent;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLogin->ForeColor = System::Drawing::Color::BlueViolet;
			this->lblLogin->Location = System::Drawing::Point(114, 55);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(199, 40);
			this->lblLogin->TabIndex = 4;
			this->lblLogin->Text = L"Iniciar Sesión";
			// 
			// lblContraseña
			// 
			this->lblContraseña->AutoSize = true;
			this->lblContraseña->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblContraseña->ForeColor = System::Drawing::Color::Black;
			this->lblContraseña->Location = System::Drawing::Point(103, 222);
			this->lblContraseña->Name = L"lblContraseña";
			this->lblContraseña->Size = System::Drawing::Size(89, 21);
			this->lblContraseña->TabIndex = 3;
			this->lblContraseña->Text = L"Contraseña";
			this->lblContraseña->Click += gcnew System::EventHandler(this, &inicio::lblContraseña_Click);
			// 
			// lblUsuario
			// 
			this->lblUsuario->AutoSize = true;
			this->lblUsuario->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsuario->ForeColor = System::Drawing::Color::Black;
			this->lblUsuario->Location = System::Drawing::Point(103, 122);
			this->lblUsuario->Name = L"lblUsuario";
			this->lblUsuario->Size = System::Drawing::Size(64, 21);
			this->lblUsuario->TabIndex = 2;
			this->lblUsuario->Text = L"Usuario";
			this->lblUsuario->Click += gcnew System::EventHandler(this, &inicio::lblUsuario_Click);
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(106, 246);
			this->txtContraseña->Multiline = true;
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->PasswordChar = '*';
			this->txtContraseña->Size = System::Drawing::Size(235, 45);
			this->txtContraseña->TabIndex = 1;
			this->txtContraseña->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtContraseña->TextChanged += gcnew System::EventHandler(this, &inicio::txtContraseña_TextChanged);
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(106, 145);
			this->txtUsuario->Multiline = true;
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(235, 44);
			this->txtUsuario->TabIndex = 0;
			this->txtUsuario->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lblIntrucciones
			// 
			this->lblIntrucciones->AutoSize = true;
			this->lblIntrucciones->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIntrucciones->ForeColor = System::Drawing::Color::White;
			this->lblIntrucciones->Location = System::Drawing::Point(54, 252);
			this->lblIntrucciones->Name = L"lblIntrucciones";
			this->lblIntrucciones->Size = System::Drawing::Size(193, 63);
			this->lblIntrucciones->TabIndex = 7;
			this->lblIntrucciones->Text = L"Para crear un usuario, \r\ndebe llenar el siguiente \r\nformulario";
			this->lblIntrucciones->Click += gcnew System::EventHandler(this, &inicio::lblIntrucciones_Click);
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->lblIntrucciones);
			this->panel1->Controls->Add(this->lblCrearU);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(777, 462);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"C:\\derecho\\img\\icono.jpg";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(26, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(82, 78);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// btnIngresar
			// 
			this->btnIngresar->BackColor = System::Drawing::Color::DarkViolet;
			this->btnIngresar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIngresar->ForeColor = System::Drawing::Color::White;
			this->btnIngresar->Location = System::Drawing::Point(170, 361);
			this->btnIngresar->Margin = System::Windows::Forms::Padding(0);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(132, 33);
			this->btnIngresar->TabIndex = 5;
			this->btnIngresar->Text = L"INGRESAR";
			this->btnIngresar->UseVisualStyleBackColor = false;
			// 
			// inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 462);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"inicio";
			this->Text = L"inicio";
			this->Load += gcnew System::EventHandler(this, &inicio::inicio_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void inicio_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lblUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lblContraseña_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void txtContraseña_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblIntrucciones_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
