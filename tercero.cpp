#include "segundo.cpp"
#include "Primero.cpp"
#include <iostream>
using namespace std;
main (){
	string nit,nombres,apellidos,direcciones,codigo,tel,puesto;
	int sueldo;
	int nit;
	
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese el Sueldo : ";
	cin>>sueldo;
	cout<<"Ingrese Nombre :";
	cin>>nombres;
	cout<<"Ingrese Apellido :";
	cin>>apellidos;
	cout<<"Ingrese Direccion :";
	cin>>direccion;
	cout<<"INgrese Numero de telefono";
	cin>>telefono;
	cout<<"ingrese Codigo empleado :";
	cin>>codigo;
	cout<<"Ingrese Puesto :";
	cin>>puesto;
	
	/*Cliente obj = Cliente(nit,sueldo,nombres,apellidos,direccion,codigo,puesto);
	obj.mostrar();*/
Cliente obj= Cliente ();
obj.setNit(nit);
obj.setNombres(nombres);
obj.setApellidos(apellidos);
obj.setDireccion(direccion);
obj.setTelefono(telefono);
obj.setCodigo(codigo);
obj.setPuesto(puesto);
obj.setSueldo(sueldo);

cout<<obj.getNit()<<endl;
cout<<obj.getNombres()<<endl;
cout<<obj.getApellidos()<<endl;
cout<<obj.getDireccion()<<endl;
cout<<obj.getTelefono()<<endl;
cout<<obj.getCodigo()<<endl;
cout<<obj.getPuesto()<<endl;
cout<<obj.getSueldo()<<endl;




}


