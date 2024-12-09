#include<stdio.h>
void SoHoanHao(int Number){
	if (Number < 0){
		printf("So nhap vao khong hop le\n");
	}
	else{
		int Tong = 0;
	    for(int i = 1;i < Number;i++){
	    	if (Number % i == 0){
	    		Tong += i;
			}
		}
		if (Tong == Number){
			printf("True\n");
		}
		else{
			printf("False\n");
		}
	}
}

int main(){
	int n;
	printf("Hay nhap so can kiem tra: ");
	scanf("%d",&n);
	SoHoanHao(n);
	printf("Hay nhap so can kiem tra: ");
	scanf("%d",&n);
	SoHoanHao(n);
	
	return 0;
}

