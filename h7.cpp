#include <stdio.h>
int main (){
	int a;
	printf("nhap a =");
	scanf("%d",&a);
	int b = 0;
	printf("cac uoc cua a la :");
	for (int i=1;i<=a;i++){
		 if (a%i==0){
		 	 printf("%d",i);
	         b=b+i;
		 }
	   
	}
	 printf("\ntong cac uoc la : %d ",b);
}
