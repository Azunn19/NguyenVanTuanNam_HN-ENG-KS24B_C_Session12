#include<stdio.h>
void TimMax(int arr[], int Length) {
    int Max = arr[0];
    for (int i = 0; i < Length; i++){
        if (Max < arr[i]){
        	Max = arr[i];
		}
    }
    printf("So lon nhat trong mang la: %d\n", Max);
}

int main(){
	int n;
	int arr[n];
	printf("Hay nhap so phan tu cua mang: ");
	scanf("%d",&n);
	if (n < 2){
		printf("So phan tu khong hop le\n");
	}
	else{
		for(int i = 0;i < n;i++){
			printf("Hay nhap phan tu thu %d: ",i + 1);
			scanf("%d",&arr[i]);
		}
		TimMax(arr, n);
	}
	
    return 0;
}
