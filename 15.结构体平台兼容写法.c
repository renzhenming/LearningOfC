//
// Created by 任振铭 on 2022/7/16.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Teacher {
    char name[10];
    int age;
};

typedef struct Teacher Teacher; //不定义这一句，在Clion中 "Teacher t = {"李老师",30};"这个写法编译会失败



//标准写法
// 源码是这样写的
// 给结构体AV 取了一个别名等于AV
typedef struct {
    char name[100];
    int age;
    char sex;
} Student;


int main15() {

    //结构体的写法在VS和CLion写法不相同，那么怎么保证一套代码在两个平台都能使用呢？typedef
    //？ C库的源码，系统源码...，为什么 typedef 还取一个和结构体一样的名字（兼容代码的写法，保持一致）

    //VS写法
    //Teacher t = {"李老师",30};

    //CLino写法
    struct Teacher t = {"王老师", 12};

    //typedef struct Teacher Teacher;之后的效果
    Teacher t2 = {"李老师", 30};
    printf("%s,%d\n", t2.name, t2.age);

    Student *stu = malloc(sizeof(Student));
    strcpy(stu->name, "学生小王");
    stu->age = 12;
    stu->sex = 'n';

    printf("%s,%d,%c\n", stu->name, stu->age, stu->sex);


    return 1;
}