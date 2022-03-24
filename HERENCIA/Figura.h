#ifndef EJERCICIOHERENCIA_FIGURA_H
#define EJERCICIOHERENCIA_FIGURA_H

#include <iostream>

class Figura {

    protected:
        float area;
        float perimetro;

    public:
        Figura();
        Figura(float area, float perimetro);

        virtual float getArea();
        virtual float getPerimetro();
        virtual float calcularArea();
        virtual float calcularPerimetro();
        virtual void mostrarArea();
        virtual void mostrarPerimetro();
        virtual void representacion();

};


#endif //EJERCICIOHERENCIA_FIGURA_H
