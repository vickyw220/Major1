#include <stdio.h>
#include "major.h"
//vicky created the display menu and main function
int main() {
    int option;
    unsigned int input, result; //,rotate_amount,result;

    do {
        printf("Enter the menu option for the operation to perform:\n");
        printf("(1) Count Leading Zeroes\n");
        printf("(2) Endian Swap\n");
        printf("(3) Rotate-right\n");
        printf("(4) EXIT\n");
        scanf("%d", &option);

        if (option == 1) {
            // clz.c section 

        }
        else if (option == 2) {
            // endian.c section -vicky
            printf("\n");

            do {
                printf("Enter a 32-bit number from no less tham 1 and no greater than 4294967295: ");
                scanf("%u", &input);
            } while (input < 1);

            result = endian_swap(input);
            printf("Endian swap of %u gives %u\n", input, result);

            printf("\n");
        }
        else if (option == 3) {
            // rotate.c section 

        }
        else if (option == 4) {
            printf("Program Has Ended.\n");
        }
        else {
            printf("Error has occured : Invalid option. Please try again.\n");
        }

    } while (option != 4);

    return 0;
}