#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int maxchange,minchange,i,j=0,k=0,n;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
         a[i]=b[i];
    maxchange=a[0];
    minchange=a[0];
    for(i=1;i<n;i++)
    { if(maxchange<a[i])
    {j++;
     maxchange=a[i];
    }
       if(minchange>a[i])
       {  k++;
         minchange=a[i];  }
               
    }
    printf("%d %d",j,k);

    return 0;
}

