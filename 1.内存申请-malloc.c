//
// Created by 任振铭 on 2022/7/14.
//


#include <stdio.h>
#include <stdlib.h>

int main1() {

    int num;
    printf("请输入申请的数组个数：\n");
    scanf("%d", &num);

    //申请内存
    int *arr = malloc(sizeof(int) * num);

    int length = 0;
    int s = 0;
    for (length = 0; length < num; length++) {
        printf("请输入第%d个值\n", length);
        scanf("%d", &s);
        *(arr + length) = s;
        printf("当前元素的值:%d, 当前元素的地址:%p\n", *(arr + length), arr + length);
    }

    for (int i = 0; i < num; ++i) {
        printf("遍历数组，第%d个元素为%d,地址是%p\n", i, *(arr + i), arr + i);
    }

    free(arr);
    arr = NULL;

    return 0;
}