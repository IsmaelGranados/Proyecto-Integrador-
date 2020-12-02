#include <cmath>
#include <iostream>
#include <string>
using namespace std;

#include "comprador.h"
#include "postre.h"
#include "punto.h"
#include "tarjeta.h"
#include "malteadas.h"
#include "galletas.h"
#include "pago.h"

float cantidad = 0;
string numero = "";
string cvv = "";
string banco = " ";
bool transferencia = false;
bool factura = false;
Tarjeta tarjeta1{};


int menu(){

    int opcion = 0;

    cout << "\nMenu \n1. Pasteles\n2. Galletas \n3. Malteadas" << endl;
    cout << "\nElija una opcion\n"; cin >> opcion;
    
    return opcion;
    
}


float pastel(){

    string tamanio = " ";
    string sabor = " ";
    float precio = 0;
    int opcionT = 0;
    bool horneado;
    bool comido;

    cout << "\nDe que sabor quiere su pastel?\n"; cin >> sabor;
    cout << "\nDe que tamanio quiere su pastel\n1. Grande \n2. Mediano \n3. Chico\n"; cin >> opcionT;
    
    if(opcionT == 1){

        precio = 90.50;
        tamanio = "Grande";
        Pastel pastel1(tamanio, sabor, precio);
        cout << "El precio de su pastel sera " + to_string(pastel1.getPrecio()) + " pesos" << endl;
        cout << "El sabor de su pastel sera de " + pastel1.getSabor() << endl;
        cout << "El tamanio de su pastel sera " + pastel1.getTamanio() << endl;
        return pastel1.getPrecio();
    }
    else if(opcionT == 2){

        precio = 70.50;
        tamanio = "Mediano";
        Pastel pastel1(tamanio, sabor, precio);
        cout << "El precio de su pastel sera " + to_string(pastel1.getPrecio()) + " pesos" << endl;
        cout << "El sabor de su pastel sera de " + pastel1.getSabor() << endl;
        cout << "El tamanio de su pastel sera " + pastel1.getTamanio() << endl;
        return pastel1.getPrecio();
    }

    else if(opcionT == 3){

        precio = 50.50;
        tamanio = "Chico";
        Pastel pastel1(tamanio, sabor, precio);
        cout << "El precio de su pastel sera " + to_string(pastel1.getPrecio()) + " pesos" << endl;
        cout << "El sabor de su pastel sera de " + pastel1.getSabor() << endl;
        cout << "El tamanio de su pastel sera " + pastel1.getTamanio() << endl;
        return pastel1.getPrecio();
    }
        
    else{
        cout << "Opcion no valida" << endl;
    }

    
};

float galletas(){

    string sabor = " ";
    int cantidad = 0;
    float precio = 0;
    int opcionO = 0;
    int opcionChispas = 0;
    int opcionRellenas = 0;
    int opcionDecoradas = 0;
    bool chispas = false;
    bool rellenas = false;
    bool decoracion = false;

    cout << "\nDe que sabor quiere sus galletas?\n"; cin >> sabor;
    cout << "\nDe cuantas galletas quiere su orden? \n1. Media docena \n2. Una docena\n"; cin >> opcionO;

// Media docena

    if(opcionO == 1){

        cantidad = 6;
        cout << "\nQuiere sus galletas con chispas? \n1. Si \n2. No\n"; cin >> opcionChispas;
        
    // Con Chispas

        if(opcionChispas == 1){
            chispas = true;
            cout << "\nQuiere sus galletas con relleno? \n1. Si \n2. No\n"; cin >> opcionRellenas;

        // Con Relleno

            if (opcionRellenas == 1){
                rellenas = true;
                cout << "\nQuiere sus galletas decoradas? \n1. Si \n2. No\n"; cin >> opcionDecoradas;

            // Con Decoracion

                if(opcionDecoradas == 1){
                    decoracion = true;
                    precio = 45.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran chipas, relleno y decoracion." << endl;
                    return galletas1.getPrecio();
                } 

            //Sin Decoracion

                else if(opcionDecoradas == 2){
                    decoracion = false;
                    precio = 40.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran chipas y relleno." << endl;
                    return galletas1.getPrecio();
                } 

            } 

        // Sin Relleno

            else if(opcionRellenas == 2){
                rellenas = false;
                cout << "\nQuiere sus galletas decoradas? \n1. Si \n2. No\n"; cin >> opcionDecoradas;

            // Con decoracion

                if(opcionDecoradas == 1){
                    decoracion = true;
                    precio = 40.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran chipas y decoracion." << endl;
                    return galletas1.getPrecio();
                } 

            // Sin Decoracion

                else if(opcionDecoradas == 2){
                    decoracion = false;
                    precio = 35.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran chipas." << endl;
                    return galletas1.getPrecio();
                } 

            }

        } 

    // Sin Chispas

        else if(opcionChispas == 2){

            chispas = false;
            cout << "\nQuiere sus galletas con relleno? \n1. Si \n2. No\n"; cin >> opcionRellenas;

        // Con Relleno

            if (opcionRellenas == 1){
                rellenas = true;
                cout << "\nQuiere sus galletas decoradas? \n1. Si \n2. No\n"; cin >> opcionDecoradas;

            // Con Deoracion

                if(opcionDecoradas == 1){
                    decoracion = true;
                    precio = 40.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran relleno y decoracion." << endl;
                    return galletas1.getPrecio();
                } 

            // Sin Decoracion

                else if(opcionDecoradas == 2){
                    decoracion = false;
                    precio = 35.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran relleno." << endl;
                    return galletas1.getPrecio();
                } 

            } 

        // Sin Relleno

            else if(opcionRellenas == 2){
                rellenas = false;
                cout << "\nQuiere sus galletas decoradas? \n1. Si \n2. No\n"; cin >> opcionDecoradas;

            // Con Decoracion

                if(opcionDecoradas == 1){
                    decoracion = true;
                    precio = 35.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran decoracion." << endl;
                    return galletas1.getPrecio();
                } 

            // Sin Decoracion

                else if(opcionDecoradas == 2){
                    decoracion = false;
                    precio = 30.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    return galletas1.getPrecio();
                } 

            } 
        } 

    }

// Docena

    else if (opcionO == 2){

        cantidad = 12;
        cout << "\nQuiere sus galletas con chispas? \n1. Si \n2. No\n"; cin >> opcionChispas;

    // Con Chispas

        if(opcionChispas == 1){
            chispas = true;
            cout << "\nQuiere sus galletas con relleno? \n1. Si \n2. No\n"; cin >> opcionRellenas;

        // Con Relleno

            if (opcionRellenas == 1){
                rellenas = true;
                cout << "\nQuiere sus galletas decoradas? \n1. Si \n2. No\n"; cin >> opcionDecoradas;

            // Con decoracion

                if(opcionDecoradas == 1){
                    decoracion = true;
                    precio = 65.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran chipas, relleno y decoracion." << endl;
                    return galletas1.getPrecio();
                } 

            // Sin decoracion

                else if(opcionDecoradas == 2){
                    decoracion = false;
                    precio = 60.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran chipas y relleno." << endl;
                    return galletas1.getPrecio();
                } 

            } 

        // Sin relleno

            else if(opcionRellenas == 2){
                rellenas = false;
                cout << "\nQuiere sus galletas decoradas? \n1. Si \n2. No\n"; cin >> opcionDecoradas;

            // Con decoracion

                if(opcionDecoradas == 1){
                    decoracion = true;
                    precio = 60.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran chipas y decoracion." << endl;
                    return galletas1.getPrecio();
                } 

            // Sin Decoracion

                else if(opcionDecoradas == 2){
                    decoracion = false;
                    precio = 55.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran chipas." << endl;
                    return galletas1.getPrecio();
                } 

            } 

        } 

    // Sin Chispas

        else if(opcionChispas == 2){

            chispas = false;
            cout << "\nQuiere sus galletas con relleno? \n1. Si \n2. No\n"; cin >> opcionRellenas;

        // Con Relleno

            if (opcionRellenas == 1){
                rellenas = true;
                cout << "\nQuiere sus galletas decoradas? \n1. Si \n2. No\n"; cin >> opcionDecoradas;

            // Con Decoracion

                if(opcionDecoradas == 1){
                    decoracion = true;
                    precio = 60.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran relleno y decoracion." << endl;
                    return galletas1.getPrecio();
                } 

            // Sin Decoracion

                else if(opcionDecoradas == 2){
                    decoracion = false;
                    precio = 55.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran relleno." << endl;
                    return galletas1.getPrecio();
                } 

            } 

        // Sin Relleno

            else if(opcionRellenas == 2){
                rellenas = false;
                cout << "\nQuiere sus galletas decoradas? \n1. Si \n2. No\n"; cin >> opcionDecoradas;

            // Con Decoracion

                if(opcionDecoradas == 1){
                    decoracion = true;
                    precio = 55.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    cout << "Sus galletas tendran decoracion." << endl;
                    return galletas1.getPrecio();
                } 

            // Sin Decoracion

                else if(opcionDecoradas == 2){
                    decoracion = false;
                    precio = 50.50;
                    Galletas galletas1(sabor, cantidad, precio, chispas, rellenas, decoracion);
                    cout << "El sabor de sus galletas es " + galletas1.getSabor() << endl;
                    cout << "Usted odrdeno " + to_string(galletas1.getCantidad()) + " galletas" << endl;
                    cout << "El precio de sus galletas sera de " + to_string(galletas1.getPrecio()) + " pesos" << endl;
                    return galletas1.getPrecio();
                } 

            } 
        } 

    }

};

float malteadas(){
    
    string tamanio = " ";
    string sabor = " ";
    float precio = 0;
    int opcionTamanio = 0;
    int opcionCrema = 0;
    int opcionChispas = 0; 
    bool preparada = false;
    bool bebida = false;
    bool crema = false;
    bool chispas = false;

    cout << "\nDe que sabor quiere su malteada? \n"; cin >> sabor;
    cout << "\nDe que tamanio quiere su malteada\n1. Grande \n2. Mediana \n3. Chica\n"; cin >> opcionTamanio;

// Grande

    if(opcionTamanio == 1){

        precio = 30.50;
        tamanio = "Grande";
        cout << "\nDesea su malteada con crema batida? \n1. Si \n2. No\n"; cin >> opcionCrema;

    // Con Crema Batida

        if(opcionCrema == 1){

            crema = true;
            cout << "\nDesea su malteada con chispas? \n1. Si \n2. No\n"; cin >> opcionChispas;

        // Con Chispas

            if(opcionChispas == 1){

                chispas = true;
                Malteada malteada1(tamanio, sabor, precio, crema, chispas);
                cout << "El tamanio de su malteada es " + tamanio << endl;
                cout << "El sabor de su malteada es " + sabor << endl; 
                cout << "El pecio de su malteada es de " + to_string(malteada1.getPrecio()) + " pesos" << endl;
                cout << "Su malteada llevara crema batida y chispas" << endl;
                return malteada1.getPrecio();

            }

        // Sin Chispas

            else if(opcionChispas == 2){

                chispas = false;
                Malteada malteada1(tamanio, sabor, precio, crema, chispas);
                cout << "El tamanio de su malteada es " + tamanio << endl;
                cout << "El sabor de su malteada es " + sabor << endl; 
                cout << "El pecio de su malteada es de " + to_string(malteada1.getPrecio()) + " pesos" << endl;
                cout << "Su malteada llevara crema batida" << endl;
                return malteada1.getPrecio();
            }
            
        }

    // Sin Crema

        else if(opcionCrema == 2){

            crema = false;
            cout << "\nDesea su malteada con chispas? \n1. Si \n2. No\n"; cin >> opcionChispas;

        // Con Chispas

            if(opcionChispas == 1){

                chispas = true;
                Malteada malteada1(tamanio, sabor, precio, crema, chispas);
                cout << "El tamanio de su malteada es " + tamanio << endl;
                cout << "El sabor de su malteada es " + sabor << endl;
                cout << "El pecio de su malteada es de " + to_string(malteada1.getPrecio()) + " pesos" << endl;
                cout << "Su malteada llevara chispas" << endl;
                return malteada1.getPrecio(); 

            }

        // Sin Chispas

            else if(opcionChispas == 2){

                chispas = false;
                Malteada malteada1(tamanio, sabor, precio, crema, chispas);
                cout << "El tamanio de su malteada es " + tamanio << endl;
                cout << "El sabor de su malteada es " + sabor << endl; 
                cout << "El pecio de su malteada es de " + to_string(malteada1.getPrecio()) + " pesos" << endl;
                return malteada1.getPrecio();
            }

        }


    }

// Mediana

    if (opcionTamanio == 2){

        precio = 25.50;
        tamanio = "Mediana";
        cout << "\nDesea su malteada con crema batida? \n1. Si \n2. No\n"; cin >> opcionCrema;

    // Con Crema Batida

        if(opcionCrema == 1){

            crema = true;
            cout << "\nDesea su malteada con chispas? \n1. Si \n2. No\n"; cin >> opcionChispas;

        // Con Chispas

            if(opcionChispas == 1){

                chispas = true;
                Malteada malteada1(tamanio, sabor, precio, crema, chispas);
                cout << "El tamanio de su malteada es " + tamanio << endl;
                cout << "El sabor de su malteada es " + sabor << endl; 
                cout << "El pecio de su malteada es de " + to_string(malteada1.getPrecio()) + " pesos" << endl;
                cout << "Su malteada llevara crema batida y chispas" << endl;
                return malteada1.getPrecio();

            }

        // Sin Chispas

            else if(opcionChispas == 2){

                chispas = false;
                Malteada malteada1(tamanio, sabor, precio, crema, chispas);
                cout << "El tamanio de su malteada es " + tamanio << endl;
                cout << "El sabor de su malteada es " + sabor << endl; 
                cout << "El pecio de su malteada es de " + to_string(malteada1.getPrecio()) + " pesos" << endl;
                cout << "Su malteada llevara crema batida" << endl;
                return malteada1.getPrecio();
            }
            
        }

    // Sin Crema

        else if(opcionCrema == 2){

            crema = false;
            cout << "\nDesea su malteada con chispas? \n1. Si \n2. No\n"; cin >> opcionChispas;

        // Con Chispas

            if(opcionChispas == 1){

                chispas = true;
                Malteada malteada1(tamanio, sabor, precio, crema, chispas);
                cout << "El tamanio de su malteada es " + tamanio << endl;
                cout << "El sabor de su malteada es " + sabor << endl; 
                cout << "El pecio de su malteada es de " + to_string(malteada1.getPrecio()) + " pesos" << endl;
                cout << "Su malteada llevara chispas" << endl;
                return malteada1.getPrecio();

            }

        // Sin Chispas

            else if(opcionChispas == 2){

                chispas = false;
                Malteada malteada1(tamanio, sabor, precio, crema, chispas);
                cout << "El tamanio de su malteada es " + tamanio << endl;
                cout << "El sabor de su malteada es " + sabor << endl; 
                cout << "El pecio de su malteada es de " + to_string(malteada1.getPrecio()) + " pesos" << endl;
                return malteada1.getPrecio();
            }

        }


    }

// Chica

    if (opcionTamanio == 3){

        precio = 20.50;
        tamanio = "Chica";
        cout << "\nDesea su malteada con crema batida? \n1. Si \n2. No\n"; cin >> opcionCrema;

    // Con Crema Batida

        if(opcionCrema == 1){

            crema = true;
            cout << "\nDesea su malteada con chispas? \n1. Si \n2. No\n"; cin >> opcionChispas;

        // Con Chispas

            if(opcionChispas == 1){

                chispas = true;
                Malteada malteada1(tamanio, sabor, precio, crema, chispas);
                cout << "El tamanio de su malteada es " + tamanio << endl;
                cout << "El sabor de su malteada es " + sabor << endl; 
                cout << "El pecio de su malteada es de " + to_string(malteada1.getPrecio()) + " pesos" << endl;
                cout << "Su malteada llevara crema batida y chispas" << endl;
                return malteada1.getPrecio();

            }

        // Sin Chispas

            else if(opcionChispas == 2){

                chispas = false;
                Malteada malteada1(tamanio, sabor, precio, crema, chispas);
                cout << "El tamanio de su malteada es " + tamanio << endl;
                cout << "El sabor de su malteada es " + sabor << endl;
                cout << "El pecio de su malteada es de " + to_string(malteada1.getPrecio()) + " pesos" << endl;
                cout << "Su malteada llevara crema batida" << endl;
                return malteada1.getPrecio(); 
            }
            
        }

    // Sin Crema

        else if(opcionCrema == 2){

            crema = false;
            cout << "\nDesea su malteada con chispas? \n1. Si \n2. No\n"; cin >> opcionChispas;

        // Con Chispas

            if(opcionChispas == 1){

                chispas = true;
                Malteada malteada1(tamanio, sabor, precio, crema, chispas);
                cout << "El tamanio de su malteada es " + tamanio << endl;
                cout << "El sabor de su malteada es " + sabor << endl; 
                cout << "El pecio de su malteada es de " + to_string(malteada1.getPrecio()) + " pesos" << endl;
                cout << "Su malteada llevara chispas" << endl;
                return malteada1.getPrecio();

            }

        // Sin Chispas

            else if(opcionChispas == 2){

                chispas = false;
                Malteada malteada1(tamanio, sabor, precio, crema, chispas);
                cout << "El tamanio de su malteada es " + tamanio << endl;
                cout << "El sabor de su malteada es " + sabor << endl; 
                cout << "El pecio de su malteada es de " + to_string(malteada1.getPrecio()) + " pesos" << endl;
                return malteada1.getPrecio();
            }

        }

    }

}

string punto_de_entrega(){

    string lugar = " ";
    string direccion = " ";
    string referencias = " ";
    bool ubicado = false;
    bool llegado = false;

    cin.ignore(32767,'\n');
    cout << "\nEn que lugar desea verse? \n"; getline(cin, lugar);
    cout << "\nEn donde se ubica ese lugar? \n"; getline(cin, direccion);
    cout << "\nPodria proporcionar alguna referencia? \n"; getline(cin, referencias);
    
    Punto punto1(lugar, direccion, referencias, ubicado, llegado);

    return punto1.getLugar();

}

void cliente(){

    string nombre = " ";
    string direccion = " ";
    string telefono = " ";
    string correo = " ";
    int opcionEntrega = 0;
    string punto = " ";

    cin.ignore(32767,'\n');
    cout << "\nIngrese su nombre\n"; getline(cin, nombre);
    cout << "Ingrese su drieccion\n"; getline(cin, direccion);
    cout << "Ingrese un numero telefonico para contactarlo\n"; getline(cin, telefono);
    cout << "Ingrese un correo electronico para contactarlo\n"; getline(cin, correo);

    Comprador comprador1(nombre, direccion,telefono, correo);
    
    cout << "\nComo desea recibir su pedido?\n1. Punto de Entrega \n2. Envio \n"; cin >> opcionEntrega;

    if(opcionEntrega == 1){

        punto = punto_de_entrega();
        cout << "El paquete sera entregado a " + comprador1.getNombre() << endl;
        cout << "en " + punto << endl;
    }

    else if(opcionEntrega == 2){

        cout << "El paquete sera enviado a " + comprador1.getNombre() << endl;
        cout << "Con direccion " + comprador1.getDireccion() << endl;

    }


};

void crear_tarjeta(float cuenta){

    cantidad = cuenta;

    cin.ignore(32767,'\n');
    cout << "\nIntroduzca el nombre de su banco \n"; getline(cin, banco);
    cout << "\nIntroduzca el numero de la tarjeta \n"; cin >> numero;
    cout << "\nIntroduzca el cvv de la tarjeta \n"; cin >> cvv;
    
    Tarjeta tarjeta1(cantidad, numero, cvv, banco);

   /* cout << tarjeta1.getDatosTarjeta() << endl;*/

    Pago pago1(cantidad, factura, tarjeta1);
    pago1.generar_pago();

};


int main(){

    int opcion = 0;
    float cuenta = 0;
    int continuar = 1;
    
    cout << "Bienvenido a la Tienda" << endl;
    
    while (continuar == 1){
        opcion = menu();
    

        switch(opcion){

            case 1:
                cuenta = cuenta + pastel();
                cout << "Su cuenta hasta el momento es de " + to_string(cuenta) << endl;
                cout << "\nDesea seguir comprando? \n1. Si \n2. No \n"; cin >> continuar;

                break;
        
            
            case 2:
                cuenta = cuenta + galletas();
                cout << "Su cuenta hasta el momento es de " + to_string(cuenta) << endl;
                cout << "\nDesea seguir comprando? \n1. Si \n2. No \n"; cin >> continuar;

                break;

            case 3:
                cuenta = cuenta + malteadas();
                cout << "Su cuenta hasta el momento es de " + to_string(cuenta) << endl;
                cout << "\nDesea seguir comprando? \n1. Si \n2. No \n"; cin >> continuar;

                break;

        }
      
    }

    cout << "\nProcederemos a recopilar sus datos para el envio\n" << endl;
    cliente();
    crear_tarjeta(cuenta);
    cout << "\n**** Gracias por su compra! ****" << endl;
}