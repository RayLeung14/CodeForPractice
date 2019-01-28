#include<stdio.h>
void main()
{
	char str_right[]={"guangxi2015"};
	char str_input[20];
	int i;
	printf("ÇëÊäÈëÃÜÂë£º");
	gets(str_input);
	for(i=1;i<=3;i++)
	{
		if(i!=3)
		{
			if(strcmp(str_right,str_input)==0)
			{
				printf("ÃÜÂëÊäÈëÕıÈ·£¡\n");
				break; 
			}
			else
			{
				printf("ÃÜÂëÊäÈë´íÎó£¬ÇëÖØĞÂÊäÈë£¡\n\n");
				printf("ÇëÊäÈëÃÜÂë£º");
				gets(str_right);
			}
		}
		else
			printf("ÄúÒÑÊä´íÈı´ÎÃÜÂë£¡"); 
	}
}
