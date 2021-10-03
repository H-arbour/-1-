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
