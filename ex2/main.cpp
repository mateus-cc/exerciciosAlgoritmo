#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num1;

    cout << "Digite um n�mero para saber se � positivo ou negativo: ";
    cin >> num1;

    if (num1 < 0) {
        cout << "O n�mero � negativo";
    } else {
        cout << "O n�mero � positivo";
    }
}
