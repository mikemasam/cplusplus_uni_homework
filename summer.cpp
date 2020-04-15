#include <iostream>
int main(){
    int first_number = 0;
    int second_number = 0;
    int sum,product = 0;
    std::cout << "Enter first number :";
    std::cin >> first_number;
    std::cout << "\nEnter second number :";
    std::cin >> second_number;
    sum = first_number + second_number;
    product = first_number * second_number;
    std::cout << "\nThe sum of " << first_number << " plus " << second_number << " is " << sum << std::endl;
    std::cout << "\nThe product of " << first_number << " and " << second_number << " is " << product << std::endl;
}
