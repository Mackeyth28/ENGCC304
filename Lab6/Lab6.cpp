#include <stdio.h>

int main() {

    int N;

    printf("enter value:\n");
    scanf("%d", &N);

    printf("series: ");

    if (N % 2 == 1) {
        // กรณีเลขคี่: พิมพ์เลขคี่จาก 1 ถึง N
        for (int i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }
    } else {
        // กรณีเลขคู่: พิมพ์เลขคู่จาก N ถึง 0
        for (int i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}