#include "Figura.h"

using std:: cout;
using std:: endl;

Figura:: Figura(){
    this-> area = 0;
    this-> perimetro = 0;
}

Figura:: Figura(float area, float perimetro){
    this-> area = area;
    this-> perimetro = perimetro;
}

float Figura:: calcularArea(){
    return area;
}

float Figura:: calcularPerimetro(){
    return perimetro;
}

void Figura:: mostrarArea(){
    cout<<"El area de la figura es: ";
    cout<<area;
    cout<<endl;
}

void Figura:: mostrarPerimetro(){
    cout<<"El perimetro de la figura es: ";
    cout<<perimetro;
    cout<<endl;
}

void Figura:: representacion(){

}

float Figura:: getArea(){
    return area;
}
float Figura:: getPerimetro(){
    return perimetro;
}
