#include <iostream>

using namespace std;

float prodEscalar(int n, float x[], float y[])
{
    float result = 0;
    for(int i = 0; i < n; i++)
    {
        cout << "Digite O Valor do Vetor 1: " ;
        cin >> x[i];
        cout << "Digite O valor do Vetor 2: " ;
        cin >> y[i];

        result = result + (x[i] * y[i]);
    }

    return result;

}

int main()
{
    int n;
    cout << "Digite O Tam dos Vetores: ";
    cin >> n;

    float *vet1 = new float[n];
    float *vet2 = new float[n];
    float result;

    result = prodEscalar(n, vet1, vet2);

    cout << "O Resultado e :" << result << endl;

    delete [] vet1;
    delete [] vet2;


    return 0;
}
