// searching 
// searching for any element at any specific inde value
// by linear search

#include<stdio.h>
int linear(int a[],int n,int x){
for(int i=0;i<n;i++)
if(a[i]==x)
return i;
return -1;
}
int main() {
int search,result;
int a[]={2,4,5,7,8,9};
int x=8;
int n = sizeof(a) / sizeof(a[0]);
result = linear(a,n,x);
if(result==-1){
    printf("Element is not present in an array");
} else {
    printf("element found at index = %d",result);
}
return 0;
}
