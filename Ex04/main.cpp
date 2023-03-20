#include <iostream>

using namespace std;

bool func(int tam, int vet[], int *par, int *impar, int* negativos)
{
    for(int i = 0; i < tam; i++)
    {
        if(vet[i] % 2 == 0)
            *par = *par + 1;

        if(vet[i] % 2 != 0)
            *impar = *impar + 1;

        if(vet[i] < 0)
            *negativos = *negativos + 1;
    }
    return true;
}

int main()
{
    // Implemente uma unica funcao que receba um vetor de numeros inteiros (vet) e o seu tamanho (tam) e:
    // conte o total de elementos pares;
    // conte o total de elementos  ́ımpares;
    // conte o total de elementos negativos;
    // retorne verdadeiro se existirem numeros negativos no vetor, ou retorne falso, caso contrario

    int tam = 5 ;
    int vet[tam];
    vet[0] = 20;
    vet[1] = 9;
    vet[2] = 1;
    vet[3] = -4;
    vet[4] = 22;
    int negativos = 0;
    int par = 0;
    int impar = 0;

    func(tam, vet, &par, &impar, &negativos);

    cout << "O Numero de Valores Par e : " << par << endl;
    cout << "O Numero de Valores Impares e : " << impar << endl;
    cout << "O Numero de Valores Negativos e :" << negativos << endl;

    return 0;
}
