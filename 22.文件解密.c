//
// Created by 任振铭 on 2022/7/17.
//

#include <stdio.h>

int main() {
    char *src = "/Users/renzhenming/CLionProjects/LearningOfCPP/9.字符串的查找拼接包含_encrypt.c";
    char *dst = "/Users/renzhenming/CLionProjects/LearningOfCPP/9.字符串的查找拼接包含_decrypt.c";
    FILE *file = fopen(src, "rb");
    FILE *dstFile = fopen(dst, "wb");
    if (!file || !dstFile) {
        printf("文件打开失败");
        return 0;
    }

    char c;
    while ((c = fgetc(file)) != EOF) {
        fputc(c ^ 5, dstFile);
    }

    fclose(file);
    fclose(dstFile);

    return 1;
}