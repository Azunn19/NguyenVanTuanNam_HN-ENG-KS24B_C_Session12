#include<stdio.h>
void SoNguyenTo(int Number){
	if (Number < 0){
		printf("So nhap vao khong hop le\n");
	}
	else{
		int count = 0;
	    for(int i = 1;i < Number;i++){
	    	if (Number % i == 0){
	    		count++;
			}
		}
		if (count == 1){
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
	SoNguyenTo(n);
	printf("Hay nhap so can kiem tra: ");
	scanf("%d",&n);
	SoNguyenTo(n);
	
	return 0;
}

