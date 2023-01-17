#include<stdio.h>
int main() {
char str[]="KRSNA";
char *ptr=str;
while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
}

return 0;
}
// another way
// #include<stdio.h>
// int main() {
// char *ptr="KRSNA";
// printf("%s",ptr);
// return 0;
// }