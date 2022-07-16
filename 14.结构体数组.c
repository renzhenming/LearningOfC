//
// Created by 任振铭 on 2022/7/16.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cat {
    char name[10];
    int age;
};

int main14() {

    struct Cat cat[6] = {
            {"波斯猫", 1},
            {"荷兰猫", 2},
            {"田园猫", 3},
            {},
            {},
            {}
    };
    // VS的写法
//    cat[3] = {"广州猫",12};

    // ClION的写法
    struct Cat c = {"广州猫", 12};
    cat[3] = c;
    printf("%s,%d\n", cat[3].name, cat[3].age);

    struct Cat cc = {"河南猫", 2};
    *(cat + 4) = cc;
    printf("%s,%d\n", cc.name, cc.age);


    struct Cat *c4 = malloc(sizeof(struct Cat));
    strcpy(c4->name, "火星猫");
    c4->age = 100;

    printf("%s,%d\n", c4->name, c4->age);
    free(c4);
    c4 = NULL;
    return 1;
}