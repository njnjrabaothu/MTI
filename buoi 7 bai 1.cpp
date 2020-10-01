#include <stdio.h>
int main(){
		int x , n ,tmp;
		printf("nhap n :");
		scanf("%d"& n);
		printf("nhap x :");
		scanf("%d",&x);
		int a[100];
		for (int i = 0;i<n;i++){
			printf ("nhap phan tu thu a [%d]",i);
			scanf("%d"&a[i]);
			
		}
		int min = x;
		for (int i=0;i<n;i++){
			if (a[i]<x){
			tmp=x-a[i];
			if(tmp<min){
				min=tmp;	
			}
			}
		}
		for(int i=0;i<n;i++){
			if (a[i]+min==x){
				printf("so trong mang co gia tri nho hon va gan x nhat la : %d",a[i]);
			}
		}
		
}
