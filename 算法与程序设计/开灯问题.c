//有n盏灯，第一个人把所有灯打开，第二个人，按下所有编号为2的倍数的开关，第三个人按下所有编号为3的倍数的开关，一共k个人最后哪些灯开着

#include<stdio.h>
#include<string.h>
#define maxn 1010
int a[maxn];
int main()
{
	int n, k, first = 1;
	memset(a, 0, sizeof(a));//把数组清0
	scanf("%d%d", &n, &k);
	for (int i = 1;i <= k;i++)
	{
		for (int j = 1;j <= n;j++)
		{
			if(j%i==0)
			{
				a[j] != a[j];
			}
		}
	}
	for(int i=1;i<n;i++)
		if (a[i])
		{
			if (first)
				first = 0;
			else
				printf(" ");
			printf("%d", i);
		}
	printf("/n");
	return 0;
}