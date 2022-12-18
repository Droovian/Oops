#include<iostream>

using namespace std;

void divide(int x, int y, int z) 
{
    cout << "\nWe are inside the function \n";
    if((x-y)!= 0) // It is ok
    {
        int R = z/(x - y);
        cout << "R : " << R << endl;
    }
    else
    {
        throw(x-y); // throw point
    }
}
int main()
{
    try
    {
        cout << "\nWe are inside the try block\n";
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int i)
    {
       cout << "Exception has been caught!";
    }
    
    return 0;
}


/*
Output -->

We are inside the try block

We are inside the function 
R : -3

We are inside the function 
Exception has been caught!

*/