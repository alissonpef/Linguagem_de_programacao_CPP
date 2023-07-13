#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

//read a file and return its content into a string object
bool ReadFile(string path, string &content);

int main()
{
    string filename("manuscript2.txt");

    string filecontent;
    filecontent = "";

    if(ReadFile(filename, filecontent) == true)
        cout << "File was read" << endl;
    else{
        cout << "File was not read" << endl;
        return 1;
    }

    cout << "Content: " << filecontent << endl;

    //character counting
    vector< pair<char, size_t> > chCount(256);
    for(size_t i=0; i<chCount.size(); i++)
    {
        chCount.at(i).first = i;
        chCount.at(i).second = 0;
    }

    for(size_t i=0; i<filecontent.size(); i++)
    {
        char ch = filecontent.at(i);
        chCount.at(ch).second++;
    }

    for(size_t j=0; j<chCount.size(); j++)
    {
        cout << "Char Id: " << (int) chCount.at(j).first << " Char Ch: " <<
        (char) chCount.at(j).first <<
        " Counting: " << chCount.at(j).second << endl;
    }

    //EXERCICO PARA SEGUNDA-FEIA:
    //eliminar as ocorrencias de caracteres zerados
    //ordenar o vetor de pares em funcao do segundo element em ordem descente
    //std::sort, std::stable_sort

    return 0;
}

bool ReadFile(string path, string &content)
{
    ifstream filereader(path);

    if(!filereader.is_open())
    return false;


    string tmp;
    while(getline(filereader, tmp))
    {
        content += tmp;
    }

    filereader.close();

    return true;
}