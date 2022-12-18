#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter a & b:";
    cin >> a >> b;
    int x = a-b;

    try{
        if(x!=0)
        {
            cout << "Result(a/x) : " << a/x << endl;
        }
        else{ // throw an exception
            throw(x); // throwing an int type object
        }

    }
    catch(int i){
        cout << "Exception caught: Division by Zero\n";
    }

    cout << "END";

    return 0;
}

/*

Output -->
Enter a & b:5
5
Exception caught: Division by Zero
END

*/