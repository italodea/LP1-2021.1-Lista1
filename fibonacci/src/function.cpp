#include "function.h"
#include <iostream>

std::vector<unsigned int> fib_below_n(unsigned int n)
{
    // TODO: adicione o seu código aqui.


    vector<unsigned int> vetor;
    int n0 = 0;
    int n1 = 1;
    int n2 = 1;

    while (n2 < n)
    {
        vetor.push_back(n2);
        n2 = n0+n1;
        n0 = n1;
        n1 = n2;
    }

    // std::cout << std::endl;

    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return vetor;
}
