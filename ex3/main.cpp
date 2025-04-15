#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    string nome, palpite;
    int numeroDeAcertos = 0;
    int numeroDeErros = 0;
    float porcentagem;

    cout << "1. Qual � a forma correta de declarar uma vari�vel inteira em C++? \n";
    cout << "a) int numero \n";
    cout << "b) integer numero \n";
    cout << "c) numer: int \n";
    cout << "d) int = numero \n";
    cin >> palpite;

    if (palpite == "a") {
        cout << "Parab�ns, voc� acertou \n";
        numeroDeAcertos++;
    } else {
        cout << "Voc� errou. Resposta certa: b \n";
        numeroDeErros++;
    }

    cout << "2. Qual das op��es abaixo � usada para imprimir algo na tela em C++? \n";
    cout << "a) print('Ol� Mundo'); \n";
    cout << "b) System.out.println('Ol� Mundo'); \n";
    cout << "c) cout << 'Ol� Mundo'; \n";
    cout << "d) echo 'Ol� Mundo'; \n";
    cin >> palpite;

    if (palpite == "c") {
        cout << "Parab�ns, voc� acertou \n";
        numeroDeAcertos++;
    } else {
        cout << "Voc� errou. Resposta certa: c \n";
        numeroDeErros++;
    }

    cout << "3. Qual dos seguintes tipos de dados � utilizado para armazenar n�meros inteiros em C++? \n";
    cout << "a) float \n";
    cout << "b) char \n";
    cout << "c) int \n";
    cout << "d) string \n";
    cin >> palpite;

    if (palpite == "c") {
        cout << "Parab�ns, voc� acertou \n";
        numeroDeAcertos++;
    } else {
        cout << "Voc� errou. Resposta certa: c \n";
        numeroDeErros++;
    }

    porcentagem = (numeroDeAcertos / 3.0) * 100;

    cout << "Fim de jogo! Voc� acertou " << numeroDeAcertos << " perguntas e errou " << numeroDeErros << endl;
    cout << "Voc� acertou " << porcentagem << "% do jogo.";


}
