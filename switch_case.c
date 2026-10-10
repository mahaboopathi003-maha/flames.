#include <stdio.h>

int main(void) {
    int choice;

    printf("1. Hello\n2. Goodbye\nChoose 1 or 2: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("Hello!\n");
            break;
        case 2:
            printf("Goodbye!\n");
            break;
        default:
            printf("Please choose 1 or 2.\n");
    }

    return 0;
}
