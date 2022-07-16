//
// Created by 任振铭 on 2022/7/16.
//

#include <stdio.h>

struct ZhiGan {
    char *name;
    int age;
};

struct Tree {
    char *name;
    int age;

    struct ZhiGan zhiGan;

    struct Leaf {
        int num;
        char *name;
    } leaf;
};


int main13() {
    struct Tree tree = {
            "老树",
            12,
            {
                    "主枝干",
                    11
            },
            {
                    10,
                    "一片树叶"
            }
    };

    printf("树的名字是%s\n,树的年龄%d\n,树的枝干，枝干的名字%s\n,树的枝干，枝干的年龄%d\n,树的叶子，叶子的名字%s,树的叶子，叶子的个数%d\n", tree.name, tree.age,
           tree.zhiGan.name, tree.zhiGan.age, tree.leaf.name, tree.leaf.num);


    return 1;
}