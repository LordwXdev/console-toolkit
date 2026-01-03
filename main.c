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

        if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter a number.\n");

        // clear bad input until newline
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) {}

        continue; // go back to menu
        }


        if(choice == 0)
        {
            printf("Good Bye!");
            break;
        }

        switch(choice)
        {
            case 1 : 
            {
                printf("||Calculator||\n");
                double a, b;
                char operation;
                printf("Enter expression(ex : a + b) : \n");
                scanf("%lf %c %lf", &a, &operation, &b);


               switch(operation)
                {
                    case '+':
                    printf("Result: %0.2lf", a + b);
                    printf("\n");
                    break;

                    case '-':
                    printf("Result: %0.2lf", a - b);
                    printf("\n");
                    break;

                    case '*':
                    printf("Result: %0.2lf", a * b);
                    printf("\n");
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
            }
            break;

            case 2:
            {
                printf("||Temperature converter||\n");
                int option;
                double temp;
                
                printf("1. Celsius to Fahrenheit\n");
                printf("2. Fahrenheit to Celsius\n");
                printf("Choose: ");
                scanf("%d", &option);

                printf("Enter temperature: ");
                scanf("%lf", &temp);

                if (option == 1)
                printf("Result: %.2f F\n", (temp * 9 / 5) + 32);
                else if (option == 2)
                printf("Result: %.2f C\n", (temp - 32) * 5 / 9);
                else
                printf("Invalid option\n");

                break;
            }
            break;

            case 3:
            {
                printf("||Unit Converter||\n");
                int option;
                double value;

                printf("1.Meters to Kilometers \n");
                printf("2.Kilometers to Meters \n");
                printf("choose option: ");
                scanf("%d", &option);
                
                if(option == 1)
                {
                    printf("Enter the value: ");
                    scanf("%lf", &value);
                    printf("Result: %.3f km\n", value / 1000);
                }
                else if (option == 2)
                {
                    printf("Enter the value: ");
                    scanf("%lf", &value);
                    printf("Result: %.3f m\n", value * 1000);
                }
                else
                printf("Invalid option\n");

            }
            break;

            case 4 :
            printf("||Simple Statistics||\n");
            break;

            default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}