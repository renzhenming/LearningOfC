//
// Created by 任振铭 on 2022/7/14.
//

#include <stdio.h>
#include <stdlib.h>

int main2() {

    int num;
    printf("请输入申请的数组个数：\n");
    scanf("%d", &num);

    //申请内存，堆区开辟
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

    //再次申请------------------------------
    int num2;
    printf("请输入需要扩展的个数：\n");
    scanf("%d", &num2);


    int in;
    int *new_arr = realloc(arr, sizeof(int) * (num + num2));
    if (!new_arr) {
        printf("realloc失败\n");
        return 0;
    }

    for (int i = num; i < num + num2; ++i) {
        printf("请输入第%d个值\n", i);
        scanf("%d", &in);
        *(new_arr + i) = in;
        printf("当前元素的值:%d, 当前元素的地址:%p\n", *(arr + i), arr + i);
    }

    for (int i = 0; i < num + num2; ++i) {
        printf("遍历数组，第%d个元素为%d,地址是%p\n", i, *(arr + i), arr + i);
    }

    /**
     * 两个地址是同一个，重复free报错，所以free新的就可以了
     */
//    if (arr) {
//        free(arr);
//        arr = NULL;
//    }
//
//    if (new_arr) {
//        free(new_arr);
//        new_arr = NULL;
//    }

    if (new_arr) {
        free(new_arr);
        new_arr = NULL;
    }

    return 0;
}