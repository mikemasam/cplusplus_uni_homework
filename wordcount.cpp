#include <iostream>
int getsize(char * s){
    int size = 0;
    while((int)s[size] != 0)
        size++;
    return size;
}
int main(int argc, char * argv[]){
    char *s = new char[100];
    if(argc <= 1){
        std::cin.getline(s,99);
        if(getsize(s) < 1){
            std::cout << "Invalid argument" << std::endl;
            return 0;
        }
        std::cout << "Piped = " << s << std::endl;
    }else{
        s = argv[1];
    }
    int size = getsize(s);
    int words = 0;
    int i = 0;
    while(i < size){
        if((int)s[i] == 32)
            words++;
        //std::cout << s[i] << (int)s[i] << std::endl;
        i++;
    }
    if(words > 0)
        words++;
    std::cout << "[words:" << words << ", length:" << getsize(s) << "]" << std::endl;
    return 0;
}
