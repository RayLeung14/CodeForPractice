#include <stdio.h>
int main()
{
	int x,y,z; 
	for(x=0;x<=20;x++)
		for(y=0;y<=33;y++)
			for(z=0;z<=100;z+=3)
				if((50*x+30*y+z*10/3==1000) && (x+y+z==100))
				{
					printf("���Ǽ����꣺%d\n",x);
					printf("�ߵ����꣺%d\n",y);
					printf("�����Ƽ���ѧѧ��ʳ�ã�%d\n",z);
					printf("\n");
				}
	return 0;
}
