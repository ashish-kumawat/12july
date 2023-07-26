//no return no arg
#include<stdio.h>
void show();
int main()
{
	show();
	multi();
	sub();
	div();
	modi();
	return 0;
}
void show()
{
	int a=56,b=34,c;
	c=a+b;
	printf("%d \n",c);
}

void multi()
{
	int a=56,b=34,c;
	c=a*b;
	printf("%d \n",c);
}

void sub()
{
	int a=56,b=34,c;
	c=a-b;
	printf("%d \n",c);
}

void div()
{
	int a=56,b=34,c;
	c=a/b;
	printf("%d \n",c);
}
void modi()
{
	int a=56,b=34,c;
	c=a%b;
	printf("%d \n",c);
}
