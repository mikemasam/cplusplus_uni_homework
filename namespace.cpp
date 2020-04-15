#include <iostream>
//use of name space
using namespace std;
namespace myStuff{
    int value = {};
    int printValue(){
        std::cout << "\nValue called \n";
    }
}

int main(){
    std::cout << "Enter an interger";
    std::cin >> myStuff::value;
    std::cout << "\n You entered " << myStuff::value << std::endl;
    myStuff::printValue();
    return 0;
}
