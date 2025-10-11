#include <stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    for (int i = n; i >= 2; i--) {      // ไล่จาก n ลงไป 2
        int prime = 1;                   // สมมติว่า i เป็นจำนวนเฉพาะ

        for (int j = 2; j <= i / 2; j++) {  // ตรวจสอบตัวหาร
            if (i % j == 0) {
                prime = 0;               // พบตัวหาร -> ไม่ใช่จำนวนเฉพาะ
                break;
            }
        }

        if (prime) {                      // ถ้า prime ยังเป็น 1
            printf("%d ", i);
        }
    }

    return 0;
}

