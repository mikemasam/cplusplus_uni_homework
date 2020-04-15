/* * Problem
 * hours = ?
 * rate = ?
 * hours < 20
 *  rate = 5;
 * hours > 20
 *  rate = 7
 */
#include <iostream>
int main(){
    int hours = 0;
    int base_rate = 5;
    int base_pay = 0;
    int over_rate = 7;
    int over_pay = 0;

    std::cout << "Enter total hours you worked in a week:";
    std::cin >> hours;
    if(hours > 20){
        base_pay = 20 * base_rate;
        over_pay = (hours - 20) * over_rate;
    }
    else
        base_pay = hours * base_rate;
    std::cout << "Total pay is " << base_pay + over_pay << "Yuan" << std::endl;
    return 0;
}
