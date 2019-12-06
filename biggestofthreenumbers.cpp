#include <stdio.h>
int main()
{
int a=20,b=50,c=500,d;
d=(a>b&&a>c)?a:b>c?b:c;
printf("The biggest number is:%d",d);
    	return 0;
}
