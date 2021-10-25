#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
    if (n == 0) {
        return {-1, -1};
    }
    // TODO: Adicione aqui sua solução.
    int menor = V[0], menorPos = 0 , maior = V[n - 1], maiorPos = n -1;
    for (int i = 0, j = n-1 ; i < n; ++i,--j) {
        if(V[i] < menor){
            menor = V[i];
            menorPos = i;
        }
        if(V[j] > maior){
            maior  = V[j];
            maiorPos = j;
        }
    }
    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return { menorPos, maiorPos };
}
