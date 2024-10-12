#include <stdio.h>
int main() {
    int num = 100;
    printf("Numeri pari compresi tra 1 e 100 in ordine inverso:\n");
    while (num >= 2) {
        if (num % 2 == 0) {
            printf("%d\n", num);
        }
        num--;
    }
}