#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)//for odd numbers
	{
		if(i%2==1)
	printf("%d ",i);
}
	return 0;
}
