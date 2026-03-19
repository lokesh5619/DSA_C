//Selection sort
#include<stdio.h>
void display(int x[], int n);
void show(int x[], int n)
{
	int i,j,t;
	int max;
	for(i=0; i<n-1; i++)
	{
		max=i;
		for(j=i+1; j<n; j++)
		{
			if(x[max]>x[j])
			{
				max=j;
			}
		}
	
	if(max!=i)
	{
		t=x[i];
		x[i]=x[max];
		x[max]=t;
	}
	display(x,n);
	}
}
void display(int x[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n");
}
void main()
{
	int n=9;
	int x[]={29,72,98,13,87,66,52,51,36};
	display(x,n);
	show(x,n);
}
