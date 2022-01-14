#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

double areaOfCircle(float r){
    double area;
    area = PI*r*r;
    return area;
}

int main(){
    float r;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &r);
    printf("Area of the circle is: %lf square units", areaOfCircle(r));
    return 0;
}