#pragma once
class fecha
{

private:
	int _dia;
	int _mes;
	int _anio;

public:
	int getDia();
	void setDia(int dia);

	int getMes();
	void setMes(int mes);

	int getAnio();
	void setAnio(int anio);

	fecha(int dia, int mes, int anio);
	fecha();

};

