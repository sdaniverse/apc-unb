#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    char mens[1000];
    for (int i = 0; i < n; i++) {
        scanf("%[^\n]", mens);
        getchar();
        
        for (int j = 0; mens[j] != '\0'; j++) {
            if (mens[j] >= 'A' && mens[j] <= 'Z') {
                if (mens[j] < 'N')
                    mens[j] += 'N' - 'A';
                else
                    mens[j] -= 'N' - 'A';
            }
        }

        for (int k = 0; mens[k] != '\0'; k++) {
            printf("%c", mens[k]);
        }

        printf("\n");
    }

    return 0;
}