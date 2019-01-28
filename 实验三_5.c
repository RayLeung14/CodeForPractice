#include <stdio.h> 
#include <math.h>
#define e 2.71828
void main() 
{
	float x,y;
	printf("Please Input Number:%f\n");
	scanf("%f",&x);
	if(x>0)
		y = exp(-x);
	if(x=0)
		y = 1;
	if(x<0)
	{
		y = exp(x);
		y = y*(-1);
	}
	printf("The result is:%f\n",y);
}
