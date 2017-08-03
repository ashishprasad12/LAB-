#include<stdio.h>
#include<conio.h>
void main()
{
	int x[3][3],y[3][3],z[3][3],k,i,j;
	clrscr();
	printf("Enter the array");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			    scanf("%d",&x[i][j]);
		}
	}
	printf("Enter the second array");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			    scanf("%d",&y[i][j]);
		}
	}
		for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{
				z[i][j]=0;
				for(k=0;k<3;k++)
				{
					 z[i][j]=z[i][j]+x[i][k]*y[k][i];
				}
				}
			}
			printf("\n");
			for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{
				printf("%d",z[i][j]);
				}
			}


			 getch();
}
