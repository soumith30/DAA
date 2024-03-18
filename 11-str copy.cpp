#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	printf("enter the string: ");
	gets(a);
	strcpy(b,a);
	printf("the copied string is: %s ",b);
	return 0;
}
