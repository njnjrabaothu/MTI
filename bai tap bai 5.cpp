#include <stdio.h>
int main(){
	int S=0;
	for(int i=0 j =0;j<100;i++){
	for(int i=0,j=0;j<100;i++){
		if(i%2!=0){
			S+=i;
			j++;
		}
	}
	printf("S= %d",S);
}
