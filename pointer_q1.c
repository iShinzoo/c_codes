#include<stdio.h>
int main() {
int i=8;
int *j=&i; // j will now store the address of i 
printf("value i = %d\n",i);
printf("value i = %d\n",*j);
printf("add i = %u\n",&i);
printf("add i = %u\n",j);
printf("add j = %u\n",&j);
printf("value j = %d\n",*(&j));
return 0;
}