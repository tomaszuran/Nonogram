#include "nonograma.h"

#define TABLERO(x, y) tablero[height * y + x]

using namespace std;

Nonograma::Nonograma(int w, int h)
{
    this->width = w;
    this->height = h;

    tablero = new bool[w * h];
}

Nonograma::~Nonograma()
{
    delete [] tablero;
}

void Nonograma::cargarPuzzle(bool * valores)
{
    for(int i = 0; i < this->width * this->height; i++)
    {
        tablero[i] = valores[i];
    }
}

void Nonograma::imprimirPuzzle()
{
    for(int y = 0; y < this->height; y++)
    {
        for(int x = 0; x < this->width; x++)
        {
            cout << TABLERO(x, y) << " ";
        }
        cout << endl;
    }
}
