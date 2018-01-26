#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int n, int ar_size, int* ar) {
    int i,b=0,max=0;
    for(i=0;i<n;i++){
        if(ar[i]>max){
            max=ar[i];
//            printf("%d\n",max);
        }
    }
    for(i=0;i<n;i++){
        if(max==ar[i]){
            b+=1;
        }   
    }
return b;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}
