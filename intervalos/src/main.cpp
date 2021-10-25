/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    // TODO: Adicione aqui a sua solução.
    int x;
    int frequency[5] = {0, 0, 0, 0, 0};
    while( cin >> std::ws >> x) {
        if(x >= 0 && x < 25){
            frequency[0]++;
        } else if(x >= 25 && x < 50){
            frequency[1]++;
        } else if(x >= 50 && x < 75){
            frequency[2]++;
        } else if(x >= 75 && x < 100) {
            frequency[3]++;
        }else {
            frequency[4]++;
        }
    }
    float total = frequency[0] + frequency[1] + frequency[2] + frequency[3] +frequency[4];
    for (int i = 0; i < 5; i++) {
        cout << std::setprecision(4) <<  frequency[i]/total * 100 << endl;
    }
    return 0;
}
