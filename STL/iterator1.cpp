#include<iostream>
#include <vector>
#include <utility>

using namespace std;

void printVec(vector<int> v){ 
    for(int i=0; i<v.size(); i++){
        // v.size() -> O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    vector<int> v;

    cout << "Enter number of elements:\n";
    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    printVec(v);

    vector<int>:: iterator it = v.begin();
    it++;
    // v.begin() will access memory location
    cout << *(it) << " " << endl;

    vector<int>:: iterator i = v.end();
    cout << *(i) << endl;// v.end() does not access last element but the pos after that(will print garbage)
    i--;
    cout << *(i) << endl;

    cout << v.back() << " ";
    cout << "\n";
    // erase function
    // {10,20,12,23}
    v.erase(v.begin()+1);
    printVec(v);
    // {10,20,12,23,35}
    v.erase(v.begin()+2, v.begin()+4);
    printVec(v);
    // e.g -> {10, 20, 35}

    // insert function
    vector<int> c(2, 10);
    c.insert(c.begin(), 20);
    c.insert(c.begin()+1, 2, 30);

    v.swap(c);
    printVec(v);
    printVec(c);
    return 0;
}
/*
Output ->
Enter number of elements:
5
1
2
3
4
5
1 2 3 4 5 
2 
510
5
5 
1 3 4 5 
1 3 
20 30 30 10 10
1 3*/