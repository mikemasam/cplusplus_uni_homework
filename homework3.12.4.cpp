#include <iostream>

int main(){
    int input_inches = 0;
    std::cout << "converts inches to feet" << std::endl;
    std::cout << "Enter inches to convert:";
    std::cin >> input_inches;
    std::cout << std::endl;
    int output_feets = input_inches / 12;
    int output_inches = input_inches % 12;
    std::cout << output_feets << " feet and " << output_inches << " inches" << std::endl;
    return 0;
}

