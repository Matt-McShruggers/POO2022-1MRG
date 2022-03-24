#include "Circulo.h"
#include "Figura.h"
#define _USE_MATH_DEFINES
#include <math.h>
#define PI M_PI

using std:: cout;
using std:: cin;
using std:: endl;


Circulo:: Circulo() : Figura(){
    this-> radio = 0;
}

Circulo:: Circulo(float area, float perimetro, float radio) : Figura(area, perimetro){
    this-> radio = radio;
}

float Circulo::calcularArea() {
    float area;
    area = 2 * PI * pow(radio, 2);
    return area;
}

float Circulo:: calcularPerimetro(){
    float perimetro;
    cin>>radio;
    perimetro = 2 * PI * radio;
    return perimetro;
}

void Circulo:: mostrarArea(){
    Figura:: mostrarArea();
}

void Circulo:: mostrarPerimetro(){
    Figura:: mostrarPerimetro();
}

//Profe, muy honestamente tomamos este de internet porque por más que intentamos no nos formaba un círculo

void Circulo:: representacion(){

    float r = 8;

    float pr = 2;

    for (int i = -r; i <= r; i++)
    {
        for (int j = -r; j <= r; j++)
        {
            float d = ((i*pr)/r)*((i*pr)/r) + (j/r)*(j/r);


            if (d >0.95 && d<1.08)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;

    }

}

float Circulo:: getArea(){
    Figura::getArea();
}
float Circulo:: getPerimetro(){
    Figura::getPerimetro();
}
