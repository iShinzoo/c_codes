#include<stdio.h>
int main() {
    char a;
    printf("enter the character a : ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        printf("The character is vowel");
    } else {
        printf("The character is consonant");
    }
    return 0;
}