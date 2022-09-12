#ifndef VECTORINT_H
#define VECTORINT_H
#include <iostream>
#include "sstream"

class VectorInt {
	
private:
	// Apuntador al inicio del vector
	int* inicio;
	// Tamaño del vector - cantidad máxima de elementos que puede almacenar
	unsigned int conteo_max;
	// Cantidad de elementos que contiene el vector
	unsigned int conteo;

public:
    VectorInt();
    VectorInt(const unsigned int size, int variable = 0 );
    VectorInt(const VectorInt&);
    ~VectorInt();

    void Insertar(int);
    void Borrar(unsigned int);

    int ValueAt(unsigned int) const;
    void ChangeValueAt(unsigned int, int);

    unsigned int Cantidad() const;
    // Retorna siempre el que este en la posicion 1 del vector (llenandose de la ultima a la primera)
    int ValueAt (){return inicio[((conteo_max-1)-conteo)+1];}
    std::string imprimir();
};

#endif