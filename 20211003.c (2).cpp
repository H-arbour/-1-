//写的是关于:求下列级数的前n项和。
//s=2+22+222+…(前n项）
//如输了n的值为2，则输出结果为s=24的代码。

#include <stdio.h>

int main()
{
	int i,s,n,an;
	while (3>2)
{
    printf("请输入n的值（-8848结束）:");		
	scanf("%d",&n);	
    if(n==-8848)
	break;	
		
	i=1;
	s=0;
	an=2;
	while (i<=n)
{
	s=s+an;
	i=i+1;
	an=an*10+2;
}
	printf("s=%d\n",s);	
}
	return 0;
}
