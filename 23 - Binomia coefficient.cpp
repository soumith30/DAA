#include<stdio.h>  
int main(){    
 int i,n=1,r=1,k=1,n1,n2,n3,binomial;    
 printf("Enter the value of n: ");    
  scanf("%d",&n1);
  printf("Enter the value of k:");    
  scanf("%d",&n2); 
  n3=n1-n2;   
    for(i=1;i<=n1;i++){    
      n=n*i;    
    } 
	for(i=1;i<=n2;i++){    
      r=r*i;    
    } 
	for(i=1;i<=n3;i++){    
      k=k*i;    
    } 
	 binomial = n/(r*k);
	 if(n1<0 || n2<0){
	 	printf("\nInvalid.enter correct value.\n");
     }	
	 else{
	  	printf("\nThe binomial coefficient is %d",binomial);
	  }    
return 0;  
}
