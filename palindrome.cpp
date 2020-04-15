#include <iostream>
int getsize(char *s){
    int size = 0;
    while((int)s[size] != 0)
        size++;
    return size;
}
int main(int argc, char * argv[]){
    if(argc <= 1)
    {
        std::cout << "Invalid argument" << std::endl;
        return 0;
    }

    char * input = argv[1];
    int j = 0;
    int i = getsize(input) -1;
    while(input[j] != 0){
        if(input[j] != input[i]){
            std::cout << "String given is not a palindrome" << std::endl;
            return 0;
        }
        j++;
        i--;
    }
    std::cout << "String given is a palindrome" << std::endl;
}
