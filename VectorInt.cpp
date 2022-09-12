//
// Created by Eduardo Ojeda on 8/9/22.
//

#include "VectorInt.h"

VectorInt::VectorInt() {
    inicio = new int[10];
    conteo_max = 10;
    conteo = 0;

    for (int i = 0; i < conteo_max; ++i) {
        inicio[i] = 0;
    }


}

VectorInt::VectorInt(const unsigned int size, int x) {
    conteo = 0;
    conteo_max = size;
    inicio = new int [conteo_max];

    for (int i = 0; i < conteo_max; ++i) {
        inicio[i] = x;
        conteo++;
    }

}

void VectorInt::Insertar(int num) {
    if (conteo <= conteo_max - 1){
        if (conteo == 0){
            inicio[conteo_max - 1] = num;
            conteo++;
        }else if (conteo == (conteo_max -1)){
            inicio[0] = num;
            conteo++;
        }else{
            int pos = (conteo_max - 1) - conteo;
            for (int i = pos; i < conteo_max-1; ++i) {
                inicio[i] = inicio[i + 1];
            }
            conteo++;
            inicio[conteo_max - 1] = num;
        }
    }else{
        std::cout << "VECTOR COMPLETAMENTE LLENO" << std:: endl;
        std::cout << "AUMENTANDO ESPACIOS..." << std:: endl;
        conteo_max *= 2;
        for (int i = 0; i <= conteo; ++i) {
            inicio[conteo + i] = inicio[i];
            inicio[i] = 0;
        }
        Insertar(num);
    }

}

int VectorInt::ValueAt(unsigned int pos) const {
    if (pos <= conteo){
        int aux = (conteo_max - 1) - conteo;
        return inicio[aux + pos];
    }else{
        std::cout << "No se ha ingresado elementos en esa posicion" << std::endl;
    }
    return -1000;
}

VectorInt::~VectorInt() {
    delete [] inicio;
}

void VectorInt::Borrar(unsigned int pos) {
    if(conteo > 0 ){
        if (pos == 1 && conteo == 1){
            inicio[conteo_max-1] = 0;
            conteo--;
        }else if(pos <= conteo){
            int posCero = (conteo_max-1) - conteo;
            int posAnt = pos -1;
            inicio[posCero + pos] = inicio[posCero + posAnt];
            inicio[posCero + posAnt] = 0;
            conteo--;
        }else{
            std:: cout << "Posicion Invalida" << std:: endl;
        }
    }else{
        std::cout << "No hay elementos registrados " << std::endl;
    }
}

unsigned int VectorInt::Cantidad() const {
    return conteo;
}

void VectorInt::ChangeValueAt(unsigned int pos, int element) {
    if(conteo > 0 ){
        if (pos == 1 && conteo == 1){
            inicio[conteo_max-1] = element;

        }else if(pos <= conteo){
            int posCero = (conteo_max-1) - conteo;
            inicio[posCero + pos] = element;

        }else{
            std:: cout << "Posicion Invalida" << std:: endl;
        }
    }else{
        std::cout << "No hay elementos registrados " << std::endl;
    }
}

VectorInt::VectorInt(const VectorInt &vec) {
    conteo = vec.conteo;
    conteo_max = vec.conteo_max;
    inicio = new int [conteo_max];
    for (int i = 0; i < conteo_max; ++i) {
        inicio[i] = vec.inicio[i];
    }
}

std::string VectorInt::imprimir() {
    std::stringstream s;
    s << "|  ";
    for (int i = 1; i <= conteo; ++i) {
        s << ValueAt(i) << "  |  ";
    }
    return s.str();
}









