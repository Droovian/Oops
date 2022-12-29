#include<iostream>
using namespace std;

class space{
int x, y ,z;

public:
    void get_data(int a, int b, int c);
    void display();
    void operator-();
};

void space :: get_data(int a, int b, int c)
{
    x= a, y =b, z= c;
}

void space :: display(){
    cout << "x = " << x << "\t" << "y = " << y << "\t" << "z =" << z << "\n";
}

void space :: operator-(){
    x= -x, y = -y, z = -z;
}
int main()
{
    space s;
    s.get_data(4, 5, 7);
    s.display();

    s.operator-(); // -s

    s.display();
    return 0;
}
