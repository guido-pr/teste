#ifndef CUBO
#define CUBO

#include "Figura3D.hpp"

class Cubo : public Figura3D{
    public:
        float aresta;
    public:
        Cubo(float aresta);
        float getArea() override;
        float getVolume() override;
        ~Cubo();
}

#endif
