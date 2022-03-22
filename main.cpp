
//ESTE PROYECTO FUE REALIZADO EN EL PROGRAMA DEV C++
//ALUMNOS: FACUNDO LASCOMBES , CAROLINA  ALVAREZ , EDUARDO ALVAREZ
//INGENIERIA EN SISTEMAS, UNIVERSIDAD TECNOLOGICA NACIONAL, REGIONAL TRENQUE LAUQUEN  


#include <iostream>
#include "Empresa.h"
#include "Empleado.h"
#include <string.h>
#include "Tiempo.h"
using namespace std ;

void mostrar_em(Empleado *&);
void mostrar_em_hs(Empleado *&);
void menu();
void menu_empresa();
void menu_personal();
void menu_hsextras();
Empresa *obj;
Empleado *aux;
Empleado *array_aux;
int v_hora=12;
int b_while=0;

int main(){	

//CARGA DE DATOS SIMULANDO QUE YA SON PARTE DEL SISTEMA

/*DATOS DE LA EMPRESA */

string  c("20-324536-8");
string  r("Lateos.SRL");
int mx=32;
const char * cuit = c.c_str();
const char * ras = r.c_str();
obj = new Empresa(cuit,ras,mx);
/*DATOS DEl GERENTE */
string  nombre("Leon,Gieco");
long  dni=27893001;
int hs=15,he=6,ms=0,me=0,se=0,ss=0;
const char * nom = nombre.c_str();
aux = new Empleado(dni,nom,he,hs,me,ms,se,ss);

obj->setGerente(*aux);
delete aux;

string  n("Pepe,argento");
long  d=2712567;
int hs1=17,he1=7,ms1=23,me1=2,se1=0,ss1=0;
const char * nom1 = n.c_str();
Empleado *ti= new Empleado(d,nom1,he1,hs1,me1,ms1,se1,ss1);
obj->addEmpleado(*ti);

delete ti;

while(b_while==0){
menu();	
	
}
	
return 0;	
}


void menu(){
	fflush(stdin);
	system("color 0e");
	int selec;
	cout<<"				    MENU PRINCIPAL"<<endl;
    cout<<endl;
	cout<<"				1.Datos de la empresa"<<endl;
	cout<<"				2.Datos del personal"<<endl;
	cout<<"				3.Pago de horas extras"<<endl;
	cout<<"				4.Salir"<<endl;
	cout << "Ingrese selecion : ";cin >>selec;
	system ("cls");
				switch(selec){
						case 1:{
								menu_empresa();
		
								break;
							}
						case 2:{
								menu_personal();
		
								break;
							}	
							
						case 3:{
								 menu_hsextras();
							break;
						} 
						
						case 4:{
								b_while=1;
								
							break;
						}	
					}
	
					
				
	
}

void menu_empresa(){
system("color 0f");
	int selec;
		cout<<"				    MENU EMPRESA"<<endl;
    cout<<endl;
	cout<<"				1.Ver cuil "<<endl;
	cout<<"				2.Ver razon social"<<endl;
	cout<<"				3.Ver gerente "<<endl;
	cout<<"				4.Ver maxima cantidad de empleados"<<endl;
	cout<<"				5.Salir"<<endl;
	cout << "Ingrese selecion : ";cin >>selec;
	system ("cls");
	switch(selec){
		case 1:{
				cout << "Cuil :"<<	obj->getCuit()<<endl ;
			     system("pause"); 
			break;
		}
		case 2:{
				cout << "Razon social "<<obj->getRazonSocial()<<endl ;
				 system("pause"); 
			break;
		}
		case 3:{
					cout<<"GERENTE: "<<endl;
					aux = obj->getGerente();
						cout<<"Nombre, Apellido: "<<aux->getNombre()<<endl;
						cout<<"DNI: "<<aux->getDni()<<endl;
						cout<<endl;
					
			
			  	 system("pause"); 
			break;
		}
		case 4:
			{
			cout << "Maxima cantidad de empleados : "<<obj->getMaxCantEmpl()<<endl ;
				 system("pause"); 
			break;
		}
		case 5: break;
		default:{
			cout<<"Opcion no valida"<<endl;
				 
			break;
		}
	}
	system("cls");
}



void menu_personal(){
	system("color 07");
		int selec;
		cout<<"				    MENU PERSONAL"<<endl;
    cout<<endl;
	cout<<"				1.Lista empleados"<<endl;
	cout<<"				2.Lista de empleado con horario de entrada y salida"<<endl;
	cout<<"				3.Agregar un empleado "<<endl;
	cout<<"				4.Salir"<<endl;
	cout << "Ingrese selecion : ";cin >>selec;
	
	system("cls");
	switch(selec){
		case 1:{
			
			
				for (int i=0; i < obj->getEmplIngr();i++){
					aux = obj->getEmpleados(i);
					mostrar_em(aux);
					cout<<endl;
					
				}
				system("pause"); 
			
				break;
			}
		
		case 2:{
				for (int i=0; i < obj->getEmplIngr();i++){
					aux = obj->getEmpleados(i);
					mostrar_em_hs(aux);
					cout<<endl;
					
				}
				system("pause"); 
			
			break;
		}
		
		case 3:{
		
				int hs1,he1,ms1,me1,se1,ss1;
				string  n;
				long d;
				cout<<"Ingrese nombre y apellido separado por una coma ej: Nombre,Apellido"<<endl;
				cin>>n;
				fflush(stdin);
				cout<<"Ingrese DNI"<<endl;
				cin>>d;
				cout <<"Ingrese horario de entrada "<<endl;
				cout<<"hs ";cin>>he1;cout<<"min ";cin>>me1;cout<<"seg ";cin>>se1;cout<<endl;
				cout <<"Ingrese horario de salida "<<endl;
				cout<<"hs ";cin>>hs1;cout<<"min ";cin>>ms1;cout<<"seg ";cin>>ss1;cout<<endl;
				const char * nom1 = n.c_str();
				Empleado *ti= new Empleado(d,nom1,he1,hs1,me1,ms1,se1,ss1);
				system("cls");
				cout<<"Datos ingresados: "<<endl;
				mostrar_em_hs(ti);
				cout<<endl;
				system("pause");
				obj->addEmpleado(*ti);
				delete ti;
			
			break;
		}
		case 4:{
			
			break;
		}
			default :{
		cout<<"Opcion no valida"<<endl;
		system("pause");
		break;
	}
		
	}
		system("cls");
}

void menu_hsextras(){
system("color 0d");
	int selec;
	cout<<"				    MENU HORAS EXTRAS 	"<<endl;
    cout<<endl;
	cout<<"				1.Valor hora extra"<<endl;
	cout<<"				2.Ver listado con el pago de horas extras"<<endl;
	cout<<"				3.Modificar valor horas extras"<<endl;
	cout<<"				4.Salir"<<endl;
	cout << "Ingrese selecion : ";cin >>selec;
	system("cls");
	switch (selec){
		case 1:{
			if (v_hora==0){
				cout<<"No hay un valor definido para las horas extras ingreselo a continuacion"<<endl;
				cin>>v_hora;
				system("cls");
				}
			cout <<"Valor hora extra "<< v_hora<<" $ "<<endl;
			system("pause");
			
			break;
		}
		
		case 2:{
				float he,hs,me,ms;
			float total_hs,pago;
			if(v_hora!=0){
			
					for (int i=0; i < obj->getEmplIngr();i++){
					aux = obj->getEmpleados(i);
					cout<<"Nombre del empleado: "<<aux->getNombre()<<endl;
					he = aux->getHorarioEntrada().getHora();
					hs = aux->getHorarioSalida().getHora();
					me = aux->getHorarioSalida().getMinuto();
					ms = aux->getHorarioSalida().getMinuto();
					
					total_hs = (hs+(ms*(1/60)))-(he+(me*(1/60)));
					if (total_hs>8){
						pago = (total_hs-8)*v_hora;
						cout<<"Cantidad de horas extras "<<total_hs-8<<endl;
						cout<<"Valor hs extras : "<<pago<<" $ "<<endl;
						cout<<endl;
						
							}				
					else{
						cout<<"La cantidad de horas "<<total_hs<<" no son sufientes para recibir horas extras"<<endl;
					}
					
					}
			system("pause");
			
		}
		else{
			cout<<"ERROR MONTO POR HORA EXTRA NO ESTABLECIDO A CONTINUACION INGRESELO, Y VUELVA A ESTA OPCION"<<endl;
			cin>>v_hora;
		}
		break;
	}
	case 3:{
			cout<<"valor anterior: "<<v_hora<<endl;
			cout<<"Ingrese nuevo valor"<<endl;
				cin>>v_hora;
		break;
	}
	case 4:{
		
		break;
	}
	default :{
		cout<<"Opcion no valida"<<endl;
		system("pause");
		break;
	}
}

	system("cls");
}

void mostrar_em(Empleado *&e) {
	cout<<"\n*******************************************************"<<endl;
	cout<<"Nombre, Apellido: "<<e->getNombre()<<endl;
	cout<<"DNI: "<<e->getDni()<<endl;
	
}

void mostrar_em_hs(Empleado *&e){
	cout<<"\n*******************************************************"<<endl;
	cout<<"Nombre, Apellido: "<<e->getNombre()<<endl;
	cout<<"DNI: "<<e->getDni()<<endl;
	cout<<"Hora de entrada: "<<e->getHorarioEntrada().getHora()<<" : ";
	cout<<e->getHorarioEntrada().getMinuto()<<" : ";
	cout<<e->getHorarioEntrada().getSegundo()<<endl;
	cout<<"Hora de salida: "<<e->getHorarioSalida().getHora()<<" : ";
	cout<<e->getHorarioSalida().getMinuto()<<" : ";
	cout<<e->getHorarioSalida().getSegundo()<<endl;
	
}
