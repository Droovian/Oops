#include <iostream>
#include <map>
#include <string>

using namespace std;
typedef map<string, int> phoneMap;

int main()
{
    string name;
    int number;
    phoneMap phone;
    cout << "Enter three sets of name & number \n";

    for(int i=0; i<3; i++){
        cin >> name;
        cin >> number;
        phone[name] = number;
    }

    int n = phone.size();

    cout << "\nsize of map: " << n << "\n\n";

    cout << "List of telephone numbers: \n";
    phoneMap :: iterator it;
    for(it=phone.begin(); it!= phone.end(); it++){
        cout << it -> first << " " << it -> second << "\n";
    }
    cout << "\n";
    cout << "Enter name:";
    cin >> name;
    number = phone[name];
    cout << "Number: " << number << "\n";

    return 0;
}
