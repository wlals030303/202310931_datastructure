//2주차-과제2 1차원 배열 이용 하여 문자열 입력 및 길이 계산!

#include <stdio.h>

int main(void) {
    char str[100];
    int length = 0;

    printf("문자열을 입력하세요 : ");
    scanf("%s", str);

    printf("\n입력된 문자열은\n\"%s\"\n입니다.\n", str);

    
    while (str[length] != '\0') {
        length++;
    }

    printf("\n입력된 문자열의 길이 = %d\n", length);

    return 0;
}
