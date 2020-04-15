#include <iostream>
int main(){
    float numb1,numb2;
    int option = 0;
    std::cout << "Enter first number:";
    std::cin >> numb1;
    std::cout << "Enter second number:";
    std::cin >> numb2;
    std::cout << "   Choose Operation. \n1. Addition (num1 + num2) \n2. Subtraction (num1 - num2) \n3. Multiplication (num1 * num2) \n4. Division (num1 / num2) \n";
    std::cout << "Choose:";
    std::cin >> option;
    switch(option){
        case 1:
            std::cout << "Result of (num1 + num2):" << numb1 + numb2;
            break;
        case 2:
            std::cout << "Result of (num1 - num2):" << numb1 - numb2;
            break;
        case 3:
            std::cout << "Result of (num1 * num2):" << numb1 * numb2;
            break;
        case 4:
            if(numb2 == 0)
                std::cout << "Divisor can not be ZERO!\n";
            else
                std::cout << "Result of (num1 / num2):" << numb1 / numb2;
            break;
        default:
            std::cout << "Invalid operation \n";
            break;
    }
    std::cout << "\n\n";
    return 0;
}
