// Multidimensional Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//first - row, after that - column 

#include <iostream>
using namespace std;

void printMultiplicationTable(int table[10][10]) {
    for (int row = 0; row < 10; row++) {
        for (int cow = 0; cow < 10; cow++) {
            cout << table[row][cow] << "\t";  
        }
        cout << endl;
    }
}

int main()
{
    int table[10][10];
        for (int row = 0; row < 10; row++) {
            for (int cow = 0; cow < 10; cow++) {
                table[row][cow] = (row + 1) * (cow + 1);
            }
            
        }

        printMultiplicationTable(table);
        return 0;
}

 
