#include<stdio.h>
void main()
{
	int i,j,k,t;
	int x[]={5,4,3,2,1};
	for(k=0;k<5;k++)
	{
		printf("%d ",x[k]);
	}
	printf("\n");
	for(i=3;i>=0; i--)
	{
		for(j=0;j<=i;j++)
		{
			if(x[j]>x[j+1])
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	printf("Sorted Array is ->\n");
	for(k=0;k<5;k++)
	{
		printf("%d ",x[k]);
	}
}	
