#ifndef NONOGRAMA_H
#define NONOGRAMA_H

#include <iostream>

class Nonograma
{
private:
    bool * tablero;
    int width, height;
public:
    Nonograma(int width, int height);
    ~Nonograma();

    void cargarPuzzle(bool * valores);
    void imprimirPuzzle();
};

#endif // NONOGRAMA_H
