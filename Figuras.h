#pragma once
// Librerias para poder mover la figura 
#include <conio.h>
#include <Windows.h>



// Clase padre del programa 

class Shape {
protected:
	int size;

public:
	Shape(int size);

	// Funcion virtual para que tenga polimorfismo
	virtual void draw();
};

// Hacemos la clase del cuadrado, desde la clase padre
class Square : public Shape {
public:
	Square(int size);
	void draw();
};

// Hacemos la clase del triangulo, desde la clase padre
class Triangle : public Shape {
public:
	Triangle(int size);
	void draw();
};

// Hacemos la clase del rombo, desde la clase padre 
class Rhombus : public Shape{
public:
	Rhombus(int size);
	void draw();
};