#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero, i;

    cout << "Digite um n�mero: \n";
    cin >> numero;

    for (i = 0; i <= 10; i++) {
        cout << numero * i << endl;
    }
}
