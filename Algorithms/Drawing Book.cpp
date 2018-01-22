#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int a,b,c;
    
    scanf("%d",&a);
    scanf("%d",&b);
    c=a/2-(b/2);
    if(b/2>c)
        printf("%d",c);
    else
        printf("%d",b/2);

    return 0;
} 

