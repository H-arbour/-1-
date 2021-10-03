//写的是关于：输入n的值，求下列级数的前n项和。
//s=1+3+5+7+…(n项)
//如输入n的值为3，则结果为9的代码。

#include <stdio.h>

int main()
{
	int i,s,n;
	while (3>2)
{
    printf("请输入n的值（-8848结束）:");		
	scanf("%d",&n);	
    if(n==-8848)
	break;	
		
	i=1;
	s=0;
	while (i<=n)
{
	s=s+2*i-1;
	i=i+1;
}
	printf("s=%d\n",s);	
}
	return 0;
}
