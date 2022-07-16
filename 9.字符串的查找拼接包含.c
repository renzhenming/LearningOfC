//
// Created by 任振铭 on 2022/7/16.
//

#include <string.h>
#include <stdio.h>

int main9() {

    //查找位置
    char *str = "renzhenming is a good man";
    char *str2 = "good";

    //查找以good开头的字符串，从good开始到结束，都会给到result
    char *result = strstr(str, str2);
    if (result) { // 非NULL，就进入if，就查找到了
        printf("查找到了,result的值是:%s\n", result);
    } else {
        printf("没有查找到,subtext的值是:%s\n", str2);
    }

    //那么这个位置是多少呢, 数组是一块连续的内存空间，没有断层，所以可以-
    int index = result - str;
    printf("%s第一次出现的位置是%d\n", str2, index);


    //字符串拼接
    char *dest[20];// 容器 25的大小 已经写死了

    char *c = "c";
    char *java = "java";
    char *cpp = "C++";

    strcpy(dest, c);// 先Copy到数组里面去
    strcat(dest, java);// 然后再拼接
    strcat(dest, cpp);// 然后再拼接
    printf("拼接后的值是%s\n", dest);
    return 1;
}