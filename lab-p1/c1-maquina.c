#include <stdio.h>

int main() {
    int price, value, change;
    int ienes[6] = {0, 0, 0, 0, 0, 0};

    scanf("%d", &price);
    scanf("%d", &value);

    change = value - price;
    
    while (change > 0) {
        if (change >= 500) {
            ienes[0]++;
            change -= 500;
        }
        else if (change >= 100) {
            ienes[1]++;
            change -= 100;
        }
        else if (change >= 50) {
            ienes[2]++;
            change -= 50;
        }
        else if (change >= 10) {
            ienes[3]++;
            change -= 10;
        }
        else if (change >= 5) {
            ienes[4]++;
            change -= 5;
        }
        else if (change >= 1) {
            ienes[5]++;
            change -= 1;
        }
    }

    for (int i = 0; i < 6; i++) {
        printf("%d\n", ienes[i]);
    }

    return 0;
}