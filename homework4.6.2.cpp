#include <iostream>
int main(){
    float discount = 10;
    int tshirts = 0;
    int single_price = 50; //Y
    float total_amount = 0;
    std::cout << "Calculate T-Shirt sale total amount" << std::endl;
    std::cout << "Enter total number of T-Shirts:";
    std::cin >> tshirts;
    total_amount = single_price * tshirts;
    if(tshirts > 20){
        float discount_amount = total_amount * discount / 100;
        std::cout << "Discount amount is " << discount_amount << "Y" << std::endl;
        total_amount -= discount_amount;
    }
    std::cout << "Total amount is " << total_amount << "Y" << std::endl;

    return 0;
}
