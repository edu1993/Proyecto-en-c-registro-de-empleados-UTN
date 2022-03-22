


#include <string.h>
#include "Persona.h"

Persona::Persona(long d, const char* & na) {

	dni=d;
	nomape = new char;
	strcpy(nomape,na);
	
	
}
void Persona::setNombre(const char * a){
	nomape = new char;
	strcpy(nomape,a);
	
}

void Persona::setDni(long g){
	dni=g;
}
char* Persona::getNombre() {
	return nomape;
}

long Persona::getDni() {
	return dni;
}

