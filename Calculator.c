#include <stdio.h>
int main(){
    int a, b;
    char op;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the Operation: ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
     printf("The sum of a and b is %d",a+b);
     break;
     case '-':
     printf("The difference of a and b is %d",a-b);
     break;
     case '*':
     printf("The product of a and b is %d",a*b);
     break;
     case '/':
     printf("The quotient of a and b is %d",a/b);
     break;
     case '%':
     printf("The remainder of a and b is %d",a%b);
     break;
    default:
     printf("Invalid Operation");
     break;
    }

}
