// Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//c-style string - use char instead string in array 

#include <iostream>

void printInReverseWord(char str[]) {
    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {  // Correct condition to check for end of string
        length++;
    }

    // Print the string in reverse
    for (int i = length - 1; i >= 0; i--) {
        std::cout << str[i];
    }
    std::cout << std::endl;  // Add a newline after printing
}

int main()
{
    char mystring[] = "Hello, World!";
    printInReverseWord(mystring);  // Call the function to print in reverse
}

 
