#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    float num1, num2, resultado;
    char caractere;

    cout << "Digite o primeiro número: \n";
    cin >> num1;

    cout << "Digite o segundo número: \n";
    cin >> num2;

    cout << "Escolha a operação que deseja realizar: \n";
    cout << "Adição: + \n";
    cout << "Subtração: - \n";
    cout << "Multiplicação: * \n";
    cout << "Divisão: / \n";
    cin >> caractere;

    switch(caractere) {
        case '+':
            resultado = num1 + num2;
            cout << "Você escolheu adição. Esse é o resultado da adição dos dois números: " << resultado;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "Você escolheu subtração. Esse é o resultado da subtração dos dois números: " << resultado;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "Você escolheu multiplicação. Esse é o resultado da multiplicação dos dois números: " << resultado;
            break;
        case '/':
            resultado = num1 / num2;
            cout << "Você escolheu divisão. Esse é o resultado da divisão dos dois números: " << resultado;
            break;
    }
}
