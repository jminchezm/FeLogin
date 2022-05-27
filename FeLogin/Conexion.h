#pragma once
#include <cstdlib>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class Conexion
{
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;

//public:
	//Conexion();

protected:
	void Conectar()
	{
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "MÍNCHEZ-JOSHUA\\SQLEXPRESS"; //"Servidor al que nos conectaremos"
		st->InitialCatalog = "FeLogin"; //
		st->IntegratedSecurity = true;

		cn = gcnew SqlConnection(Convert::ToString(st));
	}

public:
	void Insertar(int long long dpi, String^ nombre1, String^ nombre2, String^ apellido1, String^ apellido2, int edad, String^ sexo, int telefono, String^ direccion) {
		Conectar();
		String^ sentencia = "INSERT INTO USUARIO VALUES (@dpi, @nombre1, @nombre2, @apellido1, @apellido2, @edad, @sexo, @telefono, @direccion)"; //@ se utiliza para uso de parametros
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);

		ejecutar->Parameters->AddWithValue("@dpi", dpi);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@nombre1", nombre1);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@nombre2", nombre2);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@apellido1", apellido1);
		ejecutar->Parameters->AddWithValue("@apellido2", apellido2);
		ejecutar->Parameters->AddWithValue("@edad", edad);
		ejecutar->Parameters->AddWithValue("@sexo", sexo);
		ejecutar->Parameters->AddWithValue("@telefono", telefono);
		ejecutar->Parameters->AddWithValue("@direccion", direccion);

		//abrir conexion
		cn->Open();
		ejecutar->ExecuteNonQuery();

		//cerrar conexion
		cn->Close();


	}

	void insertar2(int long long dpi, String^ deporte, String^ color, String^ mascota, String^ fecha) {
		Conectar();
		String^ sentencia = "INSERT INTO DATOS_ESPECIALES VALUES (@dpi, @deporte, @color, @mascota, @fecha)"; //@ se utiliza para uso de parametros
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);

		ejecutar->Parameters->AddWithValue("@dpi", dpi);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@deporte", deporte);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@color", color);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@mascota", mascota);
		ejecutar->Parameters->AddWithValue("@fecha", fecha);
	
		//abrir conexion
		cn->Open();
		ejecutar->ExecuteNonQuery();

		//cerrar conexion
		cn->Close();
	}


	void insertar3(int long long dpi, int long long firma) {
		Conectar();
		String^ sentencia = "INSERT INTO FIRMA VALUES (@dpi, @firma)"; //@ se utiliza para uso de parametros
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);

		ejecutar->Parameters->AddWithValue("@dpi", dpi);//recibo el valor de los parametros
		ejecutar->Parameters->AddWithValue("@firma",firma);//recibo el valor de los parametros
		
		//abrir conexion
		cn->Open();
		ejecutar->ExecuteNonQuery();
		MessageBox::Show("FIRMA ELECTRONICA GENERADA CON EXITO", "INFORMACION", MessageBoxButtons::OK, MessageBoxIcon::Information);

		//cerrar conexion
		cn->Close();
	}
};

