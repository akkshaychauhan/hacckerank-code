#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    long int a,b, c, d;
    long int e,max,min,ma=0,mi=0,sum_max=0,sum_min=0;
    long int no[5];
    int i;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    no[0]=a;
    no[1]=b;
    no[2]=c;
    no[3]=d;
    no[4]=e;
    max=a;
    min=a;
    for(i=1;i<5;i++)
        {
        if(no[i]>max)
            {
            max=no[i];
            ma=i;
        }      
        if(no[i]<min)
            {
            min=no[i];
            mi=i;
        }
    }
     for(i=0;i<5;i++)
        {
            if(i!=mi)
                sum_max+=no[i];
                  if(i!=ma)
                sum_min+=no[i];
     }
    printf("%ld %ld",sum_min,sum_max);
    return 0;
}
