#include<stdio.h>
void main()
{
	int *p,i,num[3];
	p=num;
	for(i=0;i<=2;i++)
	{
		printf("�������%d�����֣�",i+1);
		scanf("%d",num+i);
	}
	if(*p>*(p+1))
	{
		if(*p>*(p+2))
		{
			if(*(p+2)>*(p+1))
				printf("�м���Ϊ%d��\n",*(p+2));
			else
				printf("�м���Ϊ%d��\n",*(p+1));
		}
		else
			printf("�м���Ϊ%d��\n",*p);
	}
	else
	{
		if(*p>*(p+2))
			printf("�м���Ϊ%d��\n",*p);
		else if(*(p+1)>*(p+2))
			printf("�м���Ϊ%d��\n",*(p+2));
		else
			printf("�м���Ϊ%d��\n",*(p+1));
	}
}
