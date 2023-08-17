#include <stdio.h>
#include <math.h>

int main() {
    double num, sqroot;
    printf("Enter a number: ");
    scanf("%lf", &num);
    sqroot = sqrt(num);
    printf("Square root is %.2lf\n", sqroot);
    return 0;
}
