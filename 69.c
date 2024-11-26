//AREA OF TRIANGLE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


    printf("Purpose of this Project\n\n");
    printf("       To find area of triangle:-\n\n");
    double ans,A,B,C,s,a,b,c = 0;
    printf("Press 1 if you have the height and base of triangle.\n");
    printf("press any other key if you have the length of the sides of triangle\n");
    printf("Enter your choice: ");
    scanf("%lf",&c);
    if (c == 1) {
        printf("Enter the base of the triangle: ");
        scanf("%lf",&b);
        b = b/2;
        printf("Enter the height of the triangle: ");
        scanf("%lf",&a);
        printf("So the Area of the triangle is: %f",b*a);
    } else  {
        printf("Enter the length of side A: ");
        scanf("%lf",&A);
        printf("Enter the length of side B: ");
        scanf("%lf",&B);
        printf("Enter the length of side C: ");
        scanf("%lf",&C);
        if (A+B>C){
            if (A+C>B) {
                if (B+C>A) {
                s = A + B + C;
                s = s/2;
                A = s - A;
                B = s - B;
                C = s - C;
                s = s * A * B * C;
                ans = sqrt(s);
                printf("So the Area of the triangle is: %lf",ans);
                }else {
                printf("It isn't a triangle!");
                return 0;
                }
            } else {
            printf("It isn't a triangle!");
            return 0;
            }
        } else {
        printf("It isn't a triangle!");
        return 0;
        }
    }
    return 0;
}