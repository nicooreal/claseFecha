#include "fecha.h"

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
