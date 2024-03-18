#include<stdio.h>
int main()
{
	int n,a[100],i,max=0;
	printf("enter the array size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d element: ",i+1);
		scanf("%d",&a[i]);
	    if(max<a[i])
	    {
	    	max=a[i];
	    }
	}
	printf("The largest number in the array is: %d",max);
	return 0;
}
