#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num1, num2, num3;

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;

    cout << "Digite o segundo n�mero: ";
    cin >> num2;

    cout << "Digite o terceiro n�mero: ";
    cin >> num3;

    if (num1 == num2 && num1 == num3) {
        cout << "Todos os n�meros s�o iguais \n";
    } else if (num1 == num2) {
        cout << "Os n�meros 1 e 2 s�o iguais \n";
    } else if (num1 == num3) {
        cout << "Os n�meros 1 e 3 s�o iguais \n";
    } else if (num2 == num3) {
        cout << "Os n�meros 2 e 3 s�o iguais \n";
    } else {
        cout << "Nenhum n�mero � igual";
    }

    cout << "num1: " << num1 << ", num2: " << num2 << ", num3: " << num3 << endl;

}
