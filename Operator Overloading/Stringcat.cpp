#include<iostream>
#include <string>
#include <cstring>

class String{
int len;
char *ptr;

public:
    String(){
        len = 0;
        ptr = 0;
    }
    String(const char *str){
        len = strlen(str);
        ptr = new char[len+1];
        strcpy(ptr, str);
    }

    String(const String &s){
        len = s.len;
        ptr = new char[len+1];
        strcpy(ptr, s.ptr);
    }

    // the main overloading part

    friend String operator+(const String &, const String &);
    friend void display(const String &s);
};

void display(const String &s){

    std::cout << s.ptr << "\n";

}
String operator+(const String &s1, const String &s2){
    String temp;
    temp.len = s1.len + s2.len;
    temp.ptr = new char[temp.len + 1];
    strcpy(temp.ptr, s1.ptr);
    strcat(temp.ptr, s2.ptr);
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
