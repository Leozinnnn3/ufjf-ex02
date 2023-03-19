#include <iostream>

using namespace std;

void troca(int *a, int *b)
{
    int aux = *b;
    *b = *a;
    *a = aux;
}

int main()
{
    // Implemente a funcao troca que troca o conteudo de duas variaveis inteiras a e b.
    // Faca um programa que teste a funcao implementada.

    int a = 5;
    int b = 10;
    troca(&a, &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
