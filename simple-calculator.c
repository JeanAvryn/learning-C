#include <stdio.h>

int main() {
    
    int x, y;
    char oper;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a number: ");
    scanf("%d", &y);
    printf("Enter an operation: ");
    scanf(" %c", &oper);
    
    switch (oper) {
        case '+':
            printf("%d %c %d = %d\n", x, oper, y, x+y);
            break;
        case '-':
            printf("%d %c %d = %d\n", x, oper, y, x-y);
            break;
        case '*':
            printf("%d %c %d = %d\n", x, oper, y, x*y);
            break;
        case '/':
            printf("%d %c %d = %d\n", x, oper, y, x/y);
            break;
        default:
            printf("Invalid.");
            break;
    }

    return 0;
}
