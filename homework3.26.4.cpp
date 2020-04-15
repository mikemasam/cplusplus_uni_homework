#include <iostream>

namespace nspA {
    int a = {10};
}
namespace nspB {
    int a = {100};
}

int main(){
    int b{5};
    int r{};
    r = nspA::a * b;
    std::cout << "a from nspA times b is " << r << std::endl;
    r = nspB::a / b;
    std::cout << "a from nspB divides b is " << r << std::endl;
    return 0;
}
