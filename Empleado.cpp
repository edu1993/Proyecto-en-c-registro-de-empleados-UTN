#include "Persona.h"
#include "Empleado.h"
#include "Tiempo.h"

Empleado::Empleado(long d, const char* & na, int he, int hs, int me, int ms, int se, int ss):Persona(d,na) {
horarioSalida = new Tiempo(hs,ms,ss);
horarioEntrada = new Tiempo(he,me,se);

}

Empleado::Empleado(Empleado &e):Persona(e) {
	long r= e.getDni();
	const char * aux = e.getNombre();
	int he= e.getHorarioEntrada().getHora();
	int hs = e.getHorarioSalida().getHora();
	int me = e.getHorarioEntrada().getMinuto();
	int ms = e.getHorarioSalida().getMinuto();
	int se = e.getHorarioEntrada().getSegundo();
	int ss = e.getHorarioSalida().getSegundo();
	this->setNombre(aux);
	this->setDni(r);
	horarioSalida = new Tiempo(hs,ms,ss);
	horarioEntrada = new Tiempo(he,me,se);
}

void Empleado::setHoraEntrada(int h,int m,int s){
	horarioEntrada = new Tiempo(h,m,s);
}

Tiempo Empleado::getHorarioEntrada() {
		return * horarioEntrada;
 		
}

Tiempo Empleado::getHorarioSalida() {

	return * horarioSalida;//observacion retornar como puntero
}

