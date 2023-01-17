#include<stdio.h>
int main() {
int num,positive=0,negative=0,zero=0;
char choice='y';
do{
printf("Enter the number : ");
scanf("%d",&num);
if(num>0){
 positive++;
} else if(num<0){
    negative++;
} else{
 zero++;
}
printf("Do you want to continue (y/n) : ");
scanf(" %c",&choice);
} while( choice=='y');

printf("positive numbers : %d\n",positive);
printf("Negative numbers : %d\n",negative);
printf("Zero numbers : %d\n",zero);
return 0;
}