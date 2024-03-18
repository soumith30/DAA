#include<stdio.h>
int main(){
	int a[100],n,i,item;
	printf("enter the size of array: ");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched: ");
	scanf("%d",&item);
	for(i=0;i<n;i++){
		if(a[i]==item){
			break;
		}
	}
	if(i<n){
		printf("element %d found at the location: %d",item,i+1);
	}
	else{
		printf("element not found");
	}
}
