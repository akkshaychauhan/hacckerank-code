#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int q,x,y,z;
    scanf("%d",&q);
    while(q)
    {scanf("%d %d %d",&x,&y,&z);
          if(abs(x-z)>abs(y-z))
              printf("Cat B\n");
     else if(abs(x-z)==abs(y-z))
         printf("Mouse C\n");
           else
         printf("Cat A\n");
     q--;
    }
    
 
    return 0;
}
