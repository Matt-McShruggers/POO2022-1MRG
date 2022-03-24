#include "Cuadrado.h"

using std:: cout;
using std:: cin;
using std:: endl;

Cuadrado:: Cuadrado() : Cuadrilatero(){

}

Cuadrado:: Cuadrado(float area, float perimetro, float lado) : Cuadrilatero(){
    this->lado1 = lado;
    this->lado2= lado;
    this->lado3 = lado;
    this->lado4 = lado;
}


float Cuadrado:: calcularArea(){
    area = lado1 * lado2;
    return area;

}

float Cuadrado:: calcularPerimetro(){
    Cuadrilatero::calcularPerimetro();
    return perimetro;
}
void Cuadrado:: mostrarArea(){
    Cuadrilatero::mostrarArea();
}
void Cuadrado:: mostrarPerimetro(){
    Cuadrilatero::mostrarPerimetro();
}
void Cuadrado:: representacion(){

    for(int i = 0; i < 7; i++){
        cout<<"*  ";
    }
    cout<<endl;
    for(int i = 0; i <= 4; i++){
        cout<<"*";
        cout<<"                 ";
        cout<<"*";
        cout<<endl;
    }
    for(int i = 0; i < 7; i++){
        cout<<"*  ";
    }
    cout<<endl;

}

float Cuadrado:: getArea(){
    return area;
}
float Cuadrado:: getPerimetro(){
    return perimetro;
}

