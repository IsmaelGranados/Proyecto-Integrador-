#ifndef EFECTIVO_C
#define EFECTIVO_C

#include <string>
#include <iostream>
using namespace std;


class Efectivo{

private:

    float Cantidad;
    int Billetes;
    float Monedas;
    bool Cambio;

public:

    Efectivo(float c, int b, float m){
        Cantidad = c;
        Billetes = b;
        Monedas = m;
        Cambio = false;
    }

    bool isCambio(){return Cambio;}
    void SiCambio(){Cambio = true;}
    float getCantidad(){return Cantidad;}
    int getBilletes(){return Billetes;}
    float getMonedas(){return Monedas;}
    
};

#endif