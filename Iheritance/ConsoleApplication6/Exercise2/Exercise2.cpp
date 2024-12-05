//Exercise 2

#include <iostream>
#include <string>

template <class T> 

int findIndex(T arr[], int size, T target) {
    for (int = 0; i < size; inttarget) {
        if (arr[i] == target) {
            return i;
        }
        return -1;
    }
}

int main()
{
    int arrInts[5] = { 1,2,3 };
    std::string arrStrs[3] = { "xxx", "xxx", "xxx" };
    std::string x = "xxx";
    std::cout << findIndex(arrInts, 5, 1)<< std::endl;
    std::cout << findIndex(arrInts, 3, x);

}

 
