#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int c;
    int solveMeFirst(int a, int b) {
    c=a+b;
    return c;
 
}
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum; 
    sum = solveMeFirst(num1,num2);
    printf("%d",sum);
    return 0;
}
