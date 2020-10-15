#include "binary_tree.h"

void pre_order(struct node *t) {
    if(t != NULL){
        printf("%c->",t->data);
        pre_order(t->left);
        pre_order(t->right);
    }
}

void init_node(struct node ** new_node, int data) {
    *new_node = malloc(sizeof(struct node));
    (*new_node)->data = data;
}

void make_sample_tree(struct node ** root) {
    init_node(root, 'A');

    struct node * left_1;
    init_node(&left_1, 'B');
    struct node * right_1;
    init_node(&right_1, 'C');

    struct node * left_11;
    init_node(&left_11, 'D');
    struct node * left_12;
    init_node(&left_12, 'E');

    struct node * right_11;
    init_node(&right_11, 'F');
    struct node * right_12;
    init_node(&right_12, 'G');

    struct node * right_111;
    init_node(&right_111, 'H');
    struct node * right_112;
    init_node(&right_112, 'I');

    (*root)->left = left_1;
    (*root)->right = right_1;

    left_1->left = left_11;
    left_1->right = left_12;

    right_1->left = right_11;
    right_1->right = right_12;

    right_11->left = right_111;
    right_11->right = right_112;
}