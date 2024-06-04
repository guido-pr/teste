#ifndef QUADRADO
#define QUADRADO

#include "Figura2D.hpp"

class Quadrado : public Figura2D{
    public:
        float lado;
    public:
        Quadrado(float lado);
        float getArea() override;
        ~Quadrado();
}

#endif
