#include<stdio.h>
int main()
{
	int a[100],b[100],c[100]={0};
	int i,j,x=0,y,t=0,n,k=0;
	scanf("%d",&n);
	for(i=0;i<100;i++)
	{
		b[i]=1;c[i]=1;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i],a[i]=a[i+1],a[i+1]=t;
			}
		}
	} 
	for(i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			k++;c[t]=a[i],t++;
		}
		else
		{
			b[k]=b[k]+1;c[t]=a[i]; 
		}
	}
	for(i=0;i<t+1;i++)
	{
		printf("%d:%d\n",c[i],b[i]);
	}
	return 0;
} 
