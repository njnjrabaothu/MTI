#include <stdio.h>
#include<math.h>
int main (){
    int a,b,c;
    do{
	printf("nhap a = ");
    scanf("%d",&a);
    
    printf("nhap b =");
      scanf("%d",&b);
      
    printf ("nhap c = ");
	 scanf("%d",&c);	
	 if (a+b>=c&&b+c>=a&&a+c>=b){
	 	printf("\n3 Canh vua nhap tao thanh 1 tam giac\n");
	 }else{
    printf("3 canh vua nhap khong la tam giac\n");
	}
	}while (! (a + b> c && b + c> a && a + c> b));
	float p,s;
	p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("\nChu vi tam giac la: %.2f\n",p);
	printf ("\nDien tich tam giac la:%.1f",s);
}
