#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("enter the string: ");
	gets(s);
	printf("length of string is: %d",strlen(s));
	return 0;
}
