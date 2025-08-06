#include <stdio.h>

int main() {
    char EmpId[11];  // จำกัดไว้ที่ 10 ตัวอักษร + null terminator
    int hrs;
    float rate, salary;

    printf("Enter Employee ID (max 10 characters): ");
    scanf("%10s", EmpId);  // จำกัด input ไม่เกิน 10 ตัว

    printf("Enter total working hours: ");
    scanf("%d", &hrs);

    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    salary = hrs * rate;

    printf("===========================\n");
    printf("Employee ID   : %s\n", EmpId);
    printf("Total Salary  : $%.2f\n", salary);
    printf("===========================\n");

    return 0;
}
