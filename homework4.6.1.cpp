#include <iostream>
int main(){
    int age = 0;
    std::cout << "Determine whether a man should serve in the army" << std::endl;
    std::cout << "Enter age:" ;
    std::cin >> age;
    if(age <= 30 && age >= 20){
        int option = 0;
        std::cout << "Options: 1, serve in the army ; 2, serve in the community:";
        std::cin >> option;
        if(option == 1){
            std::cout << "He should serve in the army for 3 years." << std::endl;
        }else if(option == 2){
            std::cout << "He should serve in one community for 5 years." << std::endl;
        }else {
            std::cout << "Option not available." << std::endl;
        }
    }else {
        std::cout << "He is freeman." << std::endl;
    }
    return 0;
}
