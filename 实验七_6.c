#include<stdio.h>
 
char s[105];
int main()
{
    int n = 0,i;
    while(scanf("%c",&s[n]) == 1) 
	{
        if(s[n] == '0')
			break;
        else
			n++;
    }
    char *p = s;
    for(i = 0;i<n;i++)
		printf("%d\n",*(p+i));
    return 0;
     
}
