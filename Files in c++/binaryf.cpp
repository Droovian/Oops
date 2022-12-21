#include<iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    float a[] = {105.50, 75.70, 98.37, 91.99};

    ofstream outfile;
    outfile.open("Binary.txt");

    outfile.write((char *) &a, sizeof(a));
    outfile.close(); // close file for reading

    for(i=0; i<4; i++){
        a[i] = 0;   // clear array from memory
    }

    ifstream infile;
    infile.open("Binary.txt");

    infile.read((char *)&a, sizeof(a));

    for(i=0; i<4; i++){
        cout.setf(ios::showpoint);
        setprecision(2);
        cout << setw(10) <<  a[i];
    }
    infile.close();

    return 0;
}

// 105.500   75.7000   98.3700   91.9900
