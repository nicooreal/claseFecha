
#include <iostream>
using namespace std;
#include "fecha.h"

int main()
{
	//fecha fecha;
	//cout <<  fecha.getMes();
	int dia, mes, anio,masDias;
	
	cout << "ingrese dia, mes y anio" << endl;
	cin >> dia;
	cin >> mes;
	cin >> anio;
	fecha fec(dia,mes,anio);

	



    
	
	cout << "los dias son: " << endl;

	cout << fec.getDia() << endl;
	cout << fec.getMes() << endl;
	cout <<fec.getAnio() << endl;
	

	cout << "ingrese los dias para sumar: " << endl;
	cin >> masDias;

	fec.agregarDias(masDias);




	cout << fec.getDia() << endl;
}

