#include "Rectangulo.h"

using std:: cout;
using std::cin;
using std:: endl;

Rectangulo:: Rectangulo() : Cuadrilatero(){

}

Rectangulo::Rectangulo(float area, float perimetro, float alto, float ancho) : Cuadrilatero(){
    this-> lado1 = alto;
    this-> lado2 = ancho;
    this-> lado3 = alto;
    this -> lado4 = ancho;
}

float Rectangulo:: calcularArea(){
    float area = this->lado1 * this->lado2;
    Cuadrilatero::calcularArea();
}

float Rectangulo:: calcularPerimetro(){
    Cuadrilatero:: calcularPerimetro();
}

void Rectangulo:: mostrarArea(){
    Cuadrilatero::mostrarArea();
}
void Rectangulo:: mostrarPerimetro(){
    Cuadrilatero::mostrarPerimetro();
}
void Rectangulo:: representacion(){

    for(int i = 0; i < 10; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i = 0; i <= 6; i++){
        cout<<"*";
        cout<<"        ";
        cout<<"*";
        cout<<endl;
    }
    for(int i = 0; i < 10; i++){
        cout<<"*";
    }
    cout<<endl;

    Cuadrilatero::representacion();

}

float Rectangulo:: getArea(){
    Cuadrilatero::getArea();
}
float Rectangulo:: getPerimetro(){
    Cuadrilatero::getPerimetro();
}