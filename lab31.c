#include<stdio.h>
int main() 
{
    int num,div,count=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(div=2;div<num;div++)
    {
       if(num%div==0)
       {
            count++;
       }
    }
    if(count==0)
    {
        printf("prime numbers");
    }
    else 
    {
        printf(" composite numbers");
    }
return 0;
}