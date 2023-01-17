// The length & breadth of a rectangle and radius of a circle are input through the
// keyboard. Write a C program to calculate the area & perimeter of the rectangle, and the
// area & circumference of the circle.

#include<stdio.h>
int main() {
    float length , breadth , raidus;
    printf("enter the length: ");
    scanf("%f", &length);
    printf("enter the breadth: ");
    scanf("%f", &breadth);
    printf("enter the raidus: ");
    scanf("%f", &raidus);
    printf("the area of rectangle is : %f\n",length*breadth);
    printf("the perimeter of rectangle is : %f\n", length+length+breadth+breadth);
    printf("the area of circle is : %f\n",3.14*raidus*raidus);
    printf("the circumfrence of circle is : %f",2*3.14*raidus);
    return 0;
}