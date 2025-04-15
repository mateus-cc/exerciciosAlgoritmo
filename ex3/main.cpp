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

    cout << "1. Qual é a forma correta de declarar uma variável inteira em C++? \n";
    cout << "a) int numero \n";
    cout << "b) integer numero \n";
    cout << "c) numer: int \n";
    cout << "d) int = numero \n";
    cin >> palpite;

    if (palpite == "a") {
        cout << "Parabéns, você acertou \n";
        numeroDeAcertos++;
    } else {
        cout << "Você errou. Resposta certa: b \n";
        numeroDeErros++;
    }

    cout << "2. Qual das opções abaixo é usada para imprimir algo na tela em C++? \n";
    cout << "a) print('Olá Mundo'); \n";
    cout << "b) System.out.println('Olá Mundo'); \n";
    cout << "c) cout << 'Olá Mundo'; \n";
    cout << "d) echo 'Olá Mundo'; \n";
    cin >> palpite;

    if (palpite == "c") {
        cout << "Parabéns, você acertou \n";
        numeroDeAcertos++;
    } else {
        cout << "Você errou. Resposta certa: c \n";
        numeroDeErros++;
    }

    cout << "3. Qual dos seguintes tipos de dados é utilizado para armazenar números inteiros em C++? \n";
    cout << "a) float \n";
    cout << "b) char \n";
    cout << "c) int \n";
    cout << "d) string \n";
    cin >> palpite;

    if (palpite == "c") {
        cout << "Parabéns, você acertou \n";
        numeroDeAcertos++;
    } else {
        cout << "Você errou. Resposta certa: c \n";
        numeroDeErros++;
    }

    porcentagem = (numeroDeAcertos / 3.0) * 100;

    cout << "Fim de jogo! Você acertou " << numeroDeAcertos << " perguntas e errou " << numeroDeErros << endl;
    cout << "Você acertou " << porcentagem << "% do jogo.";


}
