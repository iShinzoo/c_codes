// Two numbers are input through the keyboard into two locations C and D. Write a C
// program to interchange the contents of C and D.
// (a) using third variable (b) without using third variable


#include<stdio.h>
int main() {
    int c,d;
    printf("enter the no. entered at c :  ");
    scanf("%d",&c);
    printf("enter the no. entered at d:  ");
    scanf("%d",&d);
    c=c+d;
    d=c-d;
    c=c-d;
    printf("c=%d,d=%d",c,d);
    return 0;
}