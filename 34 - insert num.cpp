#include <stdio.h>
int main(){
    int a[100],i,n,x,pos;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the new element to be inserted: ");
    scanf("%d",&x);
    printf("enter the position where element is to be inserted: ");
    scanf("%d",&pos);
    n=n+1;
    for(i=n-1;i>=pos;i--)
        a[i]=a[i-1];
    a[pos-1]=x; 
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
return 0;
}
