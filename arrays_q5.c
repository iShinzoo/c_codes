// To find the greatest element in an array 

#include<stdio.h>
int returnMax(int array[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}
int main() {
int arr[]={98,101,76,45,78,90};
int max=returnMax(arr,6);
printf("Largest element = %d",max);
return 0;
}