#ifndef POSTRE_C
#define POSTRE_C

#include <string>
#include <iostream>
using namespace std;


class Pastel{

private:

    string Tamanio;
    string Sabor; 
    bool Horneado;
    bool Comido;
    float Precio;

public: 

    Pastel(string t, string s, float ppast){
        Tamanio = t;
        Sabor = s;
        Precio = ppast;
        Horneado = false;
        Comido = false; 
    }

    bool isHorneado(){return Horneado;}
    bool isComido(){return Comido;}
    void Hornear(){Horneado = true;}
    void Comer(){Comido = true;}
    string getTamanio(){return Tamanio;}
    string getSabor(){return Sabor;}
    float getPrecio(){return Precio;}


};
            
#endif
