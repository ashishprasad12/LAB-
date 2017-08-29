#include <stdio.h>
#include <conio.h>

float func(float x)
{
	return x*x*x-5*x+3;
}

float regfalsifunc(float x0, float x1)
{
	return x0-(((x1-x0)/(func(x1)-func(x0)))*func(x0));

}
int check(float x0, float x1)
{
	return (func(x0)*func(x1))<0?0:1;
}
void main()
{
	float x0,x1,x2,val,ck;
	clrscr();
	printf("Enter value of x0: ");
	scanf("%f",&x0);
	printf("Enter value of x1: ");
	scanf("%f",&x1);
       ck=check(x0,x1);
       if(ck==0)
	{       do{
			x2=regfalsifunc(x0,x1);
			printf("x0 = %f \t x1 = %f \t x2= %f \n",x0,x1,x2);
			getch();
			if(func(x2)<0){
				x0=x2;
			}
			else if(func(x2)>0){
				x1=x2;
			}
			val=regfalsifunc(x0,x1);
		}while(x2!=val);
	}
	else
		printf("Function is not Diverging");
	printf("Ans: = %f",x2);
	getch();
}
