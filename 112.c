#include <stdio.h>
int main()


{


    /*Using switch statement to build a calculator*/

    int option, a, b, c;

    printf("Arithmetic operations:\n");
    printf("\n 1.Addition \n 2.Subtraction \n 3. Division \n 4. Multiplication");
    printf("\n Select an option:");

    scanf("%d", &option);

    printf("Enter first number");
    scanf("%d", &a);
    printf("Enter second number");
    scanf("%d", &b);

    switch(option) {
    case 1 :
        c=a+b;
        printf("%d +%d= %d\n", a, b, c);
        break;

    case 2:
        c=a-b;
        printf("%d-%d=%d\n", a, b, c);
        break;

    case 3:
        c=a/b;
        printf("%d/%d=%d\n", a, b, c);
        break;
    case 4 :
        c=a*b;
        printf("%d*%d=%d\n", a, b, c);
        break;

    }



}
