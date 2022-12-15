#include <iostream>
#include <fstream>
using namespace std;

/* useful classes for working with files in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order to wrok with files in c++, you will have to open it. Primarily, this can be done with:
// 1. Using the constructor
// 2. Using the member function open() of the class
int main(){
    string s = "Hello this is a test";
    string st2;
    // Opening files using constructor
   // ofstream out("sample.txt"); // Write operation
   // out << s;

   ifstream in("sample.txt");
   getline(in, st2);
   cout << st2;
return 0;
}
