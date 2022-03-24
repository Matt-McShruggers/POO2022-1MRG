#ifndef EJERCICIOHERENCIA_RECTANGULO_H
#define EJERCICIOHERENCIA_RECTANGULO_H

#include "Cuadrilatero.h"

class Rectangulo : public Cuadrilatero {

    private:
    public:
        Rectangulo();
        Rectangulo(float area, float perimetro, float alto, float ancho);

        float getArea() override;
        float getPerimetro() override;
        float calcularArea() override;
        float calcularPerimetro() override;
        void mostrarArea() override;
        void mostrarPerimetro() override;
        void representacion() override;

};


#endif //EJERCICIOHERENCIA_RECTANGULO_H
