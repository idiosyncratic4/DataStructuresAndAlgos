#include<stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int number, remainder, reverse=0;
        scanf("%d", &number);
        while(number!=0) {
            remainder=number%10;
            number=number/10;
            reverse = reverse * 10 + remainder;
        }
        printf("%d\n", reverse);
    }
    return 0;
}

