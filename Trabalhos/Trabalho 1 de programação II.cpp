// Trabalho 1 de Alisson e Deivid
#include <iostream>
#include <string>
#include <vector>

using namespace std; //Funcao para poder retirar o prefixo "std::"

int main()
{
    vector<string> strings;  //criando um vetor de string 
    string palavra, busca, busca_sub; 
    int escolha, index, cont = 0, cont_sub = 0, stop = 1;

    while (stop != 0) // Enquanto a escolha for diferente de zero o programa continua
    {
        cout << "-------------------------------------------------------" << endl;
        cout << "UFSC String Store V.0" << endl;
        cout << "1) Inserir uma string sem espaco" << endl;
        cout << "2) Mostrar o indice e a string" << endl;
        cout << "3) Buscar uma ou mais string na lista" << endl;
        cout << "4) Buscar todas as substring" << endl;
        cout << "5) Remove string (por indice)" << endl;
        cout << "0) Sair" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Escolha: ";
        cin >> escolha; // Dado de entrada do usuario para seleção no menu

        switch (escolha)
        {
            case 0:    // Caso o usuario escolha a opção "ZERO", encerrara o programa
            {
                cout << "O programa foi encerrado com sucesso." << endl;
                stop = 0;
            break;
            }

            case 1:                             // Opção 1 do menu
            {
                cout << "Digite a string: ";        
                cin >> palavra;                // Entrada de dados da string, que o usuario desejar adcionar no vetor
                strings.push_back(palavra);    // A função "push_back" salvar uma string no vetor
            break;
            }

            case 2:                         //Opção 2 do menu
            {
                if (palavra.empty())        // Caso nao tenha nenhuma string no vetor, retorna para o menu
                {
                    cout << "Indisponivel no momento, primeiro digite uma string" << endl; 
                }
                else                       
                {
                    cout << "Indice   String" << endl;  // Mostra o indice da string e a string
                                
                    for (int i = 0; i < strings.size(); i++)
                    {
                        cout << i << "   -    " << strings[i] << endl;
                    }
                }
            break;
            }

            case 3:
            {
                if (palavra.empty())  // Caso nao tenha nenhuma string no vetor, retorna para o menu
                {
                    cout << "Indisponivel no momento, primeiro digite uma string" << endl;
                }
                else 
                {
                    cout << "Digite a string que deseja buscar: ";
                    cin >> busca;
                    cout << "A busca resultou em: " << endl;

                    for (int i = 0; i < strings.size(); i++) // Entra em uma estrutura de repeticao do tamanho do nosso vetor de strings
                    {
                        if (strings[i] == busca) // Se a string no indice "i" for igual a nossa palavra de busca, printamos no terminal
                        {
                            cout << i << " - " << strings[i] << endl;
                            cont++;
                        }
                    }

                    if (cont == 0) // Caso cont = 0, printa que a string não foi encontrada
                    {
                        cout << "String nao encontrada" << endl;
                    }
                }
            break;
            }

            case 4:
            {
                if (palavra.empty()) // Caso nao tenha nenhuma string no vetor, retorna para o menu
                {
                    cout << "Indisponivel no momento, primeiro digite uma string" << endl; 
                }
                else
                {
                    cout << "Digite a substring que deseja buscar: "; // O usuario busca por Letras dentro das palavras em nosso vetor
                    cin >> busca_sub;                                
                    cout << "A busca resultou em: " << endl;

                    for (size_t i = 0; i < strings.size(); ++i)
                    {
                        if (strings[i].find(busca_sub) != string::npos) // Utiliza a função "find" para localizar a string dentro do vetor
                        {
                            cout << "Indice: " << i << " - String: " << strings[i] << endl;
                        }
                        else
                        {
                            cont_sub++;
                        }
                    }

                    if (cont_sub > strings.size()) // Caso o cont_sub seja maior que o vetor de string, printa que a Substring não foi encontrada
                    {
                        cout << "Substring nao encontrada" << endl;
                    }
                }
            break;
            }

            case 5:
            {
                if (palavra.empty()) // Caso nao tenha nenhuma string no vetor, retorna para o menu
                {
                    cout << "Indisponivel no momento, primeiro digite uma string" << endl;
                }

                else
                {
                cout << "Indice   String" << endl;
                    for (int i = 0; i < strings.size(); i++) //Mostra os indices e strings do nosso vetor
                    {
                        cout << i << "   -    " << strings[i] << endl;
                    }
    
                cout << "Digite qual string (por indice) deseja remover: ";
                cin >> index;
                    if (index < 0 || index >= strings.size()) // Caso o usuario tente exluir um indice vazio
                    {
                        cout << "O indice nao contem nada" << endl;
                    }
                    else
                    {
                        strings.erase(strings.begin() + index);   //funcao "erase" usada para excluir um elemento do vetor
                        cout << "A string foi removida com sucesso" << endl;
                    }
                }   
            break;
            }

            default: // Usado para caso o usuario não digite os numeros do menu
            {
                cout << "ERRO!" << endl;
                cout << "Digite um dos valores possiveis (0, 1, 2, 3, 4 ou 5)" << endl;
            break;
            }
        }
    }

return 0;
}