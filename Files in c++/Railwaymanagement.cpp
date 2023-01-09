// currently working on this (not complete)
#include<iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

class railway{
    char name[10];
    int age;
    char start_place[15];
    char end_dest[15];
    float regid;
    char coachtype[5];

public:
    void get_data();
    void show_data();
    void show_name();
};
    void railway :: get_data(){
        cout << "\n";
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter your age:\n";
        cin >> age;
        cout << "What is your starting destination?\n";
        cin >> start_place;
        cout << "Where would you like to visit?\n";
        cin >> end_dest;
        cout << "Kindly enter Reg ID:\n";
        cin >> regid;
        cout << "What's your preferred Coach-Type?\n";
        cin >> coachtype;
    }

    void railway :: show_name(){
        cout << name << "\n";
    }

    void railway :: show_data(){
        fstream f1, f2, f3;
        f1.open("2A.txt", ios::out | ios::app);

        if(!strcmp("2A", coachtype)){
            show_name();
            f1 << name << "\n";
        }
        f1.close();

        f2.open("3A.txt", ios::out | ios::app);

         if(!strcmp("3A", coachtype)){
            show_name();
            f2 << name << "\n";
        }
        f2.close();
    
    }

int main()
{
    railway r[50];
    int n;
    cout << "-------------------------------------------------------\n\n";
    cout << "\tWelcome to the Railway Reservation System!\n\n";

    cout << "Enter number of customers:";
    cin >> n;

    cout << "Enter your details below!\n";
    for(int i=0; i<n; i++){
        r[i].get_data();
    }

    for(int i=0; i<n; i++){
        r[i].show_data();
    }


    return 0;
}
