#include <iostream>
int main(){
    int yuan,jiao5,jiao1,totalJiao = 0;
    std::cout << "coins monetary value in Jiao\n";
    std::cout << "Enter a number of the coin 1 Yuan:";
    std::cin >> yuan;
    totalJiao = totalJiao + (yuan * 10);

    std::cout << "Enter a number of the coin 5 Jiao:";
    std::cin >> jiao5;
    totalJiao = totalJiao + (jiao5 * 5);

    std::cout << "Enter a number of the coin 1 Jiao:";
    std::cin >> jiao1;
    totalJiao = totalJiao + jiao1;

    std::cout << "Coins are worth " << totalJiao << " Jiao " << std::endl;

    return 0;
}
