//working on it.
//using while loop to output numbers which are divisable by 3 from 1 to 30
#include <iostream>
int main(){
    int min,max;
    min = 1;
    max = 30;
    while(min <= max){
        if(min % 3 == 0){
            std::cout << min << std::endl;
        }
        min++;
    }

    return 0;
}
