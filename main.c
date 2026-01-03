#include<stdio.h>

int main()
{
    int choice;
    while (1)
    {
     printf("\n=== Console Toolkit ===\n");
        printf("1. Calculator\n");
        printf("2. Temperature Converter\n");
        printf("3. Unit Converter\n");
        printf("4. Simple Statistics\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if(choice == 0)
        {
            printf("Good Bye!");
            break;
        }

        switch(choice)
        {
            case 1 : 
            {
            printf("||Calculator||");
            double a, b;
            char operation;
            printf("Enter expression(ex : a + b) : ");
            scanf("%lf %c %lf", &a, &operation, &b);


                switch(operation)
                {
                    case '+':
                    printf("Result: %0.2lf", a + b);
                    break;

                    case '-':
                    printf("Result: %0.2lf", a - b);
                    break;

                    case '*':
                    printf("Result: %0.2lf", a * b);
                    break;

                    case '/':
                   if (b != 0)
                    printf("Result: %.2f\n", a / b);
                    else
                    printf("Error: Division by zero\n");
                    break;
                    default:
                    printf("Invalid operator\n");
                }
            break;

            case 2:
            printf("||Temperature converter||");
            break;

            case 3:
            printf("||Unit Converter||");
            break;

            case 4 :
            printf("||Simple Statisticsz||");
            break;

            default:
            printf("Invalid choice");
        }
    }
    return 0;
}