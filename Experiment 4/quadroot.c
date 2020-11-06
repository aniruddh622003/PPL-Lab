#include <stdio.h>
#include <math.h>

void main(){
    float a,b,c;
    printf("Enter the coeffecients x^2: ");
    scanf("%f", &a);
    printf("Enter the coeffecients x: ");
    scanf("%f", &b);
    printf("Enter the constant: ");
    scanf("%f", &c);

    float check = (b*b) - (4*a*c);
    if (check >=0)
    {
        float d = sqrt(check);
        float x1 = (-b+d)/(2*a);
        float x2 = (-b-d)/(2*a);

        printf("The roots of the equation are %.2f and %.2f", x1, x2);
    }
    else
    {
        printf("This equation has no real roots");
    }
}