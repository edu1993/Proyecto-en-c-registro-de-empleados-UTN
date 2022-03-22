#include <string.h>
#include "Empresa.h"
#include "Empleado.h"
#include "tiempo.h"

#include <iostream>
using namespace std;


Empresa::Empresa(const char* & c, const char* & rs, int mce) {
	
	cuit =new char;
	razonSocial =new char;
	strcpy(cuit,c);
	strcpy(razonSocial,rs);
	maxCantEmpl = mce;
	cont =0;	
}

void Empresa::addEmpleado( Empleado & e) {
	
	empleados[cont]= new Empleado(e);
	cont++;


	
}

Empleado* Empresa::getEmpleados(int n) {//retorna el empleado selecionado
	
	return empleados[n];
}

char* Empresa::getCuit() {
	return cuit;
}

char* Empresa::getRazonSocial() {
	return razonSocial;
}

int Empresa::getMaxCantEmpl() {
	return maxCantEmpl;
}

int Empresa::getEmplIngr() {//devuelve la cantidad de empleados ingresados 
   return cont;
		
}

void Empresa::setGerente( Empleado &e) {//setea los datos del gerente;
	
	Gerente = new Empleado(e);
	addEmpleado(e); //el gerente es un empleado 
			
}

Empleado * Empresa::getGerente(){
	return Gerente;
}




  	
  	
