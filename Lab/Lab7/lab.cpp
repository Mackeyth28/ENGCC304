#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // ตั้งค่า seed สำหรับสุ่มตัวเลข
    int choice;

    while (1) {
        printf("Do you want to play game (1=play,-1=exit) :\n");
        if (scanf("%d", &choice) != 1) { // ตรวจสอบ input ที่ไม่ใช่ตัวเลข
            while(getchar() != '\n'); // เคลียร์ buffer
            printf("Please enter only 1 or -1.\n\n");
            continue;
        }

        if (choice == -1) {
            printf("See you again.\n");
            break;
        } else if (choice == 1) {
            int score = 100;
            int winning = rand() % 100 + 1;
            int guess;
            int low = 1, high = 100;

            printf("(Score=%d)\n\n", score);

            while (1) {
                printf("Guess the winning number (%d-%d) :\n", low, high);
                if (scanf("%d", &guess) != 1) {
                    while(getchar() != '\n');
                    printf("Please enter a valid number.\n");
                    continue;
                }

                if (guess < winning) {
                    score -= 10;
                    if(score < 0) score = 0;
                    low = guess + 1;
                    printf("Sorry, the winning number is HIGHER than %d. (Score=%d)\n\n", guess, score);
                } else if (guess > winning) {
                    score -= 10;
                    if(score < 0) score = 0;
                    high = guess - 1;
                    printf("Sorry, the winning number is LOWER than %d. (Score=%d)\n\n", guess, score);
                } else {
                    printf("Score this game: %d\n\n", score);
                    printf("That is correct! The winning number is %d.\n\n", winning);
                    break;
                }
            }

        } else {
            printf("Please enter only 1 or -1.\n\n");
        }
    }

    return 0;
}
