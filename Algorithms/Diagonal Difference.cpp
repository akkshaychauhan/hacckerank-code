#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int A[100][100],i,j,suma=0,sumb=0,N;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        {
        for(j=0;j<N;j++)
            {
            scanf("%d",&A[i][j]);
            if(i==j)
                suma+=A[i][j];
            if(j==(N-i-1))
                sumb+=A[i][j];
        }
    }
    printf("%d",abs(suma-sumb));
    
    return 0;
}

 
