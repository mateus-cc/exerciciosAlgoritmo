#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    float num1, num2, resultado;
    char caractere;

    cout << "Digite o primeiro n�mero: \n";
    cin >> num1;

    cout << "Digite o segundo n�mero: \n";
    cin >> num2;

    cout << "Escolha a opera��o que deseja realizar: \n";
    cout << "Adi��o: + \n";
    cout << "Subtra��o: - \n";
    cout << "Multiplica��o: * \n";
    cout << "Divis�o: / \n";
    cin >> caractere;

    switch(caractere) {
        case '+':
            resultado = num1 + num2;
            cout << "Voc� escolheu adi��o. Esse � o resultado da adi��o dos dois n�meros: " << resultado;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "Voc� escolheu subtra��o. Esse � o resultado da subtra��o dos dois n�meros: " << resultado;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "Voc� escolheu multiplica��o. Esse � o resultado da multiplica��o dos dois n�meros: " << resultado;
            break;
        case '/':
            resultado = num1 / num2;
            cout << "Voc� escolheu divis�o. Esse � o resultado da divis�o dos dois n�meros: " << resultado;
            break;
    }
}
