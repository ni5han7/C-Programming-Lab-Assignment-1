#include <stdio.h>
#include <stdlib.h>

int quotient(int m, int n){
    return (m/n);
}

int remaindr(int m, int n){
    return (m%n);
}

int main(){
    int m, n;
    printf("Enter the dividend and divider:\n");
    scanf("%d", &m);
    scanf("%d", &n);
    printf("Quotient and Remainder are: %d & %d", quotient(m,n), remaindr(m,n));
    return 0;
}