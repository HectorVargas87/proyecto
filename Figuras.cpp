#include "Figuras.h"
#include <iostream>

using namespace std;

Shape::Shape(int size) {
	this->size = size;
}

Square::Square(int size) : Shape(size) {}
Triangle::Triangle(int size) : Shape(size) {}
Rhombus::Rhombus(int size) : Shape(size) {}

// Funcion virtual para tener polimorfismo
void Shape:: draw(){}


// Instruccion de cuadrado para draw()
void Square::draw() {

    int op;

    cout << "Le gustaria que su cuadrado este relleno?\n";
    cout << "1) Relleno \n";
    cout << "2) Vacio \n";
    cout << "Opcion:  ";
    cout << "\n";

    cin >> op;

    if (op == 1) {

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; ++j) {
                cout << "*";
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "\n";
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == 0 || j == 0 || (i == size - 1) || (j == size - 1)) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}
        




// Instrucciones de triangulo para draw()
void Triangle::draw() {

    for (int i = 0; i < size; i++){
        for (int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}





// Instrucciones de Rombo para draw()
void Rhombus::draw(){
    for (int j = 0; j < size; ++j) {
        for (int i = 0; i < size - j - 1; ++i)
            cout << " ";
        for (int i = 0; i < 2 * j + 1; ++i)
            cout << "*";
        cout << endl;
    }

    for (int j = size - 2; j >= 0; --j) {
        for (int i = 0; i < size - j - 1; ++i)
            cout << " ";
        for (int i = 0; i < 2 * j + 1; ++i)
            cout << "*";
        cout << endl;
    }
}

 