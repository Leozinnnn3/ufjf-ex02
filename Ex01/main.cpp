#include <iostream>

using namespace std;

int main()
{
    // Declare um ponteiro para inteiro pt e imprima seu endere�o
    int *pt;
    cout << "O Endereco de pt e: " << &pt << endl;

    // Declare uma vari�vel inteira x, e leia um valor para x
    int x;
    cout << "Digite o Valor de X: ";
    cin >> x;

    // Fa�a com que o ponteiro pt aponte para x e imprima o conte�do da variavel pt e endere�o de x
    pt = &x;
    cout << "O Conteudo de pt e: " << *pt << endl;
    cout << "O Endereco de X e: " << pt << endl;

    // Usando o ponteiro pt multiplique x por 10 e altere seu valor
    *pt = *pt * 10;
    cout << "O Conteudo de x e: " << x << endl;

    //Some 10 a vari�vel pt
    *pt = *pt + 10;
    cout << "O Conteudo de x e: " << x << endl;


    return 0;
}
