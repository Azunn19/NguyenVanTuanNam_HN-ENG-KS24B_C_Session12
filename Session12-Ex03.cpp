#include<stdio.h>
int GiaiThua(int n){
	if (n < 0){
		printf("So nhap vao khong hop le\n");
	}
	else{
		int giaithua = 1;
		for (int i = 1;i <= n;i++){
			giaithua *= i;
		}
		printf("Giai thua cua %d la %d\n", n, giaithua);
	}
}

int main(){
	int Number;
    printf("Hay nhap so can tinh gia thua: ");
    scanf("%d",&Number);
    GiaiThua(Number);
	return 0;
}

