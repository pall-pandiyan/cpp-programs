#include<iostream>
int main() {
    int x = 5, y = 2;
    std::cout<<(x & y)<<std::endl;
    if(x & y) {
        /*_part A_*/
        std::cout<<"Part-A\n";
    }
    else {
        /*_part B_*/
        std::cout<<"Part-B\n";
    }
    return 0;
}