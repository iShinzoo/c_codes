// insertion
// insertion is a process of editing a element in an any array 
// Editing an element in an begining 

#include<stdio.h>
int main() {
int a[10],i,size,change;

printf("Enter the size of an array : ");
scanf("%d",&size);

printf("Enter the element of an array : ");
for(i=0;i<size;i++){
scanf("%d",&a[i]);
}
printf("Enter the new element of an array : ");
scanf("%d",&change);
size++;
for(i=size;i>1;i--){
    a[i-1]=a[i-2];
}
a[0]=change;
printf("the resultant array : ");
for(i=0;i<size;i++){
printf("%d ",a[i]);
}
getch();
return 0;
}


