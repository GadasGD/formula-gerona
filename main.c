// A program for finding the area of a triangle using Heron's formula
#include <stdio.h>
#include <math.h>

int check(double a, double b, double c); 
double formula(double a, double b, double c);

double a, b, c;
double p;
double result;



int main()
{
    printf("Input a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (check(a, b, c) == 1){
        result = formula(a, b, c);
        printf("Area triangle: %.4lf", result);
    }
    else{
        printf("Triangle with sides: %.2lf %.2lf %.2lf does not exist", a, b, c);
    }
    return 0;
}

int check(double a, double b, double c){
    if (b + c > a && a + c > b && a + b > c){
        return 1;
    } 
    return 0;
}

double formula(double a, double b, double c){
    p = (a + b + c) * 0.5;
    result = sqrt(p *(p - a) * (p - b) * (p - c));

    return result;
}