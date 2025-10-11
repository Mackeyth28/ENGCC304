#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N;
    printf("Enter N :\n");
    scanf("%d", &N);

    int arr[N];

    // รับค่าจากผู้ใช้
    for (int i = 0; i < N; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }

    // แสดงผลลัพธ์
    printf("Index: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", i);
    }
    printf("\nArray: ");
    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
        else
            printf("# ");
    }
    printf("\n");

    return 0;
}
