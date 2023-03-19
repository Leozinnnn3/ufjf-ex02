#include <iostream>

using namespace std;

void divisao(int num, int div, int *q, int *r)
{
    int divisao = num / div;
    int resto = (divisao * 2) - num;
    *q = divisao;
    *r = resto;
}

int main()
{
    // Dados dois numeros inteiros num e div, faca uma funcao
    // para calcular e retornar o quociente e o resto da divisao
    // inteira de num por div. Considerar o seguinte prototipo:
    // void divisao(int num, int div, int *q, int *r);

    int num = 50;
    int div = 2;
    int q;
    int r;

    divisao(num, div, &q, &r);
    cout << "O Dividendo e: " << num << endl;
    cout << "O Divisor e :" << div << endl;
    cout << "O Quociente e: " << q << endl;
    cout << "O Resto e : " << r << endl;
    return 0;
}
