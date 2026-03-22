#include<stdio.h>
void show(int x[],int n,int i)
{
	int max=i;
	int l=i*2+1;
	int r=i*2+2;
	int t;
	if(r<n)
	{
		if(x[l] > x[r])
		{
			max=l;
		}
		else
		{
			max=r;
		}
	}
	if(x[max]>x[i])
	{
		t=x[i];
		x[i]=x[max];
		x[max]=t;
		show(x,n,max);
	}
}
void showloop(int x[],int n)
{
	int i;
	for(i=n/2-1; i>=0; i--)
	{
		show(x,n,i);
	}
}
void main()
{
	int i;
	int n=7;
	int x[]={1,2,3,4,5,6,7};
	showloop(x,n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",x[i]);
	}
}	
