#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int factorial(int n) {
    if(n<=1)
        return(1);
    else 
        return(n*factorial(n-1));
        

}

int main() {
    int n; 
    scanf("%i", &n);
    int result = factorial(n);
    printf("%d\n", result);
    return 0;
}
