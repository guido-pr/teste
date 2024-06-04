#include "Cubo.hpp"
using std::cout;
using std::endl;

Cubo::Cubo(float aresta)
{
    this->aresta = aresta;
}

float Cubo::getArea(){
    return 6*aresta*aresta;
}

float Cubo::getVolume(){
    return aresta*aresta*aresta;
}

Cubo::~Cubo()
{
    cout<<"Destruindo cubo"<<endl;
}

