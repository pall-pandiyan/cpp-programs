#include<iostream>
int getLength(const char *string) {
    int count=0;

// Method-1
//    while(string[count++]);
//    return count-1;

// Method-2
//    while(*string != '\0') {
//        count++;
//        string++;
//    }
//    return count;

// Method-3
    while(*string++)
        count++;
    return count;
}
int main() {
    std::cout<<getLength("Hello");
}