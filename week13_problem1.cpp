#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("banana.txt");
    string word;
    vector<string> text;
    map<string, string> myMap;

    while (fin >> word)
    {
        if(word.at(word.length()-1) == '.' || word.at(word.length()-1) == ','){
            word = word.substr(0, word.length()-1);
        }
        
        text.push_back(word);
        myMap.insert(pair<string, string>(word, word));
    }

    fin.close();

    for (int i=0; i<text.size(); i++)
    {
        cout << myMap.at(text.at(i)) << endl;
    }
    
}
