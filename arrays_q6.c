// decimal to binary 

#include<stdio.h>

int main() {
int n,rem,a[10],j,i=0;
printf("Enter the value of n : ");
scanf("%d",&n);
while(n){
    rem=n%2;
    n=n/2;
    a[i]=rem;
    i++;
}
for(j=i-1;j>=0;j--){
    printf("%d",a[j]);
}
return 0;
}