#include<iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");
    out << "My name is Dhruv\n";
    out << "Im learning about files";
    out.close();

    ifstream in;
    string s;
    in.open("sample.txt");
    
    while(in.eof() == 0){ // marking of end of file
        getline(in, s);
        cout << s << endl;
    }
    in.close();
    return 0;
}