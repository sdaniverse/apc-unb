#include <stdio.h>

int main() {
    int n, sum_even = 0, sum_odd = 0;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }
        else if (n % 2 == 0) {
            sum_even += n;
        }
        else {
            sum_odd += n;
        }
    }

    printf("%d %d\n", sum_even, sum_odd);
    
    return 0;
}