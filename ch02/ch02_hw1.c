//2주차-과제1 포인터 배열을 이용해 문자열 저장하고 출력하기

#include <stdio.h>

int main(void) {
    
    char *address1[] = {
        "Korea",
        "Seoul",
        "Mapo",
        "152번지 2 / 3"
    };

    char *address2[] = {
        "Korea",
        "Seoul",
        "Jongno",
        "152번지 2 / 3"
    };
    
    for (int i = 0; i < 4; i++) {
        printf("%s\n", address1[i]);
    }

    printf("\n");

    
    for (int i = 0; i < 4; i++) {
        printf("%s\n", address2[i]);
    }

    return 0;
}
