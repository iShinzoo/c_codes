#include<stdio.h>
int main() {
int i,j;
int marks[2][4] = {{34,24,4,54},
                   {45,35,25,76}};


for(i=0;i<2;i++){
  for(j=0;j<4;j++){
    printf("The value of %d  and %d element of an array is %d\n",i,j,marks[i][j]);
}
}
return 0;
}