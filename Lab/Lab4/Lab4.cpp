#include <stdio.h>

int main() {
    char empID[11]; // เก็บรหัสพนักงานไม่เกิน 10 ตัวอักษร + 1 สำหรับ null
    int hours;
    double rate, salary;

    printf("Input the Employees ID(Max. 10 chars): \n");
    scanf("%10s", empID);

    printf("Input the working hrs: \n");
    scanf("%d", &hours);

    printf("Salary amount/hr: \n");
    scanf("%lf", &rate);

    salary = hours * rate;

    printf("Employees ID = %s\n", empID);
    printf("Salary = U$ %.2lf\n", salary);

    return 0;
}
