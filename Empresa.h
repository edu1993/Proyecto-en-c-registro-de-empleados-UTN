#ifndef _EMPRESA_H
#define _EMPRESA_H
using namespace std ;
#include <string.h>
#include "Empleado.h"


class Empresa{
  private:
    char* cuit;

    char* razonSocial;

    int maxCantEmpl;

    int CantEmplIngr;
	
	Empleado* empleados;
	
    Empleado  *Gerente;
    
    int cont;//empleados que tiene cargada la empresa
    
    

  public:
    Empresa(const char* & c, const char* & rs, int mce);
	

    
	void addEmpleado( Empleado & e);

    Empleado* getEmpleados(int n);
	

	
    char* getCuit();

    char* getRazonSocial();

    int getMaxCantEmpl();

    int getEmplIngr();

    void setGerente(Empleado & );
    
    Empleado * getGerente();
    
 
    
    int getCantEmpleados();


   

};
#endif
