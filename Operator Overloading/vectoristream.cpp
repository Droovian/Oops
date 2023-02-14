#include<iostream>
using namespace std;

class Vector{
    int v[5];

public:
    Vector();
    Vector(int *x);
    friend Vector operator *(int a, Vector &b);
    friend ostream & operator << (ostream &, Vector &);
};

Vector :: Vector(){
    for(int i=0; i<5; i++){
        v[i] = 0;
    }
}

Vector :: Vector(int *x){
    for(int i=0; i<5; i++){
        v[i] = x[i];
    }
}

Vector operator *(int a, Vector &b){
    Vector c;

    for(int i=0; i<5; i++){
        c.v[i] = a * b.v[i];
    }
    return c;
}

ostream & operator << (ostream &dout, Vector &b){
    for(int i=0; i<5; i++){
        dout << b.v[i] << "\t";
    }
    return dout;
}
int main()
{
    Vector v1;
    int arr[] = {1,2,3,4,5};
    v1 = arr;

    Vector p, q;

    p = 2 * v1;
    cout << p << "\n";
    return 0;
}
