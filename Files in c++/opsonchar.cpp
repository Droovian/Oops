#include<iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    char s[20];

    cin >> s;

    int len = strlen(s);

    fstream file;

    file.open("NewFile.txt", ios::in | ios::out | ios::trunc);

    for(int i=0; i<len; i++){
        file.put(s[i]);
        
    }

    file.seekg(0);

    char ch;

    cout << "File contents being read:\n";

    while(file.eof() == 0){
        file.get(ch);
        cout << ch;

    }
    
    return 0;
}
