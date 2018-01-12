#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {  
   double m,b,c;
    int a,t,sum;
    scanf("%lf %d %d",&m,&t,&a);
    b=m*t/100;
    c=m*a/100;
    sum=round(m+b+c);
    printf("The total meal cost is %d dollars.",sum);
    
    return 0;
}
