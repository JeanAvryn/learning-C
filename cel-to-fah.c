// C to F converter
#include <stdio.h>

int main() {
    double celsius, f;
    
    printf("Enter celsius: ");
    scanf("%lf", &celsius);
    
    f = celsius * 1.8 + 32;
    printf("%lf to Fahrenheit is %lf", celsius, f);

    return 0;
}
