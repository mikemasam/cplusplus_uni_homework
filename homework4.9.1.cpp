#include <iostream>
int main(){
    int month = 0;
    std::cout << "Enter month number:";
    std::cin >> month;
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            std::cout << "31 days" << std::endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            std::cout << "30 days" << std::endl;
            break;
        case 2:
            std::cout << "Leap year: 29 days; non-leap year:28 days" << std::endl;
            break;
        default:
            std::cout << "Invalid month number" << std::endl;
            break;
    }
    return 0;
}
