#include <iostream>
using namespace std;
template <class t>
class vector
{
    t *v;
    int size;
public:
    vector(int m)
    {
        size=m;
        v = new t[size];
        for (int i = 0; i < size; i++)
            v[i] = 0;
    }
   void setvalues(t *a){
            for(int i=0;i<size;i++){
                v[i]=a[i];
            }
        }
    t operator*(vector &y)
    {
        t sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += this->v[i] * y.v[i];
        }
        return sum;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
            cout << "\t" << v[i];
        cout << endl;
    }
};

int main()
{
    int x[3] = {1, 2, 3};
    int y[3] = {4, 5, 6};
    vector<int> v1(3);
    vector<int> v2(3);
    v1.setvalues(x);
    v2.setvalues(y);
    float x1[3] = {1.4, 2.2, 3.1};
    float y1[3] = {4.2, 5.1, 6.4};
    vector<float> v3(3);
    vector<float> v4(3);
    v3.setvalues(x1);
    v4.setvalues(y1);
    cout << "v1: ";
    v1.display();
    cout << "v2: ";
    v2.display();
    cout<<"V1 * V2: "<<v1*v2<<endl;
    cout << "v3: ";
    v3.display();
    cout << "v4: ";
    v4.display();
    cout<<"V3 * V4: "<<v3*v4<<endl;
}