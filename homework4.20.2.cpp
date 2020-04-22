//am thinking of a card game
#include <iostream>
#include <time.h>
int main(){
    char cards[] = {'2','3','4','5','6','7','8','9','D','J','Q','K','A'};
    char card = ' ';
    char choice = ' ';
    int random_card_number = 0;
    //pick random card from array of cards
    srand(time(NULL));
    random_card_number = rand() % 13 + 1;
    card = cards[random_card_number];

    std::cout << "I'm thinking of a card!\n";
    do {
        std::cout << "Choose a card between (2 to 9, D, J,Q, K, A) \n";
        std::cin >> choice;
        if(choice != card)
            std::cout << "Wrong Card!\n";
    }while(card != choice);
    std::cout << "Congratulations! The answer is " << card << "! \n";
    return 0;
}
