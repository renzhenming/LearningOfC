//
// Created by 任振铭 on 2022/7/16.
//

#include <stdlib.h>
#include <stdio.h>

int main7() {
    char *temp = "123";
    int i = atoi(temp);
    printf("%d\n", i);


    char *temp2 = "123456";
    int i2 = atol(temp2);
    printf("%d\n", i2);


    char *temp3 = "123456aaaa"; //也没有报错，只是非数字没有被转换，得到的结果是123456
    int i3 = atol(temp3);
    printf("%d\n", i3);

    char *temp4 = "aaaa123456aaaa"; //也没有报错，只是非数字没有被转换，得到的结果是123456
    int i4 = atol(temp4);
    if (i4) {
        printf("%d\n", i4);
    } else {
        printf("转换失败，结果是%d\n", i4);
    }
    return 1;
}