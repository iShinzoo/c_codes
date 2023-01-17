// insertion
// insertion is a process of editing a element in an any array 
// Editing an element in any position.

#include<stdio.h>
int main() {
int n,a[100],pos,change,i;

printf("Enter the size of an array : ");
scanf("%d",&n);

printf("Enter the elements in array : ");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("Enter the position in an array of insertion : ");
scanf("%d",&pos);

printf("Enter the element to be inserted : ");
scanf("%d",&change);
for(i=change-1;i>=pos-1;i--){
    a[i+1]=a[i];
}
a[pos-1]=change;

printf("The resultant array is : ");
for(i=0;i<=n;i++){
    printf("%d ",a[i]);
}
return 0;
}