#ifndef EJERCICIOHERENCIA_VIEW_H
#define EJERCICIOHERENCIA_VIEW_H

#include <iostream>
#include <vector>

using std:: vector;

#include "Figura.h"
#include "Cuadrilatero.h"
#include "Cuadrado.h"
#include "Rectangulo.h"
#include "Circulo.h"


class View {

    private:
        int contador;
    public:
        View();
        int menu();
        void ejecutar();
        void agregarFigura(vector<Figura *> figuras);
        void dibujarFiguras();
        void mostrarAreas(vector<Figura *> figuras);
        void mostrarPerimetros(vector<Figura *> figuras);
        void sumaAreas(vector<Figura *> figuras);



};


#endif //EJERCICIOHERENCIA_VIEW_H
