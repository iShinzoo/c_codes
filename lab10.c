// Two numbers are input through the keyboard into two locations C and D. Write a C
// program to interchange the contents of C and D.
// (a) using third variable (b) without using third variable


#include<stdio.h>
int main() {
    int c,d;
    printf("enter the number entered at c : ");
    scanf("%d",&c);
    printf("enter the number entered at d : ");
    scanf("%d", &d);
    int x=c;
    c=d;
    d=x;
    printf("c=%d,d=%d",c,d);
    return 0;
}