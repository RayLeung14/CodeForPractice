#include <stdio.h>
#include <math.h>
void main()
{
	float F,C,a1,a2,a3,s,L;
	int x,y,z;
	char a,b,c,d,e,f;
	printf("�����뻪���¶ȣ�");
	scanf("%f",&F);
	C=5.0/9*(F-32);
	printf("�û����¶ȶ�Ӧ�������¶�Ϊ��%.2f��\n\n",C);
	
	printf("��������λ����������"); 
	scanf("%1d%1d%1d",&x,&y,&z);
	printf("��������Ľ��Ϊ��");
	printf("%d%d%d\n",z,y,x);
	
	printf("������������ĸ��");
	scanf("%1c%1c%1c",&a,&b,&c);
	d=a+3;
	e=b+3;
	f=c+3;
	printf("�����������ĸΪ��\n%c%c%c��\n\n",d,e,f);
	getchar();
	
	printf("�����������ε����߳���"); 
	scanf("%f%f%f",&a1,&a2,&a3);
	L = (a1+a2+a3)/2;
	s = sqrt(L*(L-a1)*(L-a2)*(L-a3));
	printf("�������ε����Ϊ%f��\n",s);
}
