#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
  long long int i,sum=0;
 long long int a[10],n; 
    scanf("%lld", &n);
    for(i=0;i<n;i++)
    { scanf("%lld",&a[i]);
       sum=sum+a[i];
    }
    printf("%lld",sum);
     return 0;
}
