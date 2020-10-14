#include <stdio.h>
#include "btree.h"

int main() {
    struct node * root;
    make_sample_tree(&root);
    pre_order(root);

    //printf("Hello, World!\n");
    return 0;
}
