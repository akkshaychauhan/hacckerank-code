#include <stdio.h>
#include <stdlib.h>

int main(){
  int s,t;  
  scanf("%d %d",&s,&t);
  int a, b; 
  scanf("%d %d",&a,&b);
  int m, n;
  scanf("%d %d",&m,&n);
  int apple[m],orange[n];
  int aCount = 0;
  for(int i = 0; i < m; i++){
    scanf("%d",&apple[i]);
    if(a+apple[i] >= s && a+apple[i] <= t){
      aCount++;
    }
  }
  int oCount = 0;
  for(int i = 0; i < n; i++){
    scanf("%d",&orange[i]);
    if(b+orange[i] >= s && b+orange[i] <= t){
       oCount++;
    }
  }
  printf("%d\n%d", aCount, oCount);
  return 0;
}
