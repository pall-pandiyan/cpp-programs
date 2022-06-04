#include<iostream>
int main() {
    printf("1/2 = %f\n",(float)(1/2.0));
// printf("1/2 = %f",(float)(1/2))  is actually 0.000000;

    int x=10, a=-3;
//  x+=a; means x = x+(-a)
//  x=+a; means x = +(-a)
    x=+a;
    printf("%d\n",x);
    return 0;
}