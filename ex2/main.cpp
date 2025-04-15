#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num1;

    cout << "Digite um número para saber se é positivo ou negativo: ";
    cin >> num1;

    if (num1 < 0) {
        cout << "O número é negativo";
    } else {
        cout << "O número é positivo";
    }
}
