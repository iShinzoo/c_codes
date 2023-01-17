// decimal to binary

#include<stdio.h>

int main() {
int n,c,k;
printf("Enter the value of n : ");
scanf("%d",&n);

for(c=31;c>=0;c--){
    k = n >> c;
    if(k & 1){
        printf("1");
    } else {
         printf("0");
    }
}
printf("\n");
return 0;
}