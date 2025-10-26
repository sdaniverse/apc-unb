#include <stdio.h>
#include <math.h>

int main() {
    long long int t = 0, golpes = 0;

    scanf("%lld %lld", &t, &golpes);

    for(int i = 0; i < golpes; i++){

        if(t % 2==0){
            t /= 4;
        }

        t = (2*sqrt(t) - 1);
        t *= t;

        printf("%lld\n", t);
    }

    return 0;
}