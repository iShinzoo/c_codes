#include<stdio.h>
int main() {
printf("current file : %s\n",__FILE__);
printf("date of compilation : %s\n",__DATE__);
printf("time of compilation : %s\n",__TIME__);
printf("line number : %d",__LINE__);
    return 0;
}