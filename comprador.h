#ifndef COMPRADOR_C
#define COMPRADOR_C

#include <cmath>
#include <iostream>
#include <string>
using namespace std; 


class Comprador{

private: 

    string Nombre;
    string Direccion;
    string Telefono;
    string Correo;

public: 

    Comprador(string n , string d, string t, string c){
        Nombre = n;
        Direccion = d;
        Telefono = t;
        Correo = c;
    }  

    string getNombre(){return Nombre;}
    string getDireccion(){return Direccion;}
    string getTelefono(){return Telefono;}
    string getCorreo(){return Correo;}

    
};

#endif