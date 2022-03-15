#include<iostream>
int main() {
    int8_t a=200;
    uint8_t b=100;
    if(a>=b)
        std::cout<<"greater\n";
    else
        std::cout<<"less\n";
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    return 1;
}