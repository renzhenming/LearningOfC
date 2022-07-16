//
// Created by 任振铭 on 2022/7/15.
//
#include <stdio.h>
#include <string.h>

int getLength(char arr[8]);

int getLength2(int pInt[7]);


/**
数组的长度是8
通过第一种方式获取长度等于8,sizeof(arr) = 8
通过方法获取数组的长度是8
---------int数组--------------
数组的长度是28
通过第一种方式获取长度等于2,sizeof(arr) = 8
通过方法获取数组的长度是7
 * @return
 */
int main6() {


    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', '0','\0'};
    //第一种方式
    int length = sizeof(arr) / sizeof(char);
    printf("数组的长度是%d\n", length);




    int size = getLength(arr);
    printf("通过方法获取数组的长度是%d\n", length);


    int length2 = strlen(arr);
    printf("通过内置方法获取数组的长度是%d\n", length2);

    printf("---------int数组--------------\n");

    int array[] = {1, 2, 3, 4, 5, 6, 7};
    //第一种方式
    int length1 = sizeof(array) / sizeof(char);
    printf("数组的长度是%d\n", length1);
    int size2 = getLength2(array);
    printf("通过方法获取数组的长度是%d\n", size2);

    return 1;
}

int getLength(char *arr) {
    int length = sizeof(arr) / sizeof(char);
    printf("通过第一种方式获取长度等于%d,sizeof(arr) = %d\n", length, sizeof(arr));

    int l = 0;
    while (*arr) {
        arr++;
        l++;
    }
    return l;
}

/**
 * 当数组作为方法参数传递时，会被作为指针传递，所以sizeof(arr)是8
 * @param arr
 * @return
 */
int getLength2(int *arr) {
    int length = sizeof(arr) / sizeof(int);
    printf("通过第一种方式获取长度等于%d,sizeof(arr) = %d\n", length, sizeof(arr));

    int l = 0;
    while (*arr) {
        arr++;
        l++;
    }
    return l;
}


