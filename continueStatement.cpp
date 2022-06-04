#include<iostream>
using namespace std;

int main() {
    for( int i=0; i<=20; i++) {
        if(i%2) {
            continue;
        }
        std::cout<<i<<" ";
    }
    return 0;
}

// the output will be...
//
// 0 2 4 6 8 10 12 14 16 18 20