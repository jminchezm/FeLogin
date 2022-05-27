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
	/// Resumen de mostrarfirma
	/// </summary>
	public ref class mostrarfirma : public System::Windows::Forms::Form
	{
	public:
		mostrarfirma(void)
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
		~mostrarfirma()
		{
			if (components)
			{
				delete components;
			}
		}









	public: System::Windows::Forms::Label^ lbldpi;
	private:
	public: System::Windows::Forms::Label^ lblnombres;
	public: System::Windows::Forms::Label^ lblapellidos;
	public: System::Windows::Forms::Label^ lbledad;
	public: System::Windows::Forms::Label^ lbltelefono;
	public: System::Windows::Forms::Label^ lbldireccion;
	public: System::Windows::Forms::Label^ lblfirma;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	public:

	public:


	public:







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mostrarfirma::typeid));
			this->lbldpi = (gcnew System::Windows::Forms::Label());
			this->lblnombres = (gcnew System::Windows::Forms::Label());
			this->lblapellidos = (gcnew System::Windows::Forms::Label());
			this->lbledad = (gcnew System::Windows::Forms::Label());
			this->lbltelefono = (gcnew System::Windows::Forms::Label());
			this->lbldireccion = (gcnew System::Windows::Forms::Label());
			this->lblfirma = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbldpi
			// 
			this->lbldpi->AutoSize = true;
			this->lbldpi->BackColor = System::Drawing::Color::Transparent;
			this->lbldpi->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbldpi->Location = System::Drawing::Point(245, 348);
			this->lbldpi->Name = L"lbldpi";
			this->lbldpi->Size = System::Drawing::Size(54, 19);
			this->lbldpi->TabIndex = 9;
			this->lbldpi->Text = L"label3";
			// 
			// lblnombres
			// 
			this->lblnombres->AutoSize = true;
			this->lblnombres->BackColor = System::Drawing::Color::Transparent;
			this->lblnombres->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnombres->Location = System::Drawing::Point(169, 243);
			this->lblnombres->Name = L"lblnombres";
			this->lblnombres->Size = System::Drawing::Size(54, 19);
			this->lblnombres->TabIndex = 10;
			this->lblnombres->Text = L"label9";
			// 
			// lblapellidos
			// 
			this->lblapellidos->AutoSize = true;
			this->lblapellidos->BackColor = System::Drawing::Color::Transparent;
			this->lblapellidos->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblapellidos->Location = System::Drawing::Point(324, 243);
			this->lblapellidos->Name = L"lblapellidos";
			this->lblapellidos->Size = System::Drawing::Size(63, 19);
			this->lblapellidos->TabIndex = 11;
			this->lblapellidos->Text = L"label10";
			// 
			// lbledad
			// 
			this->lbledad->AutoSize = true;
			this->lbledad->BackColor = System::Drawing::Color::Transparent;
			this->lbledad->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbledad->Location = System::Drawing::Point(392, 560);
			this->lbledad->Name = L"lbledad";
			this->lbledad->Size = System::Drawing::Size(63, 19);
			this->lbledad->TabIndex = 12;
			this->lbledad->Text = L"label11";
			// 
			// lbltelefono
			// 
			this->lbltelefono->AutoSize = true;
			this->lbltelefono->BackColor = System::Drawing::Color::Transparent;
			this->lbltelefono->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltelefono->Location = System::Drawing::Point(151, 560);
			this->lbltelefono->Name = L"lbltelefono";
			this->lbltelefono->Size = System::Drawing::Size(63, 19);
			this->lbltelefono->TabIndex = 13;
			this->lbltelefono->Text = L"label12";
			// 
			// lbldireccion
			// 
			this->lbldireccion->AutoSize = true;
			this->lbldireccion->BackColor = System::Drawing::Color::Transparent;
			this->lbldireccion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbldireccion->Location = System::Drawing::Point(243, 461);
			this->lbldireccion->Name = L"lbldireccion";
			this->lbldireccion->Size = System::Drawing::Size(63, 19);
			this->lbldireccion->TabIndex = 14;
			this->lbldireccion->Text = L"label13";
			// 
			// lblfirma
			// 
			this->lblfirma->AutoSize = true;
			this->lblfirma->BackColor = System::Drawing::Color::Transparent;
			this->lblfirma->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblfirma->Location = System::Drawing::Point(235, 678);
			this->lblfirma->Name = L"lblfirma";
			this->lblfirma->Size = System::Drawing::Size(63, 19);
			this->lblfirma->TabIndex = 15;
			this->lblfirma->Text = L"label14";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->lblfirma);
			this->panel1->Controls->Add(this->lblnombres);
			this->panel1->Controls->Add(this->lbledad);
			this->panel1->Controls->Add(this->lbltelefono);
			this->panel1->Controls->Add(this->lbldireccion);
			this->panel1->Controls->Add(this->lblapellidos);
			this->panel1->Controls->Add(this->lbldpi);
			this->panel1->Location = System::Drawing::Point(1, 9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(597, 789);
			this->panel1->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Teal;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(249, 745);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 32);
			this->button1->TabIndex = 16;
			this->button1->Text = L"SALIR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &mostrarfirma::button1_Click);
			// 
			// mostrarfirma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(612, 655);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"mostrarfirma";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"mostrarfirma";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		//FeLogin::inicio^ formInicio = gcnew FeLogin::inicio();
		//formInicio->Show();
	}
};
}
