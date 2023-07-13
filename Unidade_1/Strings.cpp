#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declara uma string
    string palavra;
    cout << "Digite a string: ";
    cin >> palavra;

    // Printa o tamanho de caracteres
    cout << "\nO palavra tem " << palavra.length() << " caracteres" << '\n';

    // Printa vazio ou nao vazio
    if (palavra.empty())
        cout << "Vazia\n\n";
    else
        cout << "Nao esta vazia\n\n";

    // Atribui uma string usando o método operator=
    palavra = "Boa";
    // Printa "Boa"
    cout << palavra << endl;
    //  Acrescenta outra string usando o método operator
    palavra += " noite";
    // Printa "Boa noite"
   cout << palavra << endl;
    // Printa o primeiro carecterer usando o operador[]
    cout << "Primeira letra: " << palavra[0] << '\n';
    // Printa o ultimo carecterer
    cout << "Ultima letra: " << palavra[palavra.length() - 1] << "\n";
    // Printa "oa-Noi", logo ela printa do caracterer 2 ao carecterer 6, lembrando que começa do 0
    cout << "Palavra diminuida: " << palavra.substr(1, 6) << "\n\n";

    //Declarando duas strings
    string primeira = "ABC", ultima = "XYZ";
    cout << "Primeira: " << primeira << "\nUltima: " << ultima << "\n";
    // Unindo duas strings
    cout << "Juntando as palavras: " << primeira + ultima << '\n';
    cout << "Comparando " << primeira << " com ABC: ";
    if (primeira == "ABC")
        cout << "Igual\n";
    else
        cout << "Nao eh igual\n";

    cout << "Comparando " << primeira << " com XYZ: ";
    if (primeira == "XYZ")
        cout << "igual\n";
    else
        cout << "Nao eh igual\n";

return 0;
}
