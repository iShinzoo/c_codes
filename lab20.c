// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the
// three points fall on one straight line

#include<stdio.h>
// to check 3 points collinear
int main() {
int x,y,z,p,q,r,a;
printf("enter x , y and z : ");
scanf("%d %d %d",&x,&y,&z);
printf("enter p , q and r : ");
scanf("%d %d %d",&p,&q,&r);
a=x*(q-r)+y*(r-p)+z*(p-q);
if(a==0){
    printf("points are collinear");
} else {
    printf("not a collinear");
}
return 0;
}