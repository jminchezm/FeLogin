#pragma once
#include <cstdlib>
#include "Conexion.h"
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
	public: System::Windows::Forms::Label^ lblnombre;
	private:
	public: System::Windows::Forms::Label^ lbldpi;
	public: System::Windows::Forms::Label^ lblfirma;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(firmaElectronica::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblnombre = (gcnew System::Windows::Forms::Label());
			this->lbldpi = (gcnew System::Windows::Forms::Label());
			this->lblfirma = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(272, 479);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generar Firma Electrónica";
			this->button1->UseVisualStyleBackColor = false;
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
			this->lblnombre->BackColor = System::Drawing::Color::Transparent;
			this->lblnombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnombre->Location = System::Drawing::Point(76, 288);
			this->lblnombre->Name = L"lblnombre";
			this->lblnombre->Size = System::Drawing::Size(17, 16);
			this->lblnombre->TabIndex = 2;
			this->lblnombre->Text = L"--";
			// 
			// lbldpi
			// 
			this->lbldpi->AutoSize = true;
			this->lbldpi->BackColor = System::Drawing::Color::Transparent;
			this->lbldpi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbldpi->Location = System::Drawing::Point(475, 288);
			this->lbldpi->Name = L"lbldpi";
			this->lbldpi->Size = System::Drawing::Size(17, 16);
			this->lbldpi->TabIndex = 3;
			this->lbldpi->Text = L"--";
			this->lbldpi->Click += gcnew System::EventHandler(this, &firmaElectronica::lbldpi_Click);
			// 
			// lblfirma
			// 
			this->lblfirma->AutoSize = true;
			this->lblfirma->BackColor = System::Drawing::Color::Transparent;
			this->lblfirma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblfirma->Location = System::Drawing::Point(269, 427);
			this->lblfirma->Name = L"lblfirma";
			this->lblfirma->Size = System::Drawing::Size(17, 16);
			this->lblfirma->TabIndex = 4;
			this->lblfirma->Text = L"--";
			this->lblfirma->Click += gcnew System::EventHandler(this, &firmaElectronica::lblfirma_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(671, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(29, 27);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &firmaElectronica::pictureBox1_Click);
			// 
			// firmaElectronica
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(702, 523);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblfirma);
			this->Controls->Add(this->lbldpi);
			this->Controls->Add(this->lblnombre);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"firmaElectronica";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"firmaElectronica";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ firmaElectronica = Convert::ToString(1000000000000000000 + rand() % (9999999999999999999 - 1000000000000000000));
		
		lblfirma->Text = firmaElectronica;
		
		/*SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;

		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS"; //"Servidor al que nos conectaremos"
		st->InitialCatalog = "FeLogin"; //
		st->IntegratedSecurity = true;

		cn = gcnew SqlConnection(Convert::ToString(st));

		String^ sentencia = "INSERT INTO FIRMA VALUES (@pdi, @firma)"; //@ se utiliza para uso de parametros
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);

		//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@codOrden", Convert::ToInt64(lbldpi->Text));//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@codCombo", Convert::ToInt64(lblfirma->Text));//recibo el valor de los parametros

		//abrir conexion
		cn->Open();
		ejecutar->ExecuteNonQuery();
		//cerrar conexion

		cn->Close();
		MessageBox::Show("se guardo");*/

	}
		

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void lbldpi_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblfirma_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	Close();
}
};
}
