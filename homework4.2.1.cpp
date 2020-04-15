#include <iostream>

int main(){
    int age_of_a_man = 0;
    std::cout << "\n\n";
    std::cout << "Determine whether a man should serve in the army!" << std::endl;
    std::cout << "Enter the age of a man:";
    std::cin >> age_of_a_man;
    if(age_of_a_man > 20 && age_of_a_man < 30)
        std::cout << "He must serve in the army" << std::endl ;
    std::cout << "\n\n";
    return 0;
}
