#include <stdio.h>
#include <stdlib.h>

// Recursive method to find the factorial of n
long int fact(int n){
    if(n==0)
        return 1;
    return n * fact(n - 1);
}

int main(){
    int n;
    printf("Enter the number whose factorial is to be find:\n");
    scanf("%d", &n);
    printf("Factorial of %d is: %ld", n, fact(n));
    return 0;
}