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
        cout << "O que voc� deseja fazer? \n";
        cout << "1. Cadastrar funcionario \n";
        cout << "2. Calcular sal�rio \n";
        cout << "3. Mostrar dados \n";
        cout << "0. Sair \n";
        cin >> opcao;

        if (opcao == '1') {
            cout << "Digite a matr�cula do funcionario: \n";
            cin >> matriculaFuncionario;
            cout << "Digite a idade do funcionario: \n";
            cin >> idade;
        } else if (opcao == '2') {
            cout << "Digite sal�rio bruto do funcionario: \n";
            cin >> salarioBruto;
            cout << "Digite o desconto: \n";
            cin >> desconto;
            salarioLiquido = salarioBruto - desconto;
        } else {
            cout << "A matricula do funcion�rio �: " << matriculaFuncionario << endl;
            cout << "A idade do funcion�rio �: " << idade << " anos \n";
            cout << "O salario do funcion�rio �: " << salarioLiquido << endl;
        }
    } while (opcao != '0');


}
