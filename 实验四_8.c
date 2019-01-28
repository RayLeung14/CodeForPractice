#include <stdio.h>
int main()
{
	int x,y,z; 
	for(x=0;x<=20;x++)
		for(y=0;y<=33;y++)
			for(z=0;z<=100;z+=3)
				if((50*x+30*y+z*10/3==1000) && (x+y+z==100))
				{
					printf("五星级饭店：%d\n",x);
					printf("高档饭店：%d\n",y);
					printf("广西科技大学学生食堂：%d\n",z);
					printf("\n");
				}
	return 0;
}
