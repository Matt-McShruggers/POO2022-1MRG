#include "Cuadrilatero.h"


Cuadrilatero:: Cuadrilatero() : Figura(){
    this-> lado1 = 0;
    this-> lado2 = 0;
    this-> lado3 = 0;
    this-> lado4 = 0;
}

float Cuadrilatero::calcularPerimetro() {
    float perimetro;
    perimetro = (this-> lado1 + this-> lado2 + this-> lado3 + this-> lado4);
    return perimetro;
}

float Cuadrilatero::calcularArea() {
    Figura:: calcularArea();
    return area;
}

void Cuadrilatero:: mostrarArea(){
    Figura::mostrarArea();
}
void Cuadrilatero:: mostrarPerimetro(){
    Figura::mostrarPerimetro();
}

void Cuadrilatero::representacion(){
    Figura:: representacion();
}

float Cuadrilatero:: getArea(){
    Figura::getArea();
    return area;
}
float Cuadrilatero:: getPerimetro(){
    Figura::getPerimetro();
    return perimetro;
}