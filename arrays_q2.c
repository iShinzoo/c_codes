#include<stdio.h>
int main() {
int i;
int marks[4] = {34,24,4,54};

// for( i=0;i<4;i++){
//     printf("Enter the value of %d element of an array\n",i);
//     scanf("%d",&marks[i]);
// }

for(i=0;i<4;i++){
    printf("Enter the value of %d element of an array is %d\n",i,marks[i]);
}


// marks[0]=34;
// marks[1]=24;
// marks[2]=54;
// marks[3]=44;
// printf("The marks of student 1 is : %d\n",marks[0]);
// printf("The marks of student 2 is : %d\n",marks[1]);
// printf("The marks of student 3 is : %d\n",marks[2]);
// printf("The marks of student 4 is : %d\n",marks[3]);
return 0;
}