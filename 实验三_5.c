#include <stdio.h> 
#include <math.h>
#define e 2.71828
void main() 
{
	float x,y;
	printf("请输入x的值：\n");
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
	printf("y的值为%f。\n",y);
}
