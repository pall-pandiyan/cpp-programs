#include<iostream>

int main() {
    int end = 100;
    int mul = 6;

    for(int i=mul; i<end; i+=mul) {
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    return 1;
}