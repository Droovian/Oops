#include<iostream>

using namespace std;

template<class T>

void swap_no(T &x, T &y){
    T temp = x;
    x = y;
    y = temp;
}
void fun(int m, int n, float a, float b)
{
    cout << "m and n before swap :" << m << " " << n << "\n";
    swap_no(m,n);
    cout << "After swap: " << m << " " << n << "\n";

    cout << "a and b before swap :" << a << " " << b << "\n";
    swap_no(a,b);
    cout << "After swap: " << a << " " << b << "\n";
}

int main()
{
    fun(15,25,3.14, 7.5);
    return 0;
}