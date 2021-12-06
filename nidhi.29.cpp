#include <stdio.h>
int main()
{
int a=10;
int b=20;
int c;
c=a;
a=b;
b=c;
c=10;
a=20;
b=10;
printf("%d",c,a,b);
   return 0;
}
