#ifndef TARJETA_C
#define TARJETA_C

#include <string>
#include <iostream>
using namespace std;

class Tarjeta{

private:

    float Cantidad;
    string Numero;
    string CVV;
    string Banco;
    bool Transferencia;
    string datos_tarjeta;

public: 
    
    Tarjeta(float cant, string num, string cvv, string b){
        Cantidad = cant;
        Numero = num;
        CVV = cvv;
        Banco = b;
        Transferencia = false;
        datos_tarjeta += "\nNumero de tarjeta: " + Numero;
        datos_tarjeta += "\nCVV: " + CVV;
        datos_tarjeta += "\nTu banco es " + Banco;

    }

    Tarjeta(){
        Cantidad = 0;
        Numero = " ";
        CVV = " ";
        Banco = " ";
        Transferencia = false;

    }

 
    bool isTransferencia(){return Transferencia;}
    void siTransferencia(){Transferencia = true;}
    float getCantidad(){return Cantidad;}
    string getNumero(){return Numero;}
    string getCVV(){return CVV;}
    string getBanco(){return Banco;}
    string getDatosTarjeta(){return datos_tarjeta;}

};

#endif