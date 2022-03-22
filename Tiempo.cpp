
#include "Tiempo.h"

Tiempo::Tiempo(int h, int m, int s) {
	hora=h;
	minuto=m;
	segundo= s;
}

int Tiempo::getHora() {
	return hora;
	
}

int Tiempo::getMinuto() {
	return minuto;
}

int Tiempo::getSegundo() {
	return segundo;
	
}

