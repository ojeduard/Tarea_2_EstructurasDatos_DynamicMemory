//
// Created by Eduardo Ojeda on 8/9/22.
//
#include <iostream>
#include "VectorInt.h"

using namespace std;

int main(){
    VectorInt vec;
    VectorInt vec3(10);


    vec.Insertar(10);
    vec.Insertar(9);
    vec.Insertar(11);

    cout << "La cantidad de elementos almacenados es: " << vec.Cantidad() << endl;
    if (vec.ValueAt(1) != -1000)
        cout << vec.ValueAt(1) << endl;
    if (vec.ValueAt(2) != -1000)
        cout << vec.ValueAt(2) << endl;
    if (vec.ValueAt(3) != -1000)
        cout << vec.ValueAt(3) << endl;
    if (vec.ValueAt(4) != -1000)
        cout << vec.ValueAt(4) << endl;

    cout << endl;

    vec.Borrar(2);

    cout << "La cantidad de elementos almacenados es: " << vec.Cantidad() << endl;
    if (vec.ValueAt(1) != -1000)
        cout << vec.ValueAt(1) << endl;
    if (vec.ValueAt(2) != -1000)
        cout << vec.ValueAt(2) << endl;
    if (vec.ValueAt(3) != -1000)
        cout << vec.ValueAt(3) << endl;
    if (vec.ValueAt(4) != -1000)
        cout << vec.ValueAt(4) << endl;

    vec.ChangeValueAt(1, 17);
    vec.ChangeValueAt(2, 8);
    cout << endl;

    cout << "La cantidad de elementos almacenados es: " << vec.Cantidad() << endl;
    //Probando la sobrecarga de operadores
    if (vec.ValueAt(1) != -1000)
        cout << vec[1] << endl;
    if (vec.ValueAt(2) != -1000)
        cout << vec[2] << endl;
    if (vec[3] != -1000)
        cout << vec.ValueAt(3) << endl;
    if (vec[4]!= -1000)
        cout << vec.ValueAt(4) << endl;

//    cout << "Sobrecarga " << vec[1];

    cout << endl;
    VectorInt vec2(vec);
    if (vec2.ValueAt(1) != -1000)
        cout << vec.ValueAt(1) << endl;
    if (vec2.ValueAt(2) != -1000)
        cout << vec.ValueAt(2) << endl;

    cout << endl;
    cout << "La cantidad de elementos almacenados es: " << vec3.Cantidad() << endl;
    if (vec3.ValueAt(1) != -1000)
        cout << vec3.ValueAt(1) << endl;
    if (vec3.ValueAt(2) != -1000)
        cout << vec3.ValueAt(2) << endl;

    vec3.Insertar(10);

    cout << endl << endl;
    cout << "La cantidad de elementos almacenados es: " << vec3.Cantidad() << endl;
    if (vec3.ValueAt(1) != -1000)
        cout << vec3.ValueAt(1) << endl;
    if (vec3.ValueAt(2) != -1000)
        cout << vec3.ValueAt(2) << endl;
    if (vec3.ValueAt(3) != -1000)
        cout << vec3.ValueAt(3) << endl;
    if (vec3.ValueAt(11) != -1000)
        cout << vec3.ValueAt(11) << endl;

    vec3.ChangeValueAt(1, 17);
    vec3.ChangeValueAt(2, 8);
    vec3.ChangeValueAt(3, 10);
    vec3.ChangeValueAt(4, 1);
    vec3.ChangeValueAt(5, 22);
    vec3.ChangeValueAt(6, 25);
    vec3.ChangeValueAt(7, 1900);
    vec3.ChangeValueAt(8, 202);
    vec3.ChangeValueAt(9, 1996);
    vec3.ChangeValueAt(10, 17);

    cout << "Ejecutando Funcion Imprimir" << endl << endl;
    cout << vec3.imprimir();

    return 0;
}


