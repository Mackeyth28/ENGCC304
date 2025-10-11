#include <stdio.h>

// ฟังก์ชันสลับค่าตัวเลขโดยใช้ pointer
void swapNumbers(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    // รับค่าจากผู้ใช้
    printf("Enter num1 :\n");
    scanf("%d", &num1);
    printf("Enter num2 :\n");
    scanf("%d", &num2);

    // กำหนด pointer
    ptr1 = &num1;
    ptr2 = &num2;

    // แสดงค่าก่อนสลับ
    printf("Before swap (num1 & num2) : %d, %d\n", num1, num2);

    // เรียกใช้งานฟังก์ชันสลับ
    swapNumbers(ptr1, ptr2);

    // แสดงค่าหลังสลับ
    printf("After swap (num1 & num2) : %d, %d\n", num1, num2);

    return 0;
}
