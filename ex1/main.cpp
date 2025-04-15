#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num1, num2, num3;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "Digite o terceiro número: ";
    cin >> num3;

    if (num1 == num2 && num1 == num3) {
        cout << "Todos os números são iguais \n";
    } else if (num1 == num2) {
        cout << "Os números 1 e 2 são iguais \n";
    } else if (num1 == num3) {
        cout << "Os números 1 e 3 são iguais \n";
    } else if (num2 == num3) {
        cout << "Os números 2 e 3 são iguais \n";
    } else {
        cout << "Nenhum número é igual";
    }

    cout << "num1: " << num1 << ", num2: " << num2 << ", num3: " << num3 << endl;

}
