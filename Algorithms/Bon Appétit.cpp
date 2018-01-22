#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int n,k,i,bc,ba,sum=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {  scanf("%d",&a[i]);
         sum+=a[i];
           }
    ba=(sum-a[k])/2;
    scanf("%d",&bc);
    if(bc==ba)
        printf("Bon Appetit");
    else
        printf("%d",(bc-ba));
    return 0;
}
