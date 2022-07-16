#include <strings.h>
#include <stdio.h>

//
// Created by 任振铭 on 2022/7/16.
//
int main8() {

    char *str1 = "renzhenming";
    char *str2 = "Renzhenming";

    int result = strcmp(str1, str2);//区分大小写
    if (result == 0) {
        printf("相等,result = %d\n", result);
    } else {
        printf("不相等,result = %d\n", result);
    }

//    int result2 = strcmpi(str1, str2);//不区分大小写
//    if (result2 == 0) {
//        printf("相等,result = %d\n", result2);
//    } else {
//        printf("不相等,result = %d\n", result2);
//    }
    return 1;
}
