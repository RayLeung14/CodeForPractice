#include<stdio.h>
int main()
{
	char s[100];
	int num,str,letter,i,len;
	printf("�������ַ�����");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]<='z' && s[i]>='a' || s[i]<='Z' && s[i]>='A')
			letter++;
		else if(s[i]<='9' && s[i]>='0')
			num++;
		else
			str++;
	}
	str=str-1;
	printf("���ַ����е�������%d������ĸ��%d���������ַ���%d����\n",num,letter,str);
	return 0;
}
