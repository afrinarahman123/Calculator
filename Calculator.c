#include <stdio.h>
#include <math.h>

int main()
{
    int op, n, i;
    int fact;
    float a, b;

    do
    {
        printf("\n===== CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Square\n");
        printf("7. Cube\n");
        printf("8. Square Root\n");
        printf("9. Power\n");
        printf("10. Factorial\n");
        printf("0. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a * b);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);

                if(b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by zero is not possible.\n");
                break;

            case 5:
            {
                int x, y;
                printf("Enter two integers: ");
                scanf("%d %d", &x, &y);
                printf("Result = %d\n", x % y);
                break;
            }

            case 6:
                printf("Enter a number: ");
                scanf("%f", &a);
                printf("Square = %.2f\n", a * a);
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%f", &a);
                printf("Cube = %.2f\n", a * a * a);
                break;

            case 8:
                printf("Enter a number: ");
                scanf("%f", &a);

                if(a >= 0)
                    printf("Square Root = %.2f\n", sqrt(a));
                else
                    printf("Invalid Input\n");
                break;

            case 9:
                printf("Enter base and power: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", pow(a, b));
                break;

            case 10:
                printf("Enter a positive integer: ");
                scanf("%d", &n);

                fact = 1;

                for(i = 1; i <= n; i++)
                {
                    fact = fact * i;
                }

                printf("Factorial = %d\n", fact);
                break;

            case 0:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(op != 0);

    return 0;
}
