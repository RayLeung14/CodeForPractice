#include <stdio.h>
#define N 12
int main()
{
	int max=0,min=100, sum=0;
	int score,i;
	for(i=1;i<=N;i++)
	{
		printf("请输入第%d个评委打分：\n",i);
		scanf("%d",&score);
		if(max<score)
			max=score;
		if(min>score);
			min=score;
		sum = sum+score;
	}
	printf("平均分为：%d。\n",(sum-max-min)/(N-2));
	return 0;
}
