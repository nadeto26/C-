//vectors 
#include <vector>
#include <algorithm>


#include <iostream>

 

int main()
{
    std::vector<int> intVec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sum = 0;
    for (int i = 0; i < intVec.size(); i++) {
        sum += intVec.at(i)+1;
    }

     
     find(intVec.begin(), intVec.end(), 20);

    std::cout << "The sum is " << sum << std::endl;

    std::string text = "Test";
    for (char i : text) //range based for loop за обхождане на елемените 
        std::cout << i << std::endl;

    std::vector<int>::iterator iter;
    for (iter = intVec.begin(); iter != intVec.end(); iter++) {
        std::cout << *iter << std::endl;
    }

}

