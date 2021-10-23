#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.
    int vetor[5];
    int count = 0;
    
    cin >> vetor[0] >> vetor[1] >> vetor[2] >> vetor[3] >> vetor[4];

    for (int i = 0; i < 5; i++){
        if (vetor[i] < 0){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
