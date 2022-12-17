#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};

    for(int i=0; i<v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;

   /* vector<int> :: iterator it = v.begin();
    for(it=v.begin(); it != v.end(); it++){
        cout << (*it) << endl;
    }*/
    vector<pair<int,int> > v_p = {{1,2}, {3,4}, {5,6}};

    for(auto it = v_p.begin(); it!=v_p.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
        // we can also use it->first;
    }
    //  how to write iterator code fast ->

    for(int value : v){  
        cout << value << " ";
    }
    cout << endl;
    
    for(int &value : v){
        value++;  
        cout << value << " ";
    }
}