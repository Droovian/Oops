#include<iostream>
#include <string>
#include <cstring>
using namespace std;

class String{
int len;
char *p;

public:
    String(){
        len = 0;
        p = 0;
    }
    String(char *str){
        len = strlen(str);
        p = new char[len+1];
        strcpy(p, str);
    }

    String(String &s){
        len = s.len;
        p = new char[len+1];
        strcpy(p, s.p);
    }

    // the main overloading part

    friend String operator+(String &, String &);
    friend void display(String &s);
};

void display(String &s){

    cout << s.p << "\n";

}
String operator+(String &s1, String &s2){
    String temp;
    temp.len = s1.len + s2.len;
    temp.p = new char[temp.len + 1];
    strcpy(temp.p, s1.p);
    strcat(temp.p, s2.p);
    return (temp);
}

int main()
{
    String str1("Dhruv");
    String str2(" Naik");
    String str3 = str1 + str2;

    display(str3);
   
    String copy = str1;
    display(copy);

   
    return 0;
}
