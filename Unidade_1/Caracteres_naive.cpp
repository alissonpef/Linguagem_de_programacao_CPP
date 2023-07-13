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
    vector< pair<char, size_t> > chCount;
    for(size_t i=0; i<filecontent.size(); i++)
    {
        char ch = filecontent.at(i);

        bool hasLocate = false;
        for(size_t j=0; j<chCount.size(); j++)
        {
            if(ch == chCount.at(j).first)
            {
                chCount.at(j).second++;
                hasLocate = true;
                break;
            }
        }
        if(hasLocate == false)
        {
            pair<char, size_t> newp;
            newp.first = ch;
            newp.second = 1;
            chCount.push_back(newp);
        }
    }


    for(size_t j=0; j<chCount.size(); j++)
    {
        cout << "Char Id: " << (int) chCount.at(j).first << " Char Ch: " <<
        (char) chCount.at(j).first <<
        " Counting: " << chCount.at(j).second << endl;
    }


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