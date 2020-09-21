#include <stdio.h>
int main (){
	int n,a=1,b=1,c=0;
	do{
		printf("nhap so n=");
		scanf("%d",&n);
		
	}while(n <0);
	for(;a<=n;a++){
		a=a*b;
		c=c+a;
	}
	printf("%d",c);
	
	
	}

