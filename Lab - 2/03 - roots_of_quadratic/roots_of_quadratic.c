#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, R;
    float disc, r1, r2, sd;
    printf("ax^2 + bx + c = 0 \nEnter the values of a, b & c: ");
    scanf("%d %d %d", &a, &b, &c);

    disc = pow(b,2) - 4*a*c;

    R = (disc>=0) ? 1 : 2;

    switch (R) {
    case 1:
        r1 = (-b + sqrt(disc))/(2*a);
        r2 = (-b - sqrt(disc))/(2*a);
        printf("Roots of the equation are %.2f & %.2f", r1, r2);
        break;
    case 2:
        sd = sqrt(-disc)/(2*a);
        r1 = (-b)/(2*a);
        printf("%f + %.2fi \n", r1, sd);
        printf("%f - %.2fi", r1, sd);
        break;
    default:
        printf("Invalid");
        break;
    }

}
