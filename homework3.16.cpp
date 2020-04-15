#include <iostream>
int main(){
    //cheap mask = 3 Y, 1 Days
    //expensive mask = 14 Y, 3 Days
    //balance = 100
    int cmask = 3;
    int cmaskt = 1;
    int emask = 14;
    int emaskt = 3;
    int balance = 100;

    int cmasktt = ( balance / cmask) * cmaskt;
    int emasktt = ( balance / emask) * emaskt;
    std::cout << "Cheap mask will finish on the " << cmasktt << " day" << std::endl;
    std::cout << "Expensive mask will finish on the " << emasktt << " day" << std::endl;
    return 0;
}
