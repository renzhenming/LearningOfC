//
// Created by 任振铭 on 2022/7/14.
//
#include <stdio.h>

int method2(int n1, int n2) {
    return n1 + n2;
}


int method1(int age, int age2, int (*call)(int, int)) {
    return call(age, age2);
}

int main4() {
    int age = method1(12, 13, method2);
    printf("%d", age);
    return 0;
}