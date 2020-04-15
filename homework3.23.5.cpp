#include <iostream>

int main(){
    char char_value = 0;
    int int_value = 0;
    std::cout << "Enter character integer value:";
    std::cin >> int_value;
    char_value = int_value;

    std::cout << "Character value for " << int_value << " is " << char_value << std::endl;
    return 0;
}
