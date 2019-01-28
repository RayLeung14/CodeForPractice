#include <stdio.h>
#include <math.h>
void main()
{
	float F,C,a1,a2,a3,s,L;
	int x,y,z;
	char a,b,c,d,e,f;
	printf("请输入华氏温度：");
	scanf("%f",&F);
	C=5.0/9*(F-32);
	printf("该华氏温度对应的摄氏温度为：%.2f。\n\n",C);
	
	printf("请输入三位数的整数："); 
	scanf("%1d%1d%1d",&x,&y,&z);
	printf("倒序输出的结果为：");
	printf("%d%d%d\n",z,y,x);
	
	printf("请输入三个字母：");
	scanf("%1c%1c%1c",&a,&b,&c);
	d=a+3;
	e=b+3;
	f=c+3;
	printf("输出的三个字母为：\n%c%c%c。\n\n",d,e,f);
	getchar();
	
	printf("请输入三角形的三边长："); 
	scanf("%f%f%f",&a1,&a2,&a3);
	L = (a1+a2+a3)/2;
	s = sqrt(L*(L-a1)*(L-a2)*(L-a3));
	printf("该三角形的面积为%f。\n",s);
}
