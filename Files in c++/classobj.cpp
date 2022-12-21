#include<iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class inventory{

char name[10];
int code;
float cost;

public:
    void get_data();
    void setter();

};

void inventory :: get_data(){

    cout << "Enter name: \n"; 
    cin >> name;
    cout << "Enter code: \n"; 
    cin >> code;
    cout << "Enter cost: \n";
    cin >> cost;

}

void inventory :: setter(){
    cout << setiosflags(ios::left) << setw(10) << name;
        setiosflags(ios :: right);
        cout << setw(10) << code;    
         setprecision(2);
         setw(10);
        cout << cost << endl;
         
}

int main()
{
    inventory item_array[3];
    int i;

    fstream file;

    file.open("Inventory.txt", ios::in | ios:: out);

    cout << "Enter details for 3 items:\n";
    for(i=0; i<3; i++){
        item_array[i].get_data();
        file.write((char *)&item_array[i], sizeof(item_array[i]));
    }

    cout << "\nO/p -->\n\n";

    for(i=0; i<3; i++){
        file.read((char *)&item_array[i], sizeof(item_array[i]));
        item_array[i].setter();
    }
    file.close();
    return 0;
}

// o/p -->
