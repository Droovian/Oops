#include <iostream>
#include <utility>
using namespace std;

int main(){
    
    /* pair <int, int> p1; // normal declaration
    p1.first = 100;

    p1.second = 200;

    cout << p1.first << " " << p1.second << endl; */

    pair <int, char> pair1(75, 'G');
    pair <int, string> pair3;

    cout << pair1.first << " " << pair1.second << endl;

    // using make pair

    pair3 = make_pair(55, "Using make pair for initialization");

    cout << pair3.first << " " << pair3.second << endl;

    pair <int, pair<int, int>>p(15, {3, 5});
    cout << p.second.second;
    return 0;
}
