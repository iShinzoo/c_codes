// If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program
// to determine the youngest of the three.

#include<stdio.h>
int main() {
    // r=ram,s=shyam,a=ajay
int r,s,a;
printf("enter the ages of r,s,a: ");
scanf("%d %d %d",&r,&s,&a);
if(r<s&&r<a){
    printf("ram is youngest");
} else if(s<r&&s<a){
    printf("shyam is youngest");
} else if(a<r&&a<s){
    printf("ajay is youngest");
} else {
    printf("error 404");
}
return 0;

}