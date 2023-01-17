#include<stdio.h>
int main() {
    char c;
    printf("Enter the character : ");
    scanf("%c",&c);
    if(c>='a'&&c<='z'){
        printf("small case letter");
    } else if (c>='A'&&c<='Z'){
        printf("capital letter");
    } else if (c>='1'&&c<='9'){
        printf("a digit");
    }
    else {
        printf("special symbol");
    }
    return 0;
}