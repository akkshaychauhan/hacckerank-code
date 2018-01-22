#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int n,j=0,i; 
    scanf("%d",&n);
   int a[100];
      int b[100]={0};
    for(i=0;i<n;i++)
    {  scanf("%d",&a[i]);
            b[a[i]]++;
         if(b[a[i]]%2==0)
             j++;
    }
     printf("%d",j);   
    return 0;
}
