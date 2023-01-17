// Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a C
// program to convert this temperature into Centigrade degrees.
// [ C = (F – 32) / 1.8 ]

#include<stdio.h>
int main() {
    float farenhiet;
    printf("enter the temp. in farenhiet: ");
    scanf("%f", &farenhiet);
    printf("the temp. in celcius is : %f", (farenhiet-32)/1.8);
    return 0;
}