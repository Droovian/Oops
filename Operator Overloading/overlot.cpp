#include<iostream>

using namespace std;

class Over{
    private:
        int temp;
    public:
        Over(){
            temp = 0;
        }

        Over(int t){
            temp = t;
        }

        inline void display(){
            cout << temp << endl;
        }

friend Over operator+(int, Over &);
Over operator*(Over&);
Over operator-(int);
friend Over operator-(Over&);
};

Over operator+(int k, Over &y){
    Over t;
    t.temp = k + y.temp;
    return t;
}

Over Over ::operator*(Over &y){
    Over t;
    t.temp = temp * y.temp;
    return t;
}

Over Over::operator-(int k){
    Over sub;
    sub.temp = temp - k;
    return sub;
}

Over operator-(Over &a){
    a.temp = -a.temp;
    return a;
}
int main()
{
    Over t1, t2(5);

    t1.display();
    t2.display();

    t1 = 5 + t2;
    t1.display();

    t1 = t1.operator*(t2);
    t1.display();

    // t1 = t2 - 4;
    
    t1 = t2 - 4;//t1 = t2.operator-(4);
    t1.display();

    operator-(t2);
    t2.display();
    return 0;
}
