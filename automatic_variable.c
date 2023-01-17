#include<stdio.h>
void function() {
    int x=10; //also a automatic variable
   auto int y=20; //automatic variable 
printf("Automatic variable : %d\n",y);
}
int main() {
    function();
    return 0;
}