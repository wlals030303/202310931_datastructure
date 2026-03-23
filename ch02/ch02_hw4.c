//2주차-과제4 3차원 배열을 이용해 문자배열 입출력하기
#include <stdio.h>

int main(void) {
    char student[2][3][50];
    char *labels[] = {"이름", "학과", "학번"};

   
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("학생 %d의 %s : ", i + 1, labels[j]);
            scanf(" %[^\n]s", student[i][j]);
        }
        printf("\n");
    }

    printf("--------------------\n\n");

   
    for (int i = 0; i < 2; i++) {
        printf("학생 %d\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("    ");
            for (int k = 0; student[i][j][k] != '\0'; k++) {
                printf("%c", student[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
