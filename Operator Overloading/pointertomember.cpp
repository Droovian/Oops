// overloading -> operator in c++
#include<iostream>

using namespace std;

class test{

    public:
        int num;
        test(int k){
            num = k;
        }

    test *operator ->()
    {
        return this;
    }

};
int main(){
    test T(5);

    test *ptr = &T;

    cout << T.num << endl;
    cout << ptr ->num << endl;

    cout << T ->num;
    return 0;
}
