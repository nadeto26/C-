
#include <iostream> //indicate to the compiler that this program uses objects 
using namespace std; 
//*STD* short form of standart namespace,the std namespace 
//contains the built-in classes and declared functions

int main()
{
    int  nicles;
    int pennis;
    float result;
    cout << "Enter the number of pennis you have: "; cin >> pennis; 
    //--> cin C++ name for the standart input stream
    //--> cout C++ name for the stabdart output stream
    cout << "Enter the number of nickles you have: "; cin >> nicles;

    result = (pennis + nicles * 5) / 100.0;

    cout << "The result " << result << endl;
    return 0;


}


 
