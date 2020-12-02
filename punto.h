#ifndef PUNTO_C
#define PUNTO_C

#include <string>
#include <iostream>
using namespace std;

class Punto{
    
private:

    string Lugar;
    string Direccion;
    string Referencias;
    bool Ubicado;
    bool Llegado;

public:

    Punto (string l, string d, string r, bool u, bool ll){
        Lugar = l;
        Direccion = d;
        Referencias = r;
        Ubicado = u;
        Llegado = ll;
    }

    bool isUbicado(){return Ubicado;}
    bool isLlegado(){return Llegado;}
    void Ubicar(){Ubicado = true;}
    void Llegar(){Llegado = true;}
    string getDireccion(){return Direccion;}
    string getReferencias(){return Referencias;}
    string getLugar(){return Lugar;}

};

#endif