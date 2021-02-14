#include <iostream> 
using namespace	std;
class Empleado{
	 
	protected :string nombres,apellidos,direccion,puesto,codigo;
	int telefono;
	int sueldo;
	
	protected :
		 Empleado( ){
		 }
		 Empleado(string nom,string ape,string dir,string pu,string co,int tel,int su){
		 	nombres = nom;
		 	apellidos = ape;
		 	direccion = dir;
		 	telefono = tel;
		 	puesto = pu;
		 	codigo = co;
		 	telefono = tel;
		 	sueldo = su;
		 }
		 void mostrar();
	
};	
