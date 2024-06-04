#include "Quadrado.hpp"

Quadrado::Quadrado(double lado)
{
    this->lado = lado;
}

float Quadrado::getArea()
{
    return lado*lado;
}

Quadrado::~Quadrado()
{
    cout << "Destruindo quadrado" << endl;
}
