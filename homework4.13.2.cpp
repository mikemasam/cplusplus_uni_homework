#include <iostream>
int main(){
    int i = 0;
oddPrinter:
    i++;
    if(i % 2 > 0)
        std::cout << " -" << i << "\n";
    if(i < 20){
        goto oddPrinter;
    }
    return 0;
}
