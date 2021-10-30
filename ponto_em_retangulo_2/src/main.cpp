/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    // TODO: Adicione aqui seu código.

    int x1,x2,x3;
    int y1,y2,y3;

    while(cin >> std::ws >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
        Ponto ie {x1,y1};
        Ponto sd {x2,y2};
        Ponto p {x3,y3};

        if(pt_in_rect(ie,sd,p) == INSIDE){
            cout << "inside\n";
        }else if(pt_in_rect(ie,sd,p) == BORDER){
            cout << "border\n";
        }else{
            cout << "outside\n";
        }
    }
    return 0;
}
