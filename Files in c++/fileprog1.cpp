#include <iostream>
#include <fstream>
#include <math.h>
// checks if a number is armstrong or not using files
// armstrong --> cube of each digit is equal to the number itself
using namespace std;

// finds the number of digits
int order(int x){
    int j = 0;
    while(x){
        j++;
        x /= 10;
    }
    return j;
}

bool isArmstrong(int x){
    int ord = order(x);
    int temp = x, sum = 0;

    while(temp){
        int rem = temp % 10;
        sum += pow(rem, ord);
        temp /= 10;
    }
    return (sum == x);
}

int main(){
   int n, a[10];
   cin >> n;

   ofstream of1("sample.txt");
   for(int i=0; i<n; i++){
        cin >> a[i];
   }

   for(int i=0; i<n; i++){
        of1 << " " <<  a[i]; // writing to a file
   }
    of1.close();

    ifstream if1("sample.txt");

    for(int i=0; i<n; i++){
        if1 >> a[i]; // reading & checking a condition from the previously written file

        if(isArmstrong(a[i])){
            cout << a[i] << endl;
        }
    }
   
    return 0;
}