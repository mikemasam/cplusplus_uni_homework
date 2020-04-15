#include <iostream>
int main(){
    double amount = 0, discount = 0, discount_amount = 0.0, ticket_price = 79; //Y
    int tickets = 0, membership = 0;
    std::string membership_name = "";
    std::cout << "\nAvailable Membership ~ \n";
    std::cout << "  0.No membership.\n  1.Normal.\n  2.Silver.\n  3.Golden.\n  4.Diamond.\n";
    std::cout << "Select Membership:_";
    std::cin >> membership;
    std::cout << "Enter number of tickets:_";
    std::cin >> tickets;
    if(tickets >= 5){
        std::cout << "Only 5 tickets at a time.\n";
        return 0;
    }
    switch(membership){
        case 1:
            membership_name = "Normal.";
            discount = 0;
            break;
        case 2:
            membership_name = "Silver.";
            discount = 5;
            break;
        case 3:
            membership_name = "Golden.";
            discount = 10;
            break;
        case 4:
            membership_name = "Diamond.";
            discount = 20;
            break;
        default:
            membership_name = "Non-member.";
            discount = 0;
            break;
    }

    amount = tickets * ticket_price;
    discount_amount = amount * (discount / 100);
    amount = amount - discount_amount;
    std::cout << "Your membership is " << membership_name << "\n";
    std::cout << "Total Amount is " << amount << " Yuan. \n";
    std::cout << "Discount " << discount << "%. \n\n";
    return 0;
}
