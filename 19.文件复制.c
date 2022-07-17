//
// Created by 任振铭 on 2022/7/17.
//

#include <stdio.h>

/**
 * "r" = "rt"
打开一个文本文件，文件必须存在，只允许读
"r+" = "rt+"
打开一个文本文件，文件必须存在，允许读写
"rb"
打开一个二进制文件，文件必须存在，只允许读
“rb+”
打开一个二进制文件，文件必须存在，允许读写
"w" = “wt”
新建一个文本文件，已存在的文件将内容清空，只允许写
"w+" = "wt+"
新建一个文本文件，已存在的文件将内容清空，允许读写
“wb”
新建一个二进制文件，已存在的文件将内容清空，只允许写
“wb+”
新建一个二进制文件，已存在的文件将内容清空，允许读写
"a" = "at"
打开或新建一个文本文件，只允许在文件末尾追写
"a+" = "at+"
打开或新建一个文本文件，可以读，但只允许在文件末尾追写
“ab”
打开或新建一个二进制文件，只允许在文件末尾追写
“ab+”
打开或新建一个二进制文件，可以读，但只允许在文件末尾追写
对于文件使用方式有以下几点说明：
⑴文件使用方式由r,w,a,t,b，+六个字符拼成，各字符的含义是：
r(read): 只读
w(write): 只写
a(append): 追加
t(text): 文本文件，可省略不写
b(binary): 二进制文件
 * @return
 */
int main19() {
    char *src = "/Users/renzhenming/CLionProjects/LearningOfCPP/9.字符串的查找拼接包含.c";
    char *dest = "/Users/renzhenming/CLionProjects/LearningOfCPP/9.字符串的查找拼接包含_copy.c";

    // fopen打开文件的意思（参数1：文件路径 文件源，  参数2：模式 r(读) w(写)  rb(作为二进制文件读) rw(作为二进制文件写)  返回值 FILE 结构体）
    FILE *file = fopen(src, "rb");
    FILE *dstFile = fopen(dest, "wb");
    if (!file || !dstFile) {
        printf("文件打开失败\n");
        return 0;
    }
    // fread：参数1：容器buffer， 参数2：每次偏移多少 int， 参数3：容器大小
    int buffer[514];
    int len = 0;
    while ((len = fread(buffer, sizeof(int), sizeof(buffer) / sizeof(int), file)) != 0) {
        fwrite(buffer, sizeof(int), len, dstFile);
    }
    printf("文件复制成功\n");
    fclose(file);
    fclose(dstFile);

    return 0;
}