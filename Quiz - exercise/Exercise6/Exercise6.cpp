// Exercise6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//TWO DIMENSIONAL ARRAY - MATRIX 

int countDivisible(int array[][3], int rows) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            if (array[i][j] % 3 == 0 || array[i][j] % 8 == 0) {
                count++;
            }
        }
    }

    return count;
}


int main()
{
    const int rows = 4;
    int arr[rows][3] = {
        {2, 4, 8},
        {3, 5, 7},
        {9, 12, 16},
        {20, 24, 30}
    };

    int result = countDivisible(arr, rows);  // Call the function
    std::cout << "Number of elements divisible by 3 or 8: " << result << std::endl;  // Output the result

    return 0;
}

 
