//
// Created by 任振铭 on 2022/7/16.
//

#include <ctype.h>
#include <stdio.h>

void lower(char *src, char *dst) {
    char *temp = src;
    while (*temp) {
        *dst = tolower(*temp);
        temp++;
        dst++;
    }
    *dst = '\0';
}


int main() {
    char *str = "RZM";
    char arr[10];

    lower(str, arr);
    printf("%s\n", arr);
    return 1;
}
