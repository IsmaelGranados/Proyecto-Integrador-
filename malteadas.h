#ifndef MALTEADAS_C
#define MALTEADAS_C

#include <string>
#include <iostream>
using namespace std;

class Malteada{

    private:
    
        string Tamanio;
        string Sabor;
        float Precio;
        bool Preparada;
        bool Bebida;
        bool Crema;
        bool Chispas;

    public:

        Malteada(string tt, string ss, float pmal, bool cr, bool chisp){
            Tamanio = tt;
            Sabor = ss;
            Precio = pmal;
            Preparada = false;
            Bebida = false;
            Crema = cr;
            Chispas = chisp;
        }

        
    bool isPreparado(){return Preparada;}
    bool isBebida(){return Bebida;}
    bool isCrema(){return Crema;}
    bool isChispas(){return Chispas;}
    void Preparar(){Preparada = true;}
    void Beber(){Bebida = true;}
    string getTamanio(){return Tamanio;}
    string getSabor(){return Sabor;}
    float getPrecio(){return Precio;}

};

#endif