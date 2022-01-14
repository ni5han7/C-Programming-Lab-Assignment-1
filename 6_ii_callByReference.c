// C program to illustrate
// Call by Reference

#include <stdio.h>
#include <stdlib.h> 

// Function Prototype
void swap(int*, int*);

// Main function
int main(){
    int a = 10, b = 20;

    // Pass reference
    swap(&a, &b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}

// Function to swap two variables
// by references
void swap(int* x, int* y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("x=%d y=%d\n", *x, *y);
}