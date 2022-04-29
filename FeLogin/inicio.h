#pragma once
#include "formulario.h"
#include "firmaElectronica.h"

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
	private: System::Windows::Forms::TextBox^ txtContra;

	private: System::Windows::Forms::TextBox^ txtUsuario;
	private: System::Windows::Forms::Label^ lblContraseña;
	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::Label^ lblCrearU;

	private: System::Windows::Forms::CheckBox^ checkBox1;


	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ lblIntrucciones;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnIngresar;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnsalir;
	private: System::Windows::Forms::ProgressBar^ progressBar1;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;











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
			this->lblCrearU = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->btnsalir = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->lblContraseña = (gcnew System::Windows::Forms::Label());
			this->lblUsuario = (gcnew System::Windows::Forms::Label());
			this->txtContra = (gcnew System::Windows::Forms::TextBox());
			this->lblIntrucciones = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
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
			this->panel2->Controls->Add(this->progressBar1);
			this->panel2->Controls->Add(this->btnsalir);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->txtUsuario);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->btnIngresar);
			this->panel2->Controls->Add(this->lblLogin);
			this->panel2->Controls->Add(this->lblContraseña);
			this->panel2->Controls->Add(this->lblUsuario);
			this->panel2->Controls->Add(this->txtContra);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(315, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(476, 462);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &inicio::panel2_Paint);
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->progressBar1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->progressBar1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->progressBar1->Location = System::Drawing::Point(0, 459);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(476, 3);
			this->progressBar1->TabIndex = 10;
			this->progressBar1->Click += gcnew System::EventHandler(this, &inicio::progressBar1_Click);
			// 
			// btnsalir
			// 
			this->btnsalir->BackColor = System::Drawing::Color::White;
			this->btnsalir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnsalir->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->btnsalir->FlatAppearance->BorderSize = 2;
			this->btnsalir->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsalir->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnsalir->Location = System::Drawing::Point(232, 364);
			this->btnsalir->Margin = System::Windows::Forms::Padding(0);
			this->btnsalir->Name = L"btnsalir";
			this->btnsalir->Size = System::Drawing::Size(90, 33);
			this->btnsalir->TabIndex = 9;
			this->btnsalir->Text = L"Salir";
			this->btnsalir->UseVisualStyleBackColor = false;
			this->btnsalir->Click += gcnew System::EventHandler(this, &inicio::btnsalir_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->ImageLocation = L"C:\\Users\\josue\\source\\repos\\FeLogin\\img\\usuario.gif";
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(69, 145);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(31, 31);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &inicio::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"C:\\Users\\josue\\source\\repos\\FeLogin\\img\\contrasena.gif";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(69, 246);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(31, 31);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// txtUsuario
			// 
			this->txtUsuario->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsuario->ForeColor = System::Drawing::Color::Gray;
			this->txtUsuario->Location = System::Drawing::Point(106, 145);
			this->txtUsuario->Multiline = true;
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(235, 31);
			this->txtUsuario->TabIndex = 0;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &inicio::checkBox1_CheckedChanged);
			// 
			// btnIngresar
			// 
			this->btnIngresar->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btnIngresar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnIngresar->FlatAppearance->BorderColor = System::Drawing::Color::DeepSkyBlue;
			this->btnIngresar->FlatAppearance->BorderSize = 0;
			this->btnIngresar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIngresar->ForeColor = System::Drawing::Color::White;
			this->btnIngresar->Location = System::Drawing::Point(121, 364);
			this->btnIngresar->Margin = System::Windows::Forms::Padding(0);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(90, 33);
			this->btnIngresar->TabIndex = 5;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = false;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &inicio::btnIngresar_Click);
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->BackColor = System::Drawing::Color::Transparent;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLogin->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->lblLogin->Location = System::Drawing::Point(114, 55);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(199, 40);
			this->lblLogin->TabIndex = 4;
			this->lblLogin->Text = L"Iniciar Sesión";
			// 
			// lblContraseña
			// 
			this->lblContraseña->AutoSize = true;
			this->lblContraseña->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblContraseña->ForeColor = System::Drawing::Color::Black;
			this->lblContraseña->Location = System::Drawing::Point(103, 226);
			this->lblContraseña->Name = L"lblContraseña";
			this->lblContraseña->Size = System::Drawing::Size(74, 17);
			this->lblContraseña->TabIndex = 3;
			this->lblContraseña->Text = L"Contraseña";
			this->lblContraseña->Click += gcnew System::EventHandler(this, &inicio::lblContraseña_Click);
			// 
			// lblUsuario
			// 
			this->lblUsuario->AutoSize = true;
			this->lblUsuario->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsuario->ForeColor = System::Drawing::Color::Black;
			this->lblUsuario->Location = System::Drawing::Point(103, 125);
			this->lblUsuario->Name = L"lblUsuario";
			this->lblUsuario->Size = System::Drawing::Size(53, 17);
			this->lblUsuario->TabIndex = 2;
			this->lblUsuario->Text = L"Usuario";
			this->lblUsuario->Click += gcnew System::EventHandler(this, &inicio::lblUsuario_Click);
			// 
			// txtContra
			// 
			this->txtContra->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtContra->ForeColor = System::Drawing::Color::Gray;
			this->txtContra->Location = System::Drawing::Point(106, 246);
			this->txtContra->Multiline = true;
			this->txtContra->Name = L"txtContra";
			this->txtContra->PasswordChar = '*';
			this->txtContra->Size = System::Drawing::Size(235, 34);
			this->txtContra->TabIndex = 1;
			this->txtContra->TextChanged += gcnew System::EventHandler(this, &inicio::txtContraseña_TextChanged);
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
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->lblIntrucciones);
			this->panel1->Controls->Add(this->lblCrearU);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(791, 462);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &inicio::panel1_Paint);
			// 
			// pictureBox3
			// 
			this->pictureBox3->ImageLocation = L"C:\\Users\\josue\\source\\repos\\FeLogin\\img\\logo.png";
			this->pictureBox3->Location = System::Drawing::Point(46, 8);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(203, 197);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(145, 299);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(73, 13);
			this->linkLabel1->TabIndex = 9;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Presione aquí";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &inicio::linkLabel1_LinkClicked_1);
			// 
			// inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(791, 462);
			this->ControlBox = false;
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"inicio";
			this->Load += gcnew System::EventHandler(this, &inicio::inicio_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
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
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		btnIngresar->Enabled = true;
	}
	else
	{
		btnIngresar->Enabled = false;
	}
}
private: System::Void lbsalir_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnsalir_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
	bool result1;
	bool result2 = false;
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ correo; String^ contra;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "MÍNCHEZ-JOSHUA\\SQLEXPRESS";
	st->InitialCatalog = "FeLogin";//su base de datos se llama Biosisemas
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ Bio = gcnew ListView();
	String^ sentencia = "SELECT * FROM USUARIO_ACCESO";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	while (reader->Read())
	{
		correo = (reader["correo_electronico"]->ToString());
		contra = (reader["contraseña"]->ToString());

		//MessageBox::Show(correo);
		//MessageBox::Show(contra);

		if (txtUsuario->Text == correo && txtContra->Text == contra) {
			FeLogin::firmaElectronica^ form = gcnew FeLogin::firmaElectronica();
			form->Show();
			result2 = true;
		}
		else {
			result1 = false;

			//MessageBox::Show("EL USUARIO NO EXISTE");
		}
	}

	if (result1 == false && result2 == false) {
		MessageBox::Show("EL USUARIO NO EXISTE");
	}

	cn->Close();

	txtUsuario->Text = "";
	txtContra->Text = "";
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void linkLabel1_LinkClicked_1(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	//inicio::Close();//cerramos un formulario
	//inicio::Visible = false;//cerramos un formulario
	FeLogin::formulario^ formu = gcnew FeLogin::formulario();
	formu->Show();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
