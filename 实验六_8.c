#include<stdio.h>
void main()
{
	char str_right[]={"guangxi2015"};
	char str_input[20];
	int i;
	printf("���������룺");
	gets(str_input);
	for(i=1;i<=3;i++)
	{
		if(i!=3)
		{
			if(strcmp(str_right,str_input)==0)
			{
				printf("����������ȷ��\n");
				break; 
			}
			else
			{
				printf("��������������������룡\n\n");
				printf("���������룺");
				gets(str_right);
			}
		}
		else
			printf("��������������룡"); 
	}
}
