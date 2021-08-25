#ifndef NONOGRAMA_H
#define NONOGRAMA_H

#include <iostream>

class Nonograma
{
private:
    bool solved;
    bool * tablero;
    int width, height;
public:
    Nonograma(int width, int height);
    ~Nonograma();

    void cargarPuzzle(bool * valores);
    void imprimirPuzzle();

    void outputClues();
};

#endif // NONOGRAMA_H
