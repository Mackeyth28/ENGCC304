#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;

    // นับจำนวนหลัก
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // คำนวณผลรวมของเลขยกกำลังจำนวนหลัก
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int number;
    printf("Enter Number:\n");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("Pass.\n");
}