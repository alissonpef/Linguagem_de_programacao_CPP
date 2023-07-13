#include <iostream>
#include <cstdlib> // Biblioteca do C (Para usar o rand)
#include <ctime>   // Biblioteca do C (Para usar o srand(time(NULL))

using namespace std;

int main()
{
    srand(time(NULL));                       // Semente para gerar numeros aleatorios da funcao rand()
    const int NUMERO_SECRETO = rand() % 100; // Const declara com letra maiscula, % 100 para pegar o resto da divisao por 100
    int chute, numero_de_tentativas, tentativas = 0;
    double pontos = 1000, pontos_perdidos = 0;
    bool acertou, maior, nao_acertou = 1; // Vareavel Booleana (So aceita valores de verdadeiro ou falso)
    char dificuldade;

    cout << "************************************" << endl;
    cout << "* Bem-Vindo ao jogo de adivinhacao *" << endl;
    cout << "************************************" << endl;

    cout << "Escolha o seu nivel de dificuldade: " << endl;
    cout << "Facil (F), Medio (M) ou Dificil (D)" << endl;
    cin >> dificuldade;
    if (dificuldade == 'F')
    {
        numero_de_tentativas = 15;
    }
    if (dificuldade == 'M')
    {
        numero_de_tentativas = 10;
    }
    if (dificuldade == 'D')
    {
        numero_de_tentativas = 5;
    }

    for (tentativas = 0; tentativas < numero_de_tentativas; tentativas++)
    {
        cout << "tentativa: " << tentativas << endl;
        cout << "Digite o valor do seu chute: ";
        cin >> chute;
        cout << "O valor do seu chute e: " << chute << endl;
        acertou = chute == NUMERO_SECRETO;                   // Booleana
        maior = chute > NUMERO_SECRETO;                      // Booleana
        pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0; // Para retornar um valor em modulo (2.0 para o 2 virar double)
        pontos -= pontos_perdidos;

        if (acertou)
        {
            cout << "Parabens, voce acertou o numero secreto!" << endl;
            nao_acertou = 0; // 0= true, 1= false
            break;           // Quebra o laco de repeticao
        }
        else if (maior)
        {
            cout << "Seu chute foi maior que o numero secreto!" << endl;
        }
        else
        {
            cout << "Seu chute foi menor que o numero secreto!" << endl;
        }
    }

    cout << endl << "Fim de jogo!" << endl;
    if (nao_acertou)
    {
        cout << "Voce perdeu! tente novamente!" << endl;
        cout << "O numero secreto era: " << NUMERO_SECRETO << endl;
        cout.precision(2); // Para imprimir os pontos com 2 casas
        cout << fixed;     // Para fixar a virgula e nao sair em notacao cientifica
        cout << "Sua pontuacao foi de: " << pontos << endl;

    }
    else
    {
        cout << "Voce acertou o numero secreto em: " << tentativas << " tentavias." << endl;
        cout.precision(2); // Para imprimir os pontos com 2 casas
        cout << fixed;     // Para fixar a virgula e nao sair em notacao cientifica
        cout << "Sua pontuacao foi de: " << pontos << endl;
    }

    return 0;
}