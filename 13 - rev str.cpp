#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("enter the string: ");
	gets(s);
	printf("reversed string is: %s",strrev(s));
	return 0;
}
