#ifndef PAG_C
#define PAGO_C

#include <string>
#include <iostream>
#include "tarjeta.h"
using namespace std;

class Pago{

private: 

    float Cantidad;
    bool Pagado;
    bool Factura;
    Tarjeta tarjeta;

public:

    Pago(){

        Cantidad = 0;
        Factura = false;
        tarjeta = Tarjeta{};

    }

    Pago(float c, bool fac, Tarjeta tar){

        Cantidad = c;
        Factura = fac;
        tarjeta = tar;
    } 

    void generar_pago(){

        cout << "Se te cobrara: " + to_string(Cantidad) << endl;
        cout << "a la tarjeta con los siguientes datos:\n " + tarjeta.getDatosTarjeta() << endl;
        if(Factura == true){
            cout << "Se te enviara tu facutura a tu correo" << endl;

        }

        else{
            cout << "No se te enviara tu facutura a tu correo" << endl; 
        }
    }


    
    Tarjeta getTarjeta(){return tarjeta;}
    float getCantidad(){return Cantidad;}
    bool isPagado(){return Pagado;}
    bool isFactura(){return Factura;}
    void siPagado(){Pagado = true;}
    void siFactura(){Factura = true;}
};

#endif