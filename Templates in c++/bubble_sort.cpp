#include<iostream>

using namespace std;

template<class T>
void bubble(T a[], int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }
}

int main()
{
    int x[5] = {10, 50, 30, 40, 20};
    float y[5] = {1.1, 1.2, 1.3, 1.4, 1.5};

    bubble(x, 5);

    for(int i=0; i<5; i++){
        cout << x[i] << " ";
    }
    cout << endl;

    bubble(y, 5);

    for(int i=0; i<5; i++){
        cout << y[i] << " ";
    }
    cout << endl;
    return 0;
}