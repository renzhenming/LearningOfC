//
// Created by 任振铭 on 2022/7/16.
//

#include <stdio.h>
#include <stdlib.h>

struct Animal {
    char *name;
    int age;
};

int main12() {

    //栈中
    struct Animal animal = {"小野猫", 20};

    printf("%s,%d\n", animal.name, animal.age);
    struct Animal *anim = &animal;
    anim->name = "金丝猫";
    anim->age = 19;

    printf("%s,%d\n", animal.name, animal.age);

    //堆中
    //VS的写法：Animal * an2 = (Animal *) malloc(sizeof(Animal));
    struct Animal *an2 = malloc(sizeof(struct Animal));
    an2->age = 30;
    an2->name = "狸花猫";
    //指针用->指向，结构体用.指向
    printf("%s,%d\n", an2->name, an2->age);
    free(an2);
    an2 = NULL;
}