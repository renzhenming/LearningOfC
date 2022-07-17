//
// Created by 任振铭 on 2022/7/17.
//

#include <stdio.h>

int main20() {
    char *src = "/Users/renzhenming/CLionProjects/LearningOfCPP/9.字符串的查找拼接包含.c";
    FILE *file = fopen(src, "r");
    if (!file) {
        printf("文件打开失败");
        return 0;
    }

    fseek(file, 0, SEEK_END);

    long size = ftell(file);
    printf("文件大小是%d\n", size);
    fclose(file);
}