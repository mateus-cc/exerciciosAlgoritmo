#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numAlunos, i, media, soma;

    cout << "Quantos alunos possui na sua sala? \n";
    cin >> numAlunos;

    for (i = 1; i <= numAlunos; i++) {
        cout << "Entre com as médias dos alunos \n";
        cin >> media;
        soma = soma + media;
    }

        cout << soma / numAlunos;

}
