#include <iostream>

using namespace std;

int main()
{
    // Declare um ponteiro para inteiro pt e imprima seu endereço
    int *pt;
    cout << "O Endereco de pt e: " << &pt << endl;

    // Declare uma variável inteira x, e leia um valor para x
    int x;
    cout << "Digite o Valor de X: ";
    cin >> x;

    // Faça com que o ponteiro pt aponte para x e imprima o conteúdo da variavel pt e endereço de x
    pt = &x;
    cout << "O Conteudo de pt e: " << *pt << endl;
    cout << "O Endereco de X e: " << pt << endl;

    // Usando o ponteiro pt multiplique x por 10 e altere seu valor
    *pt = *pt * 10;
    cout << "O Conteudo de x e: " << x << endl;

    //Some 10 a variável pt
    pt = pt + 10;
    cout << "O Conteudo de x e: " << x << endl;


    return 0;
}
