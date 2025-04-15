#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, maior;
    int numeros[10];

    for (i = 0; i <= 9; i++) {
        cout << "Digite um número: ";
        cin >> numeros[i];

        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    cout << maior;
}
