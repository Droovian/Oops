#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> &v){ 
    for(int i=0; i<v.size(); i++){
        // v.size() -> O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> v; // size if now 0

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x); // O(1)
    }
    printVec(v);
    v.pop_back();
    printVec(v);
    vector<int> v2 = v; // changes made to v2 wont affect v as copy is passed
    v2.pop_back();
    v2.pop_back();
    printVec(v2);
    return 0;
}

/* Output ->
4
1
3
5
7
1 3 5 7
1 3 5
1
*/
