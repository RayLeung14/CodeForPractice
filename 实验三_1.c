#include <stdio.h>

void main()
{
	float h,w,t;
	printf("输入身高：\n");
	scanf("%f",&h);
	printf("输入体重：\n");
	scanf("%f",&w);
	t = w/(h*h);
	printf("体质数为：%f\n",t);
	if(t<27)
		if(t>25 && t<27)
			printf("为超重体质。\n");
		if(t>=18 && t<=25)
			printf("为正常体质。\n");
		if(t<18)
			printf("为偏瘦体质。\n");
	else
		printf("为肥胖体质。\n");
}
