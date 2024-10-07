 

#include <iostream>

int sumEvenRange(int start, int end) {
    int sum = 0;

    if (start % 2 == 1) {
        start++;
    }

    for (int i = start; i <= end; i += 2) {
        sum += i;
    }
    return sum;
}

int main()
{
    int start;
    int end; 
    std::cout << "Enter a start num: ";
    std::cin >> start;
    std::cout << "Enter a end num: ";
    std::cin >> end;
   
    if (start >= end) {
        std::cout << "Error!";
    }
    else {
        std::cout << "The sum is: " << sumEvenRange(start, end) << std::endl;
    }

    

}

 
