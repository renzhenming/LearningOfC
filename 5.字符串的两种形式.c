//
// Created by 任振铭 on 2022/7/15.
//
#include <stdio.h>

int main5() {
    char arr[] = {'r', 'z', 'm','\0'};
    //可以访问，字符串在静态区存储，但是会拷贝一份到栈中，所以修改的是栈中的
    arr[2] = 'i';
    printf("%s\n", arr);

    char *p = "renzhenming\0";
    //不允许访问，字符串在静态区存储，不能被修改
//    p[2] = 'h';
//    *(p + 2) = 'y';
    printf("%s\n", p);
    return 1;
}