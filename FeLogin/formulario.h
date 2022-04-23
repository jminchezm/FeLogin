#pragma once
//#include "inicio.h"
#include "Conexion.h"
//#include "winuser.h"
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
	private: System::Windows::Forms::NumericUpDown^ numEdad;
	private: System::Windows::Forms::ComboBox^ cboSexo;
	private: System::Windows::Forms::TextBox^ txtDireccion;





	private: System::Windows::Forms::TextBox^ txtTelefono;

	private: System::Windows::Forms::TextBox^ txtApellido2;

	private: System::Windows::Forms::TextBox^ txtApellido1;

	private: System::Windows::Forms::TextBox^ txtNombre2;

	private: System::Windows::Forms::TextBox^ txtNombre1;

	private: System::Windows::Forms::TextBox^ txtDpi;

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
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label1;

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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->numEdad = (gcnew System::Windows::Forms::NumericUpDown());
			this->cboSexo = (gcnew System::Windows::Forms::ComboBox());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido2 = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido1 = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre2 = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre1 = (gcnew System::Windows::Forms::TextBox());
			this->txtDpi = (gcnew System::Windows::Forms::TextBox());
			this->lbdpi = (gcnew System::Windows::Forms::Label());
			this->lb1nombre = (gcnew System::Windows::Forms::Label());
			this->lb2nombre = (gcnew System::Windows::Forms::Label());
			this->lb1apellido = (gcnew System::Windows::Forms::Label());
			this->lb2apellido = (gcnew System::Windows::Forms::Label());
			this->lbedad = (gcnew System::Windows::Forms::Label());
			this->lbsexosi = (gcnew System::Windows::Forms::Label());
			this->lbtelefono = (gcnew System::Windows::Forms::Label());
			this->lbdireccion = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numEdad))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnCancelar);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(231, 527);
			this->panel1->TabIndex = 0;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(68, 354);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(72, 13);
			this->linkLabel1->TabIndex = 193;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Precione aqui";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &formulario::linkLabel1_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(12, 318);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 51);
			this->label1->TabIndex = 192;
			this->label1->Text = L"Si ya llenó estos campos \r\ndirige se al formulario \r\nen ínea ";
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
			this->button1->Click += gcnew System::EventHandler(this, &formulario::button1_Click);
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
			this->pictureBox2->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\FeLogin\\img\\zz.gif";
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
			this->panel2->Controls->Add(this->numEdad);
			this->panel2->Controls->Add(this->cboSexo);
			this->panel2->Controls->Add(this->txtDireccion);
			this->panel2->Controls->Add(this->txtTelefono);
			this->panel2->Controls->Add(this->txtApellido2);
			this->panel2->Controls->Add(this->txtApellido1);
			this->panel2->Controls->Add(this->txtNombre2);
			this->panel2->Controls->Add(this->txtNombre1);
			this->panel2->Controls->Add(this->txtDpi);
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
			// numEdad
			// 
			this->numEdad->Location = System::Drawing::Point(246, 296);
			this->numEdad->Name = L"numEdad";
			this->numEdad->Size = System::Drawing::Size(95, 20);
			this->numEdad->TabIndex = 191;
			// 
			// cboSexo
			// 
			this->cboSexo->FormattingEnabled = true;
			this->cboSexo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"M", L"F" });
			this->cboSexo->Location = System::Drawing::Point(413, 295);
			this->cboSexo->Name = L"cboSexo";
			this->cboSexo->Size = System::Drawing::Size(95, 21);
			this->cboSexo->TabIndex = 190;
			// 
			// txtDireccion
			// 
			this->txtDireccion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDireccion->ForeColor = System::Drawing::Color::Gray;
			this->txtDireccion->Location = System::Drawing::Point(246, 372);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(262, 25);
			this->txtDireccion->TabIndex = 186;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTelefono->ForeColor = System::Drawing::Color::Gray;
			this->txtTelefono->Location = System::Drawing::Point(246, 332);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(262, 25);
			this->txtTelefono->TabIndex = 185;
			// 
			// txtApellido2
			// 
			this->txtApellido2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtApellido2->ForeColor = System::Drawing::Color::Gray;
			this->txtApellido2->Location = System::Drawing::Point(246, 256);
			this->txtApellido2->Name = L"txtApellido2";
			this->txtApellido2->Size = System::Drawing::Size(262, 25);
			this->txtApellido2->TabIndex = 184;
			// 
			// txtApellido1
			// 
			this->txtApellido1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtApellido1->ForeColor = System::Drawing::Color::Gray;
			this->txtApellido1->Location = System::Drawing::Point(246, 216);
			this->txtApellido1->Name = L"txtApellido1";
			this->txtApellido1->Size = System::Drawing::Size(262, 25);
			this->txtApellido1->TabIndex = 183;
			// 
			// txtNombre2
			// 
			this->txtNombre2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombre2->ForeColor = System::Drawing::Color::Gray;
			this->txtNombre2->Location = System::Drawing::Point(246, 176);
			this->txtNombre2->Name = L"txtNombre2";
			this->txtNombre2->Size = System::Drawing::Size(262, 25);
			this->txtNombre2->TabIndex = 182;
			// 
			// txtNombre1
			// 
			this->txtNombre1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombre1->ForeColor = System::Drawing::Color::Gray;
			this->txtNombre1->Location = System::Drawing::Point(246, 140);
			this->txtNombre1->Name = L"txtNombre1";
			this->txtNombre1->Size = System::Drawing::Size(262, 25);
			this->txtNombre1->TabIndex = 181;
			// 
			// txtDpi
			// 
			this->txtDpi->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDpi->ForeColor = System::Drawing::Color::Gray;
			this->txtDpi->Location = System::Drawing::Point(246, 100);
			this->txtDpi->Name = L"txtDpi";
			this->txtDpi->Size = System::Drawing::Size(262, 25);
			this->txtDpi->TabIndex = 180;
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
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numEdad))->EndInit();
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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion datosUsuario;
	datosUsuario.Insertar(Convert::ToInt64(txtDpi->Text), txtNombre1->Text, txtNombre2->Text, txtApellido1->Text, txtApellido2->Text, Convert::ToInt16(numEdad->Text), cboSexo->Text, Convert::ToInt64(txtTelefono->Text), txtDireccion->Text);
	
	MessageBox::Show("Sus datos han sido guardados correctamente", "Registro guardado",MessageBoxButtons::OK, MessageBoxIcon::Information);


	if (MessageBox::Show("A continuación se le presenta un formuario el cual debe de llenar con la informacion requerida. Es obligatorio el llenado del formulario para poderle genera su usuario y contraseña.", "Información",
		MessageBoxButtons::OKCancel, MessageBoxIcon::Information)==System::Windows::Forms::DialogResult::OK)
	{
		linkLabel1->LinkVisited = true;
		System::Diagnostics::Process::Start("https://docs.google.com/forms/d/e/1FAIpQLSd_BNFCBme_XeeeUO1dv1IX1Fn4N84GgElizNpskced-IEOAA/viewform");
	}
	else
	{
		MessageBox::Show("Puedes llenar el mismo formulario mas tarde   ", "Información",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


	
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
	System::Diagnostics::Process::Start("chrome.exe", "https://docs.google.com/forms/d/e/1FAIpQLSd_BNFCBme_XeeeUO1dv1IX1Fn4N84GgElizNpskced-IEOAA/viewform");
}
};
}
