#include<stdio.h>
#include<math.h>

int main()
{
    int choice, i,m,n,f ,fact = 1;
    float a,b,x,y;

    printf("'Simple Calculator'\n");
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

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
            if (a == (int)a && b == (int)b )
               {
                   printf("Addition = %.0f", a + b);
               }
              else
               {
                   printf("Addition = %.2f", a + b);
               }
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
            if (a == (int)a && b == (int)b )
               {
                   printf("Subtraction = %.0f", a - b);
               }
              else
               {
                   printf("Subtraction = %.2f", a - b);
               }
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
            if (a == (int)a && b == (int)b )
               {
                   printf("Multiplication = %.0f", a * b);
               }
              else
               {
                   printf("Multiplication = %.2f", a * b);
               }
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
            if(b==0)
            {
                printf(" Math Error ");
            }
            else{
                    if (a == (int)a && b == (int)b )
                        {
                          printf("Division = %.0f", a / b);}
                    else {
                        printf("Division = %.2f", a / b);}
                }
            break;

        case 5:
            printf("Enter two numbers: ");
            scanf("%d%d", &m, &n);
            printf("Modulus = %d", m % n);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%f", &a);
            if (a == (int)a){
                printf("Square = %.0f", a * a);
            }
            else {
            printf("Square = %.2f", a * a);}
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%f", &a);
            if (a == (int)a){
                    printf("Cube = %.0f", a * a * a);}
            else {
                    printf("Cube = %.2f", a * a * a);}
            break;

        case 8:
            printf("Enter a number: ");
            scanf("%f", &a);
            if(a<0)
            {
                printf(" Math Error ");
            }
            if (a == (int)a){printf("Square Root = %.0f", sqrt(a));}
            else {
            printf("Square Root = %.2f", sqrt(a));}
            break;

        case 9:
            printf("Enter base and power: ");
            scanf("%f%f", &a, &b);
            if (a == (int)a && b == (int)b) {printf("Power = %.0f", pow(a, b));}
            else {printf("Power = %.2f", pow(a, b));}
            break;

        case 10:
            printf("Enter a number: ");
            scanf("%f", &a);
            if ( a<0)
                 {
                printf("Factorial is not defined for negative numbers");
                 }
            else if(a!=(int) a) {
                printf("Factorial is not defined for decimal numbers");
            }
            else {
                   for(i = 1; i <= a; i++)
                      {
                          fact = fact * i;
                      }
            printf("Factorial = %d", fact);}
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}
