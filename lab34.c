#include<stdio.h>
int main() {
int num,d,n,r,f;
printf("Enter the number : ");
scanf("%d",&num);
for(d=0;d<=9;d++){
    n=num;
    f=0;
    while(n!=0){
        r=n%10;
        if(d==r)
        
        ++f;
        n=n/10;
    }
    if(f>0)
    printf("The digit %d frequency is %d\n",d,f);
}
return 0;
}