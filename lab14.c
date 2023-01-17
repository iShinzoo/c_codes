// Write a C program to find the gross salary of an employee
// Gross salary = base salary + DA + HRA+Bonus
// DA= 40 % of the base salary, HRA=80% of DA, and Bonus= 25% of HRA.
// Ask user to enter the base salary only.


#include<stdio.h>
int main() {
int GS,bs,DA,HRA,bonus;
printf("enter base salaray : ");
scanf("%d",&bs);
DA=0.4*bs;
HRA=0.8*DA;
bonus=0.25*HRA;
GS=bs+DA+HRA+bonus;
printf("the gross salary is : %d",GS);
return 0;

}