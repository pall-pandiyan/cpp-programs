#include<iostream>

int main() {
    int target;
    std::cin>>target;
    for(int i=target; i>0; i--) {
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    return 1;
}