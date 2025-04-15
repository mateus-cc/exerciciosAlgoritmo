#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    char opcao, matriculaFuncionario;
    int idade;
    float salarioLiquido, salarioBruto, percentualDesconto, desconto;

    do {
        cout << "O que você deseja fazer? \n";
        cout << "1. Cadastrar funcionario \n";
        cout << "2. Calcular salário \n";
        cout << "3. Mostrar dados \n";
        cout << "0. Sair \n";
        cin >> opcao;

        if (opcao == '1') {
            cout << "Digite a matrícula do funcionario: \n";
            cin >> matriculaFuncionario;
            cout << "Digite a idade do funcionario: \n";
            cin >> idade;
        } else if (opcao == '2') {
            cout << "Digite salário bruto do funcionario: \n";
            cin >> salarioBruto;
            cout << "Digite o desconto: \n";
            cin >> desconto;
            salarioLiquido = salarioBruto - desconto;
        } else {
            cout << "A matricula do funcionário é: " << matriculaFuncionario << endl;
            cout << "A idade do funcionário é: " << idade << " anos \n";
            cout << "O salario do funcionário é: " << salarioLiquido << endl;
        }
    } while (opcao != '0');


}
