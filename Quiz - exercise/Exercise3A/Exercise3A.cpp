 

#include <iostream>

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int array[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(array) / sizeof(array[0]);

    printArray(array, size);
    return 0;
}



 
