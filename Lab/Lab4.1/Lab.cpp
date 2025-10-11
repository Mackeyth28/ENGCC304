#include <stdio.h>

int main() {
    int days;
    printf("Input Days : ");
    scanf("%d", &days);
    int seconds = days * 24 * 60 * 60;
    printf("%d days = %d seconds\n", days, seconds);
    return 0;
}
