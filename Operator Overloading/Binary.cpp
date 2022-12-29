#include<iostream>
using namespace std;

class complex{
    float x,y;
public:
    complex(){};
    complex(float real, float imag){
        x = real;
        y = imag;
    }

    complex operator +(complex);
    void display();
};

complex complex :: operator +(complex c){
        complex temp;

        temp.x = x + c.x;
        temp.y = y + c.y;

        return temp;
}

void complex ::display(){
    cout << x << "+ j" << y << endl;
}
int main()
{
    complex c1, c2, c3;

    c1 = complex(2.5, 4.5);
    c2 = complex(1.5, 5.5);

    c3 = c1.operator+(c2);

    c1.display();
    c2.display();
    c3.display();
    return 0;
}
