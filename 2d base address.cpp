#include <stdio.h>
#define n 5
int main()
{
	int a[n][n]={0};
	int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("Address of a[%d][%d]=%u\n",i,j,&a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
