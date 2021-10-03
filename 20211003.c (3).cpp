//写的是关于：输入n的值，在屏幕输出n行的字符串“Happy new year！”的代码。

#include <stdio.h>

int main()
{
	int c,n;
	while(2>1)
{
	printf("请输入n的值(-8848结束):"); 
	scanf("%d",&n);
	if (n==-8848)
	break;

        c=1;
	while(n>=c)

    {
        n=n-1;	
	char arr1[] = "Happy new year!";
	printf("%s\n",arr1);
    }
}
    return 0;
} 
