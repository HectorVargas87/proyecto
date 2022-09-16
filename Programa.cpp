#include "Programa.h"

int Programa::return_size() {
	int size;
	cout << "Ingrese el tamaño de la figura: ";
	cin >> size;
	cout << endl;
	return size;
}

void Programa::run() {
	int opc;

	Shape* cuadrado;
	Shape* triangulo;
	Shape* rombo;

	do {
		cout << "Que figura le gustaria dibujar?\n";
		cout << "\n";
		cout << "1) Cuadrado \n";
		cout << "2) Rombo \n";
		cout << "3) Triangulo \n";
		cout << "4) SALIR\n";
		cout << "\n";
		cout << "Digite su opcion: ";
		cin >> opc;
		cout << "\n";

		// En cada una de las opciones se pregunta el tamaño, para despues invocar el draw() de cada figura
		switch (opc) {
		case 1:
			
			cuadrado = new Square(return_size());
			cuadrado->draw();
			break;

		case 2:
			
			rombo = new Rhombus(return_size());
			rombo->draw();
			break;

		case 3:
			
			triangulo = new Triangle(return_size());
			triangulo->draw();
			break;

		case 4:
			break;

		default:
			cout << endl;
			cout << "No existe esa opcion, elija una opcion valida contenida en el menu: ";
			break;
		}

		} while (opc != 4);
	}