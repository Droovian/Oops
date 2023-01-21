#include <iostream>

using namespace std;

class Binary{
int x;

public:
Binary(){

x = 0;

}

Binary(int t){
x = t;
}

void display(){
    cout << x << endl;
}

friend Binary operator+(int k, Binary y);
friend Binary operator*(Binary x, Binary y);
friend Binary operator-(Binary y, int k);


};

Binary operator+(int k, Binary y){
    Binary temp;
    temp.x = k + y.x;
    return temp;

}
Binary operator*(Binary a, Binary y){
    Binary t;
    t.x = a.x * y.x;
    return t;
}

Binary operator-(Binary y, int k){
    Binary temp;
    temp.x = y.x - 5;
    return temp;
}


int main()
{
    Binary b1, b2(9);

    b1.display();

    b1 = 5 + b2;

    b1.display();

    b1 = b1 * b2;

    b1.display();

    b1 = b2 - 5;

    b1.display();
    return 0;
}
