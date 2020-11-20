#include <stdio.h>


void main(){
     printf("Welcome to Area Calculator. Select whose area you want to calculate \n");
    printf("1. Parallelogram \n2. Trapeziod \n3. Rhombus \n4. Circle \n5. Ellipse\n");
    printf("Enter Selection: ");
    int sel;
    scanf("%d", &sel);
    switch (sel)
    {
        case 3:
            {
                float l,b;
                printf("Enter Side: ");
                scanf("%f", &b);
                printf("Enter Height: ");
                scanf("%f", &l);
                float ar = l*b;
                printf("Area of the Rectangle is %.2f", ar);
            }
            break;

        case 2:
            {
                float a,b,h;
                printf("Enter lengths of parallel sides: ");
                scanf("%f %f", &a, &b);
                printf("Enter Height: ");
                scanf("%f", &h);
                float ar = (a+b)*(h/2);
                printf("Area of the Trapezium is %.2f", ar);
            }
            break;
        case 1:
        {
            float l,b;
            printf("Enter Base: ");
            scanf("%f", &b);
            printf("Enter Height: ");
            scanf("%f", &l);
            float ar = l*b;
            printf("Area of the Rectangle is %.2f", ar);
        }
        break;

        case 4:
        {
            float r;
            printf("Enter Radius: ");
            scanf("%f", &r);
            float ar = 3.14*r*r;
            printf("Area of the circle is %.2f", ar); 
        }
        break;

        case 5:
        {
            float a, b;
            printf("Enter major radius: ");
            scanf("%f", &a);
            printf("Enter minor radius: ");
            scanf("%f", &b);
            float ar = 3.14*a*b;
            printf("Area of ellipse is %.2f", ar);
        }
        break;
        
        default: {printf("Invalid Input");}
            break;
        }
}