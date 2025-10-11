#include <stdio.h>

int main() {
    int num;
    printf("User Input :");
    scanf("%d", &num);

    char *words[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    if (num >= 0 && num < 20) {
        printf("Result : %s\n", words[num]);
    } else {
        printf("Number out of range\n");
    }

    return 0;
}
