
//Merge sort
#include<stdio.h>
void sum(int x[],int y[],int z[],int m1,int m2);
void show(int x[],int n)
{
	if(n<=1)return;
	int i;
	int m1=n/2;
	int m2=n-m1;
	int a[m1];
	int b[m2];
	for(i=0;i<m1;i++)
	{
		a[i]=x[i];
	}
	for(i=0;i<m2;i++)
	{
		b[i]=x[i+m1];
	}
	show(a,m1);
	show(b,m2);
	sum(a,b,x,m1,m2);
}
void sum(int x[],int y[],int z[],int m1,int m2)
{
	int i,j,k;
	for(i=0,j=0,k=0;i<m1&&j<m2;)
	{
		if(x[i] < y[j])
		{
			z[k++]=x[i++];
		}
		else{
			z[k++]=y[j++];
		}
	}
	while(i<m1)
		z[k++]=x[i++];
	while(j<m2)
		z[k++]=y[j++];
}
void main()
{
	int i;
	int n=8;
	int x[]={56,29,35,42,15,41,75,21};
	show(x,n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",x[i]);
	}
}	


