#ifndef EJERCICIOHERENCIA_CUADRADO_H
#define EJERCICIOHERENCIA_CUADRADO_H

#include "Cuadrilatero.h"

class Cuadrado : public Cuadrilatero {

    private:
    public:
        Cuadrado();
        Cuadrado(float area, float perimetro, float lado);

        float getArea() override;
        float getPerimetro() override;
        float calcularArea() override;
        float calcularPerimetro() override;
        void mostrarArea() override;
        void mostrarPerimetro() override;
        void representacion() override;




};


#endif //EJERCICIOHERENCIA_CUADRADO_H
