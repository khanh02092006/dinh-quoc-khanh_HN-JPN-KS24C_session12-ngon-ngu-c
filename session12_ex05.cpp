#include<stdio.h>
int la_so_nguyen(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i*i<=n;i++){
		if(i%2==0){
			return 0;
			}
			}
		return 1;;
		}
int main(){
	int so1,so2;
      printf(" nhap vao so t1");
      scanf("%d",&so1);
      printf(" nhap vao so t2");
      scanf("%d",&so2);
       if (la_so_nguyen(so1)){
       	printf("%d là so nguyen to",so1);
       	} else {
       		printf("%d khong la so nguyen to",so1);
       		}
       	if (la_so_nguyen(so2)){
       	printf("%d là so nguyen to",so2);
       	} else {
       		printf("%d khong la so nguyen to",so2);
       		}
			 return 0;
			 }  	
			
