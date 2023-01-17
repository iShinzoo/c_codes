#include<stdio.h>
#include<time.h>
int main() {
    time_t seconds;
    seconds=time(NULL);
    printf("Seconds since January 16,2023 = %ld\n",seconds);
    return 0;
}