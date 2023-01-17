#include<stdio.h>
void function() {
    int x=20;
    static int y = 30;
    x=x+10;
    y=y+10;
    printf("\tlocal : %d\n\tstatic : %d\n",x,y);
}
int main() {
    printf("First call\n");
    function(); 
    printf("second call\n");
    function();
    printf("third call\n");
    function();
    return 0;
}
// local variable value remains same for all calls but static vaiable value changes 