#include <iostream>
#include "nonograma.h"

using namespace std;

int main()
{
    Nonograma n(5, 5);

    bool valores[] = {
        1, 1, 1, 1, 1,
        1, 1, 1, 1, 1,
        1, 1, 1, 1, 1,
        1, 1, 1, 1, 1,
        1, 1, 1, 1, 1,
    };

    n.cargarPuzzle(valores);

    n.imprimirPuzzle();

    return 0;
}
