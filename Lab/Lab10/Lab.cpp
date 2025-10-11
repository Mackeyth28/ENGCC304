#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    int len, i, flag = 1;

    printf("Enter word:\n");
    scanf("%s", word);

    len = strlen(word);

    // ตรวจสอบตัวอักษรแบบไม่สนใจพิมพ์ใหญ่/เล็ก
    for(i = 0; i < len / 2; i++) {
        if(tolower(word[i]) != tolower(word[len - i - 1])) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
