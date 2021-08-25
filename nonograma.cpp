#include "nonograma.h"

#define TABLERO(x, y) (tablero[height * y + x])

#define BLOQUE(x, y) (TABLERO(x, y) == 1 ? (char)219 : ' ')

using namespace std;

Nonograma::Nonograma(int w, int h)
{
    this->width = w;
    this->height = h;

    this->solved = false;

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

    this->solved = true;
}

void Nonograma::imprimirPuzzle()
{
    for(int y = 0; y < this->height; y++)
    {
        for(int x = 0; x < this->width; x++)
        {
            cout << BLOQUE(x, y);
        }
        cout << endl;
    }
}

void Nonograma::outputClues()
{
    bool contando = 0;
    int cuenta = 0;

    // iteracion vertical

    for(int x = 0; x < this->width; x++)
    {
        for(int y = 0; y < this->height; y++)
        {
            if(TABLERO(x, y) == 1)
            {
                if(contando)
                {
                    cuenta++;
                }
                if(!contando)
                {
                    cuenta = 1;
                    contando = 1;
                }
            }
            else
            {
                if(contando)
                {
                    contando = 0;
                    cout << cuenta << " ";
                }
            }
        }

        if(contando)
        {
            contando = 0;
            cout << cuenta << " ";
        }

        cout << endl;
    }

    cout << endl;

    // iteracion horizontal

    for(int y = 0; y < this->height; y++)
    {
        for(int x = 0; x < this->width; x++)
        {
            if(TABLERO(x, y) == 1)
            {
                if(contando)
                {
                    cuenta++;
                }
                if(!contando)
                {
                    cuenta = 1;
                    contando = 1;
                }
            }
            else
            {
                if(contando)
                {
                    contando = 0;
                    cout << cuenta << " ";
                }
            }
        }

        if(contando)
        {
            contando = 0;
            cout << cuenta << " ";
        }

        cout << endl;
    }
}
