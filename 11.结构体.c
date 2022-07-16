//
// Created by 任振铭 on 2022/7/16.
//

#include <string.h>
#include <stdio.h>

struct Manager {
    char name[10];
    int age;
    char *sex;
};

struct Man {
    char name[10];
    int age;
    char *sex;
} man1;

struct Woman {
    char name[10];
    int age;
    char *sex;
} woman1 = {"孙燕姿", 18, "女"},
        woman2 = {"张靓颖", 15, "女"};

int main11() {
    struct Manager manager;
    //成员默认值
    printf("name:%s, age:%d, sex:%s \n", manager.name, manager.age, manager.sex);

    //array type 'char [10]' is not assignable
//    manager.name = "haha"; 错误的，数组不能这样赋值
    strcpy(manager.name, "haha");
    manager.age = 12;
    manager.sex = "男";

    printf("name:%s, age:%d, sex:%s \n", manager.name, manager.age, manager.sex);

    printf("name:%s, age:%d, sex:%s \n", man1.name, man1.age, man1.sex);

    strcpy(man1.name, "刘德华");
    man1.age = 28;
    man1.sex = "男";

    printf("name:%s, age:%d, sex:%s \n", man1.name, man1.age, man1.sex);
    printf("name:%s, age:%d, sex:%s \n", woman1.name, woman1.age, woman1.sex);
    printf("name:%s, age:%d, sex:%s \n", woman2.name, woman2.age, woman2.sex);


    return 1;
}

