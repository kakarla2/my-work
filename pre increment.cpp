#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values of a,b");
	scanf("%d%d",&a,&b);
	c=++a;
	b=a++;
	b=a;
	printf("%d  %d",c,b);
	return(0);
	
}
