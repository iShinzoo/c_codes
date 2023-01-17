#include<limits.h>
#include<stdio.h>

int main() {

    printf("minimum int value : %d\n"
           "maximum int value : %d\n"
           "size of int in bytes : %zu\n"
           "size of int in bit : %zu",INT_MIN,INT_MAX,sizeof(int),sizeof(int)*CHAR_BIT);

}