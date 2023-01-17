// deletion
// deletion is a process of removing an element.
// deletion at the beginning

#include<stdio.h>
int main() {
int a[10],n,i,change;

printf("Enter the size of an array : ");
scanf("%d",&n);

printf("Enter the number of elements : ");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
n--;
for(i=0;i<n;i++){
a[i]=a[i+1];
}
printf("The resultant array is : ");
for(i=0;i<n;i++){
   printf("%d",a[i]);
}
return 0;
}