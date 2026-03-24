#include<stdio.h>
void show(int x[], int n,int div)
{
	int i;
	
	int y[n];
	int a[10]={0};
	
	for(i=0;i<n;i++)
	{
		a[x[i]/div%10]++;
	}
	for(i=1;i<10;i++) 
	{
		a[i]+=a[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		y[a[(x[i]/div%10)]-=1]=x[i];
	}
	for(i=0;i<n;i++)
	{
		x[i]=y[i];
	}
}
 void display(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",x[i] );
	}
	printf("\n");
}
 void rsort(int x[],int n)
 {
 	int i;
 	int max=x[0];
 	int min=x[0];
 	for(i=1;i<n;i++)
	{
		if (min>x[i])
			min=x[i];
	}
	for(i=0;i<n;i++)
	{
			x[i]=x[i]-min;
	}
 	for(i=1;i<n;i++)
 	{
 		if(max<x[i])
 			max=x[i];
 	}
 	for(i=1;i<=max;i=i*10)
 	{
 		show(x,n,i);
 		display(x,n);
 	}
 	for(i=0;i<n;i++)
	{
			x[i]=x[i]+min;
	}
 }

int main ()
{
	int i;
	int n=7;
	int x[]={1000,27,934,7,-98,890,567};
	display(x,n);
	rsort(x,n);
	display(x,n);
}
