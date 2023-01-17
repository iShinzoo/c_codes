#include<stdio.h>
int main() {
    char a;
    printf("enter value");
    scanf("%c", &a);
if(a>='0' && a<='9')
{
    printf("is digit");
}
else {
    printf("error 404");
}
return 0;
}