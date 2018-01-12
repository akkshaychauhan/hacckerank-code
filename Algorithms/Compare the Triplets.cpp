#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a[100],b[100],i,j=0,k=0;
    for(i=0;i<3;i++)
    { scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {scanf("%d",&b[i]);
           }
    for(i=0;i<3;i++)
    {  if(a[i]>b[i])
            {j++;
            }
          else if(a[i]<b[i])
          {
          k++;
   
          }}
    printf("%d %d",j,k);
     return 0;
    }
