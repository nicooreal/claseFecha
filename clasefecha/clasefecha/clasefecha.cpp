
#include <iostream>
using namespace std;
#include "fecha.h"

int main()
{
	//fecha fecha;
	//cout <<  fecha.getMes();
	
	int dia, mes, anio;
	
	cout << "ingrese dia, mes y anio" << endl;
	cin >> dia >> mes >> anio;

	



	fecha fec(dia,mes,anio);
    cout <<fec.getAnio() << endl;
	

}

