 
#include <iostream>
#include <string>
using namespace std;

 string reverseString(string word) {
    reverse(word.begin(), word.end());
    return word;
}

int main()
{
    string word; 
    std::cout << "Enter a word: ";
    std::cin >> word;
    
    std::cout << "The reverse word is: " << reverseString(word)<< std::endl;
}

 
