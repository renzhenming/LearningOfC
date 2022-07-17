//
// Created by 任振铭 on 2022/7/16.
//


#include <stdio.h>

enum Week {
    M,
    T,
    W
};

//兼容写法
typedef enum {
    ONE,
    TWO,
    THREE
} MONTH;


int main16() {
    enum Week one = M;
    enum Week two = T;
    enum Week THREE = W;
    printf("%d, %d, %d \n", one, two, THREE);


    MONTH o = ONE;
    MONTH w = TWO;
    MONTH t = THREE;
    printf("%d, %d, %d \n", o, w, t);
    return 1;
}
