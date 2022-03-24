#ifndef EJERCICIOHERENCIA_CIRCULO_H
#define EJERCICIOHERENCIA_CIRCULO_H

#include "Figura.h"

class Circulo : public Figura {
    protected:
        float radio;

    public:
        Circulo();
        Circulo(float area, float perimetro, float radio);

        float getArea() override;
        float getPerimetro() override;
        float calcularArea() override;
        float calcularPerimetro() override;
        void mostrarArea() override;
        void mostrarPerimetro() override;
        void representacion() override;

};


#endif //EJERCICIOHERENCIA_CIRCULO_H
