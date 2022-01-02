#include <iostream>
#include "nonograma.h"

using std::cout;
using std::endl;

int main()
{
    Nonograma n(5, 5);

    bool valores[] = {
        1, 1, 1, 0, 1,
        1, 0, 0, 0, 1,
        0, 1, 0, 1, 1,
        1, 0, 0, 1, 0,
        1, 1, 0, 1, 0,
    };

    n.cargarPuzzle(valores);

    n.imprimirPuzzle();

    cout << endl;

    n.outputClues();

    return 0;
}
