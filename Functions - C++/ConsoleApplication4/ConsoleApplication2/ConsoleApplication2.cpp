 

#include <iostream>

int factoriel(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int main()
{
    int x=0;
    
    std::cout << "Factoriel: " << factoriel(x) << std::endl;
}

 
