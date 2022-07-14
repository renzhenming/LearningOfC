//
// Created by 任振铭 on 2022/7/14.
//
#include <stdio.h>

int main3() {
    int arr[5]; // 静态开辟 栈区 （栈成员）,可能导致栈内存益处

    for (int i = 0; i < 5; ++i) {
        arr[i] = i;
        printf("%d, %p\n", *(arr + i), arr + i);
    }
    return 0;
}
