/* Write a program to swap two values where input and output statements are in calling
 (main) function.*/


#include<stdio.h>
void swap(int a , int b);
int main() {
	int a,b;
		printf("The value of a and b is :  ");
	    scanf("%d %d",&a,&b);
		printf("The digits before swap is : %d and %d\n", a ,b);
		swap(a,b);
	
	return 0;
}
void swap(int a , int b){
	int k;
	k=a;
	a=b;
	b=k;
	printf("The digits after the swap is : %d and %d",a,b);	
}



