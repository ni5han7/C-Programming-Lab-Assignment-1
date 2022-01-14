#include <stdio.h>
#include <stdbool.h>

bool checkLeapYear(int year){
    return (((year%4==0)&&(year%100!=0)) || (year%400==0));
}

int main(){
    int y;
    printf("Enter the Year to be checked:\n");
    scanf("%d", &y);
    checkLeapYear(y)? printf("LEAP YEAR") : printf("NOT A LEAP YEAR");
    return 0;
}

