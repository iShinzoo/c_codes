// deletion at the end 

#include<stdio.h>
int main() {
int n,a[10],i;

printf("Enter the size of an array : ");
scanf("%d",&n);

printf("Enter the element in an array : ");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("The resultant array is : ");
for(i=0;i<n-1;i++){
    printf("%d ",a[i]);
}
return 0;
}