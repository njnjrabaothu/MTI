#include <stdio.h>
int main(){
	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	if(n<3){
		printf("Khong co so nguyen to nao tim duoc");
	}else{
		for(int i=1;i<n;i++){
			if(i==1) continue;
			if(i<=3){
				printf("SNT: %d\n",i);
				continue;
			}
			int uoc = 0;
			for(int j=2;j<=i/2;j++){
				if(i%j==0){
					uoc++;
					break;
				}
				 	
			}
			if(uoc == 0){
				printf("SNT: %d\n",i);
			}
		}
	}
	
}
