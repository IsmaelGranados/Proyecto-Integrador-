#ifndef GALLETAS_C
#define GALLETAS_C

#include <string>
#include <iostream>
using namespace std;

class Galletas{
private:
    string Sabor;
    int Cantidad;
    float Precio;
    bool Chispas;
    bool Rellenas;
    bool Decoracion;

public:

    Galletas(string s, int c, float pgal, bool ch, bool rell, bool dec){
        Sabor = s;
        Cantidad = c;
        Precio = pgal;
        Chispas  = ch;
        Rellenas = rell;
        Decoracion = dec;
    }
    bool isChispas(){return Chispas;}
    bool isRellenas(){return Rellenas;}
    bool isDecoracion(){return Decoracion;}
    void SiChispas(){Chispas = true;}
    void SiRellenas(){Rellenas = true;}
    void SiDecoracion(){Decoracion = true;}
    string getSabor(){return Sabor;}
    int getCantidad(){return Cantidad;}
    float getPrecio(){return Precio;}
    
};

#endif