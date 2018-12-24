#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n;
	scanf("%d",&n);
	int *a=malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int *r=malloc(sizeof(int)*n);
	for(i=0;i<n;)
	{
		if(a[i]<38)
		{
			r[i]=a[i];
			i++;
		}
		else
		{
			if(((a[i]+2)%5)==0)
			{
				r[i]=a[i]+2;
				i++;
			}
			else if(((a[i]+1)%5)==0)
			{
				r[i]=a[i]+1;
				i++;
			} 
			else
			{
				r[i]=a[i];
				i++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",r[i]);
	}
}
