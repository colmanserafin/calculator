#include <stdio.h>

int main() {
    int choice, a, b;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Remainder\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6) {
        	printf("Exiting....");
            break;
        }

        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);

        switch (choice) {
            case 1:
                printf("Result: %d\n", a + b);
                break;
            case 2:
                printf("Result: %d\n", a - b);
                break;
            case 3:
                printf("Result: %d\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Result: %d\n", a / b);
                else
                    printf("Division by zero is not allowed.\n");
                break;
            case 5:
                if (b != 0)
                    printf("Remainder: %d\n", a % b);
                else
                    printf("Division by zero is not allowed.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}

