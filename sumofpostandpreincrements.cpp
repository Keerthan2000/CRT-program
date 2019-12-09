#include<stdio.h>
int main()
{
   int a=3;
   a=++a + a++;
   printf("a=%d",a);
    return 0;
}
