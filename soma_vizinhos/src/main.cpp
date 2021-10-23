/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main(void)
{
    // TODO: Adicione seu código aqui.
    int m, n, count;

    m,n,count = 0;
    while( cin >> std::ws >> m >> n) {
        count = m;

        if (n >= 0){
            for (int i = 1; i < n; i++){
                count += m + i;
            }
        }else{
            for (int i = 1; i < (n*-1); i++){
                count += (m - i);
            }
        }
        cout << count << endl;
    }

    return 0;
}
