#include <stdio.h>

void main()
{
	float h,w,t;
	printf("������ߣ�\n");
	scanf("%f",&h);
	printf("�������أ�\n");
	scanf("%f",&w);
	t = w/(h*h);
	printf("������Ϊ��%f\n",t);
	if(t<27)
		if(t>25 && t<27)
			printf("Ϊ�������ʡ�\n");
		if(t>=18 && t<=25)
			printf("Ϊ�������ʡ�\n");
		if(t<18)
			printf("Ϊƫ�����ʡ�\n");
	else
		printf("Ϊ�������ʡ�\n");
}
