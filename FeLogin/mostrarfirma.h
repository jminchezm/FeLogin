#pragma once

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
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ lbldpi;
	private:
	public: System::Windows::Forms::Label^ lblnombres;
	public: System::Windows::Forms::Label^ lblapellidos;
	public: System::Windows::Forms::Label^ lbledad;
	public: System::Windows::Forms::Label^ lbltelefono;
	public: System::Windows::Forms::Label^ lbldireccion;
	public: System::Windows::Forms::Label^ lblfirma;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbldpi = (gcnew System::Windows::Forms::Label());
			this->lblnombres = (gcnew System::Windows::Forms::Label());
			this->lblapellidos = (gcnew System::Windows::Forms::Label());
			this->lbledad = (gcnew System::Windows::Forms::Label());
			this->lbltelefono = (gcnew System::Windows::Forms::Label());
			this->lbldireccion = (gcnew System::Windows::Forms::Label());
			this->lblfirma = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(83, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombres";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(83, 181);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Apellidos";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(83, 214);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Edad";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(83, 248);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Teléfono";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(83, 281);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Dirección";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(83, 112);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"DPI";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(83, 312);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Firma Electrónica";
			// 
			// lbldpi
			// 
			this->lbldpi->AutoSize = true;
			this->lbldpi->Location = System::Drawing::Point(221, 112);
			this->lbldpi->Name = L"lbldpi";
			this->lbldpi->Size = System::Drawing::Size(35, 13);
			this->lbldpi->TabIndex = 9;
			this->lbldpi->Text = L"label3";
			// 
			// lblnombres
			// 
			this->lblnombres->AutoSize = true;
			this->lblnombres->Location = System::Drawing::Point(221, 143);
			this->lblnombres->Name = L"lblnombres";
			this->lblnombres->Size = System::Drawing::Size(35, 13);
			this->lblnombres->TabIndex = 10;
			this->lblnombres->Text = L"label9";
			// 
			// lblapellidos
			// 
			this->lblapellidos->AutoSize = true;
			this->lblapellidos->Location = System::Drawing::Point(215, 181);
			this->lblapellidos->Name = L"lblapellidos";
			this->lblapellidos->Size = System::Drawing::Size(41, 13);
			this->lblapellidos->TabIndex = 11;
			this->lblapellidos->Text = L"label10";
			// 
			// lbledad
			// 
			this->lbledad->AutoSize = true;
			this->lbledad->Location = System::Drawing::Point(215, 214);
			this->lbledad->Name = L"lbledad";
			this->lbledad->Size = System::Drawing::Size(41, 13);
			this->lbledad->TabIndex = 12;
			this->lbledad->Text = L"label11";
			// 
			// lbltelefono
			// 
			this->lbltelefono->AutoSize = true;
			this->lbltelefono->Location = System::Drawing::Point(215, 248);
			this->lbltelefono->Name = L"lbltelefono";
			this->lbltelefono->Size = System::Drawing::Size(41, 13);
			this->lbltelefono->TabIndex = 13;
			this->lbltelefono->Text = L"label12";
			// 
			// lbldireccion
			// 
			this->lbldireccion->AutoSize = true;
			this->lbldireccion->Location = System::Drawing::Point(215, 281);
			this->lbldireccion->Name = L"lbldireccion";
			this->lbldireccion->Size = System::Drawing::Size(41, 13);
			this->lbldireccion->TabIndex = 14;
			this->lbldireccion->Text = L"label13";
			// 
			// lblfirma
			// 
			this->lblfirma->AutoSize = true;
			this->lblfirma->Location = System::Drawing::Point(215, 312);
			this->lblfirma->Name = L"lblfirma";
			this->lblfirma->Size = System::Drawing::Size(41, 13);
			this->lblfirma->TabIndex = 15;
			this->lblfirma->Text = L"label14";
			// 
			// mostrarfirma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(791, 462);
			this->Controls->Add(this->lblfirma);
			this->Controls->Add(this->lbldireccion);
			this->Controls->Add(this->lbltelefono);
			this->Controls->Add(this->lbledad);
			this->Controls->Add(this->lblapellidos);
			this->Controls->Add(this->lblnombres);
			this->Controls->Add(this->lbldpi);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"mostrarfirma";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"mostrarfirma";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
