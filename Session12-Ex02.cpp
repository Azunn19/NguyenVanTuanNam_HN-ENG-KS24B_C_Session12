#include<stdio.h>
void InMang(int arr[], int Length) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < Length; i++) {
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int Length = sizeof(arr) / sizeof(arr[0]);
    InMang(arr, Length);

    return 0;
}
