#include <stdio.h>
#include <stdint.h>
#include "libs/bit_array.h"
#include "libs/binary_tree.h"

int main() {
    struct node * root;
    make_sample_tree(&root);
    //pre_order(root);

    bit_array my_bits = bit_array_create();
    bit_array_init(my_bits, 32);
    bit_array_add_bit(my_bits, 1);
    bit_array_add_bit(my_bits, 1);
    bit_array_add_bit(my_bits, 1);
    bit_array_add_byte(my_bits, 'a');
    bit_array_add_byte(my_bits, 'g');

    char c = bit_array_check_byte(my_bits, 3);
    printf("\nmy char: %c\n", c);

    c = bit_array_check_byte(my_bits, 11);
    printf("\nmy char: %c\n", c);

    for (size_t i = 0; i < my_bits->bit_length; i++) {
        printf("%d ", bit_array_check_bit(my_bits, i));
    }


    //printf("Hello, World!\n");
    return 0;
}
