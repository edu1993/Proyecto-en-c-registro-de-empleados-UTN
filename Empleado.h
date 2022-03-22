#ifndef _EMPLEADO_H
#define _EMPLEADO_H


#include "Persona.h"

class Tiempo;

class Empleado : public Persona {
  public:
    Empleado(long d, const char* & na, int he, int hs, int me, int ms, int se, int ss);
	Empleado(Empleado &e);
    Tiempo getHorarioEntrada();

    Tiempo getHorarioSalida();
    
    void setHoraEntrada(int,int,int);
	void setHoraSalida(int,int,int);

  private:
    Tiempo * horarioSalida;

    Tiempo * horarioEntrada;

};
#endif
