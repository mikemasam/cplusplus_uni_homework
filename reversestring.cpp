#include <iostream>

int getsize(char *s){
    int size = 0;
    while((int)s[size] != 0){
        size++;
    }
    return size;
}

char * reverse(char * s){
    char* ns = new char[getsize(s)];
    int c_s = getsize(s);;
    int rc_s = 0;
    while(c_s >= 0){
        if((int)s[c_s] != 0){
            ns[rc_s] = s[c_s];
            rc_s++;
        }
        c_s--;
    }

    return ns;
}
int main(int argc,char *argv[]){
    if(argc < 2){
        std::cout << "no string given" << std::endl;
        return 0;
    }

    std::cout << reverse(argv[1]) << std::endl;
    return 0;
}
