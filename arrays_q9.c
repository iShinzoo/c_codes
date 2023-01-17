// insertion
// insertion is a process of editing a element in an any array 
// Editing an element in an end.

#include<stdio.h>
int main() {
int i,size,change,a[10];

printf("Enter the size of an array : ");
scanf("%d",&size);

printf("Enter the element of an array : ");
for(i=0;i<size;i++){
scanf("%d",&a[i]);
}

printf("Enter the element to be inserted in an array : ");
scanf("%d",&change);
a[i]=change;

printf("the resultant array : ");
for(i=0;i<=size;i++){
printf("%d ",a[i]);
}
getch();
return 0;
}