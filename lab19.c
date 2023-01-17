// Given the length and breadth of a rectangle, write a program to find whether the area
// of the rectangle is greater than its perimeter. For example, the area of the rectangle
// with length = 5 and breadth = 4 is greater than its perimeter.


#include<stdio.h>
int main() {
int l,b,x,y;
printf("enter lenghth and breadth : ");
scanf("%d %d", &l,&b);
x=l*b;
y=l+l+b+b;
if(x>y){
    printf("the area is greater than it's perimeter");
} else if (y>x){
    printf("the perimeter is greater than area");
} else {
    printf("error 404");
}
return 0;

}