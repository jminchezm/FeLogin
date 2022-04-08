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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lblUsuario;
	private: System::Windows::Forms::TextBox^ txtContraseña;
	private: System::Windows::Forms::TextBox^ txtUsuario;
	private: System::Windows::Forms::Label^ lblContraseña;
	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::Label^ lblCrearU;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ btnIngresar;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ lblIntrucciones;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->lblUsuario = (gcnew System::Windows::Forms::Label());
			this->lblContraseña = (gcnew System::Windows::Forms::Label());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->lblCrearU = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->lblIntrucciones = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->lblIntrucciones);
			this->panel1->Controls->Add(this->lblCrearU);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(222, 462);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->btnIngresar);
			this->panel2->Controls->Add(this->lblLogin);
			this->panel2->Controls->Add(this->lblContraseña);
			this->panel2->Controls->Add(this->lblUsuario);
			this->panel2->Controls->Add(this->txtContraseña);
			this->panel2->Controls->Add(this->txtUsuario);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(222, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(555, 462);
			this->panel2->TabIndex = 1;
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(175, 124);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(180, 20);
			this->txtUsuario->TabIndex = 0;
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(175, 189);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->PasswordChar = '*';
			this->txtContraseña->Size = System::Drawing::Size(180, 20);
			this->txtContraseña->TabIndex = 1;
			// 
			// lblUsuario
			// 
			this->lblUsuario->AutoSize = true;
			this->lblUsuario->Location = System::Drawing::Point(172, 108);
			this->lblUsuario->Name = L"lblUsuario";
			this->lblUsuario->Size = System::Drawing::Size(43, 13);
			this->lblUsuario->TabIndex = 2;
			this->lblUsuario->Text = L"Usuario";
			this->lblUsuario->Click += gcnew System::EventHandler(this, &inicio::lblUsuario_Click);
			// 
			// lblContraseña
			// 
			this->lblContraseña->AutoSize = true;
			this->lblContraseña->Location = System::Drawing::Point(172, 173);
			this->lblContraseña->Name = L"lblContraseña";
			this->lblContraseña->Size = System::Drawing::Size(61, 13);
			this->lblContraseña->TabIndex = 3;
			this->lblContraseña->Text = L"Contraseña";
			this->lblContraseña->Click += gcnew System::EventHandler(this, &inicio::lblContraseña_Click);
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLogin->Location = System::Drawing::Point(153, 19);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(222, 37);
			this->lblLogin->TabIndex = 4;
			this->lblLogin->Text = L"Iniciar Sesión";
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(199, 261);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(125, 79);
			this->btnIngresar->TabIndex = 5;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			// 
			// lblCrearU
			// 
			this->lblCrearU->AutoSize = true;
			this->lblCrearU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCrearU->Location = System::Drawing::Point(29, 31);
			this->lblCrearU->Name = L"lblCrearU";
			this->lblCrearU->Size = System::Drawing::Size(158, 25);
			this->lblCrearU->TabIndex = 6;
			this->lblCrearU->Text = L"Crear Usuario";
			this->lblCrearU->Click += gcnew System::EventHandler(this, &inicio::label2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(175, 229);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(175, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Acepto Terminos y Condiciones";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// lblIntrucciones
			// 
			this->lblIntrucciones->AutoSize = true;
			this->lblIntrucciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIntrucciones->Location = System::Drawing::Point(30, 75);
			this->lblIntrucciones->Name = L"lblIntrucciones";
			this->lblIntrucciones->Size = System::Drawing::Size(175, 60);
			this->lblIntrucciones->TabIndex = 7;
			this->lblIntrucciones->Text = L"Para crear un usuario, \r\ndebe llenar el siguiente \r\nformulario";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(53, 192);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(55, 13);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"linkLabel1";
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
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

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
};
}
