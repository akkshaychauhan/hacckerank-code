#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,q,m,l,k;
    scanf("%d%d",&n,&q);
    int *arr[n];
    for(int i = 0 ; i < n;i++){
        scanf("%d",&m);
        arr[i] = (int *)malloc(m * sizeof(int));
        for(int j = 0 ; j < m ;j++){
             scanf("%d",&arr[i][j]);
        }
    }
    while(q--){
        scanf("%d%d",&l,&k);
        printf("%d\n",arr[l][k]);
    } 
    return 0;
}
