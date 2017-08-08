#include<stdio.h>
#include<conio.h>
#include<math.h>
float input(float v)
{
	return ((2*pow(v,2))-(5*v));
}
	void main()
{
	clrscr();
	float v,dv,u,du,abs,rel,pre;
		printf("Enter the value");
		scanf("%f",&v);
		printf("Enter the approximate");
		scanf("%f",&dv);
			abs=(v-dv);
			rel=abs/v ;
			pre=rel*100;

		printf("\nabsolute arror=%f",abs);
		printf("\nrelative error=%f",rel);
		printf("\npercentage error=%f",pre);
getch();
}
