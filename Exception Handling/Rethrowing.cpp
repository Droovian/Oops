#include<iostream> 
// imp code
using namespace std;

void divide(double x, double y)
{
    cout << "Inside function(divide)\n";
    try
    {
       if(y == 0.0) throw y;
       else
       cout << "Division(x/y) : " << x/y << endl;
    }
    catch(double e)
    {
        cout << "Caught double inside function\n";
        throw;
    }
    cout << "End of function\n\n";
}
int main()
{
    cout << "Inside main\n";
    try
    {
        divide(10.5, 2.0);
        divide(20.0, 0.0);
    }
    catch(double)
    {
        cout << "Caught double inside main\n";
    }
    cout << "End of main\n\n";

    return 0;
}

/*

O/p -->

Inside main
Inside function(divide)
Division(x/y) : 5.25
End of function

Inside function(divide)
Caught double inside function
Caught double inside main
End of main

*/