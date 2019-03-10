//incluindo bibliotecas
#include<iostream>
#include<stdlib.h>
using namespace std;

class Rectangulo{
private:
    float largo;
    float ancho;
public:
    Rectangulo(float,float);
    void perimetro();
    void area();
};
Rectangulo::Rectangulo(float _largo, float _ancho) {
    largo = _largo;
    ancho = _ancho;
}
void Rectangulo::perimetro() {
    float _perimetro;
    _perimetro = (2* largo) + (2* ancho);
    cout << "El perímetro es " << _perimetro << endl;
}
void Rectangulo::area() {
    float _area;
    _area = largo * ancho;
    cout << "El área es " << _area << endl;
}

int main(){
    Rectangulo R1 = Rectangulo(10,10);
    R1.perimetro();
    R1.area();
    return 0;
}