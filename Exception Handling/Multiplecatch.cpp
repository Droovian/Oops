#include<iostream>

using namespace std;

void test(int x) 
{

    try
    {
        if(x == 1) throw x;
        else
        if(x == 0) throw 'x';
        else
        if(x == -1) throw 1.0;
        cout << "End of try block!\n";
    }
    catch(char c)
    {
        cout << "Caught a character\n";
    }
    catch(int m)
    {
        cout << "Caught an integer\n";
    }
    catch(double d)
    {
        cout << "Caught a double\n";
    }

    cout << "End of try-catch system!\n";
}
int main()
{
    cout << "Testing multiple catches\n";
    cout << "x == 1" << endl;
    test(1);
    cout << "x == 0" << endl;
    test(0);
    cout << "x == -1" << endl;
    test(-1);
    cout << "x == 2" << endl;
    test(2);
    return 0;
}
/*

Output -->
Testing multiple catches
x == 1
Caught an integer
End of try-catch system!
x == 0
Caught a character
End of try-catch system!
x == -1
Caught a double
End of try-catch system!
x == 2
End of try block!
End of try-catch system!

*/