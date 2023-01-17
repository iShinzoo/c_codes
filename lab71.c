#include<stdio.h>
#include<math.h>
int bin(int x);
int main() {
int x;
printf("Enter the value for x is : ");
scanf("%d",&x);
printf("The decimal to binary conversion is : %d",bin(x));
return 0;
}
int bin(int x){
    int dec,i;
    for(i=1;bin;i++,bin/=10){
         if (bin%10)
            dec += pow(2, i);
    }
}