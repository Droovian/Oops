#include<iostream>
#include <cstring>

using namespace std;

class Error{

    int err_code;
    char *err_desc;
public:
    Error(int e, char *c)
    {
        err_code = e;
        err_desc = new char[strlen(c)];
        strcpy(err_desc, c);
    }

    void display()
    {
        cout << "\nError code: " << err_code << "\n" << "Error description: " << err_desc;
    }

};

int main()
{
    try
    {
        cout << "Press any key to throw a test expression.";
        cin.get();
        throw Error(99, "Test Exception");
    }
    catch(Error e){
        cout << "Exception caught successfully!\n";
        e.display();
    }
    
    return 0;
}