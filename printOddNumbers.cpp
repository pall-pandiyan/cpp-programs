#include<iostream>

int main() {
    int start=1;
    int end=100;

    for(int i=start; i<end; i=i+2) {
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    return 1;
}