// major.c - Menu diven program
#include <stdio.h>
#include "major.h"

int main() {
    int option;
    unsigned int input, result, rotate_amount;

    do {
        printf("Enter the menu option for the operation to perform:\n");
        printf("(1) Count Leading Zeroes\n");
        printf("(2) Endian Swap\n");
        printf("(3) Rotate-right\n");
        printf("(4) Parity\n");
        printf("(5) EXIT\n");
        scanf("%d", &option);

        if (option == 1) {
            // clz.c section
            do {
                printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                scanf("%u", &input);
            } while (input < 1);

            result = count_leading_zeros(input);
            printf("The number of leading zeroes in %u is %u\n", input, result);
            printf("\n");
        }
        else if (option == 2) {
            // endian.c section
            do {
                printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                scanf("%u", &input);
            } while (input < 1);

            result = endian_swap(input);
            printf("Endian swap of %u gives %u\n", input, result);
            printf("\n");
        }
        else if (option == 3) {
            // rotate.c section
            do {
                printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                scanf("%u", &input);
            } while (input < 1);

            do {
                printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
                scanf("%u", &rotate_amount);
            } while (rotate_amount > 31);

            result = rotate_right(input, rotate_amount);
            printf("%u rotated by %u position(s) gives: %u\n", input, rotate_amount, result);
            printf("\n");
        }
        else if (option == 4) {
            // parity.c section
            do {
                printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                scanf("%u", &input);
            } while (input < 1);

            result = bit_parity(input);
            if (result == 0) {
                printf("The Integer provided has an Even Parity\n")
            }
            else {
                printf("The Integer provided has an Odd Parity\n")
            }
        }
        else if (option == 5) {
            printf("Program Has Ended.\n");
        }
        else {
            printf("Error has occurred: Invalid option. Please try again.\n\n");
        }

    } while (option != 5);

    return 0;
}
