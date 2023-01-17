#include<stdio.h>
int linear(int a[],int n,int x){
    for(int i=0;i<n;i++)
    if(a[i]==x)
    return i;
    return -1;
}
int main() {
    int result;
int a[]={2,3,4,5,6,7,8};
int x=3;
int n=sizeof(a)/sizeof(a[0]);
result=linear(a,n,x);
if(result==-1){
    printf("Element not present");
} else{
    printf("present at index value : %d",result);
}
return 0;
}