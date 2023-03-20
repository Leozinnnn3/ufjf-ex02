#include <iostream>

using namespace std;

void calculamedia(int tam, int vet[])
{
    for(int i = 0; i < tam; i++)
    {
        cout << "Digite Valores Para O Vetor: " << endl;
        cin >> vet[i];
    }

}

int main()
{

    int n;
    cout << "Digite o Tamanho do Vetor: ";
    cin >> n;

    int *vet = new int[n];
    int soma = 0;

    for(int i = 0; i < n; i++)
    {
        cout << "Digite Valres Para o Vetor: ";
        cin >> vet[i];
        soma = soma + vet[i];
    }

    cout << "Valor 0 : " << vet[0] << endl;
    cout << "Valor 1 : " << vet[1] << endl;
    cout << "Valor 2 : " << vet[2] << endl;
    cout << "Valor 3 : " << vet[3] << endl;
    cout << "Valor 4 : " << vet[4] << endl;

    cout << "Soma : " << soma << endl;
    cout << "A media e :" << soma / n << endl;

    delete [] vet;
    return 0;
}
