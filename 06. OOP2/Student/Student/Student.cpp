#include "Header.h"
 
#include <iostream>

int main()
{
    Student students[5] = {
        Student{"Nade", 12,12},
        Student{"John", 15, 18},
        Student{"Alice", 10, 20},
        Student{"Bob", 14, 16},
    
       
    };

    std::cout << "Name" << "Final Grade" << std::endl;
    std::cout << "------------------------------" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << students[i].getName() << students[i].getFinal() <<std::endl ;
    }
}

 
