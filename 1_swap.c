#include <stdio.h>
#include <stdlib.h>

void swap(int m, int n){
    int a = m;
    m = n;
    n = a;
    printf("Numbers after swapping are: %d & %d", m, n); 
}

int main(){
    int m, n;
    printf("Enter two numbers to be swapped:\n");
    scanf("%d", &m);
    scanf("%d", &n);
    printf("Numbers before swapping are: %d & %d\n", m, n);
    swap(m,n);
    return 0;
}