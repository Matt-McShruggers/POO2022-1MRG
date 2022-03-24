#ifndef EJERCICIOHERENCIA_CUADRILATERO_H
#define EJERCICIOHERENCIA_CUADRILATERO_H

#include "Figura.h"


class Cuadrilatero : public Figura {
    protected:
        float lado1, lado2, lado3, lado4;
    public:
        Cuadrilatero();

        float getArea() override;
        float getPerimetro() override;
        float calcularPerimetro() override;
        float calcularArea() override;
        void mostrarArea() override;
        void mostrarPerimetro() override;
        void representacion() override;

};


#endif //EJERCICIOHERENCIA_CUADRILATERO_H
