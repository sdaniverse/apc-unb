#include <stdio.h>

int main() {
    long long int hour, min, sec;

    scanf("%lld", &hour);

    min = hour * 60;
    sec = min * 60;

    printf("%lld\n", min);
    printf("%lld\n", sec);
    
    return 0;
}