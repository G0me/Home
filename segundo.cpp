#include "Primero.cpp"
#include <iostream>
using namespace std;
class Primero : Segundo {
	
	private :string nit;
	public : 
	primero(){
	}
    primero((string nom,string ape,string dir,string pu,string co,string ni,int tel,int su):tercero(nom,ape,dir,pu,co,tel,su) {
    	
    nit= n;	
	}	
	
	
void setNit(string n){nit=n;}
void setNombres(string nom){nombres = nom;}	
void setApellidos(string ape){apellidos = ape;}
void setDireccion(string dir){direccion = dir;}
void setPuesto(string pu){puesto = pu;}
void setCodigo(string co){codigo = co;}
void setTelefono(string tel){telefono = tel;}
void setSueldo(string su){sueldo = su;}
void mostrar(){

string getNit(){return nit;}
string getNombres(){return nombres;}	
string getApellidos(){return apellidos;}
string getDireccion(){return direccion;}
string getPuesto(){return puesto;}
string getCodigo(){return codigo; }
int getTelefono{return telefono;}
int getSueldo{return sueldo;}
	
	cout<<"Datos"<<endl;
	cout<<nombres<<apellidos<<direccion<<puesto<<condigo<<nit<<telefono<<sueldo<<endl;
}	
};
