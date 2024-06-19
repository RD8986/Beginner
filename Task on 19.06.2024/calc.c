#include <stdio.h>
int main()
{
    char op;
    double first, second, result;
    printf("Enter two Numbers : ");
    scanf("%lf %lf", &first, &second);
    while (1)
    {
        printf("\n Enter an operator (+, -, *, /) or 'x' to exit: ");
        scanf(" %c", &op);
        if (op == 'x' && op != 'X')
        {
            break;
        }

        if (op == '+')
        {
            result = first + second;
            printf("%.1lf + %.1lf = %.1lf", first, second, result);
        }
        else if (op == '-')
        {
            result = first - second;
            printf("%.1lf - %.1lf = %.1lf", first, second, result);
        }
        else if (op == '*')
        {
            result = first * second;
            printf("%.1lf * %.1lf = %.1lf", first, second, result);
        }
        else if (op == '/')
        {
            if (second != 0.0)
            {
                result = first / second;
                printf("%.1lf / %.1lf = %.1lf", first, second, result);
            }
            else
            {
                printf("Error Division by zero");
            }
        }
        else
        {
            printf("Error Invalid operator");
        }
    }

    printf("Calculator program terminated.\n");
    return 0;
}