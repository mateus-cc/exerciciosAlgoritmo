#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int nascimentoUsuario, idadeUsuario, anoAtual, anosParaEsperar;

    anoAtual = 2025;

    cout << "Digite o ano em que voc� nasceu: \n";
    cin >> nascimentoUsuario;

    idadeUsuario = anoAtual - nascimentoUsuario;

    cout << "Voc� tem " << idadeUsuario << " anos \n";

    if (idadeUsuario < 16) {
        anosParaEsperar = 16 - idadeUsuario;
        cout << "Voc� ainda n�o pode votar, deve esperar " << anosParaEsperar << " anos \n";
    } else {
        cout << "Voc� j� pode votar!";
    }
}
