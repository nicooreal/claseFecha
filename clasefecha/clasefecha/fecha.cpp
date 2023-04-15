#include <iostream>;
#include "fecha.h"
using namespace std;

int fecha::getAnio() {
	return _anio;
}


int fecha::getMes() {
	return _mes;
}

int fecha::getDia()
{
	return _dia;
}

void fecha::setAnio(int anio) {
	_anio = anio;

}



void fecha::setMes(int mes) {
	_mes = mes;

}


void fecha::setDia(int dia) {
	_dia = dia;

}

fecha::fecha(int dia, int mes, int anio) {
	
	if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12) 
	
	
	{ 
		_dia = dia;
	    _mes = mes; 
	    _anio = anio; 
	}
	
	
	else 
	
	{

		_dia = 1;
		_mes = 1;
		_anio = 2023;
	}

}

fecha::fecha() {

	_dia = 1;
	_mes = 1;
	_anio = 2023;

}

void fecha::agregarDias(int diasMasOmenos) {

/*Hacer un método público llamado AgregarDias que reciba un entero con la cantidad de días a agregar.
El mismo debe añadir la cantidad de días recibidos como parámetro si el mismo es positivo o restarlos si valor del parámetro en negativo. En caso de ser cero no se debe modificar el estado del objeto.*/


	if ((getDia() + diasMasOmenos) > 31 || getDia() + diasMasOmenos < 1) { cout << "no se pueden cambiar los dias" << endl; }
	// tambien en vez de poner getDia puedo poner _ dia
	else 
	
	
	{


		setDia(getDia() + diasMasOmenos);

	}
}