// IN RA PHẦN TỬ LẶP NHIỀU NHẤT VỊ TRÍ CỦA NÓ (CHƯA DONE)

#include <stdio.h>
void NhapMang (int a[], int n){
    for (int i=0; i <n; i++){
    printf ("Nhap index thu %d = ", i); scanf("%d",&a[i]);
}}
void XuatMang (int a[], int b){
    for (int i = 0; i < b; i++)
    {
        printf ("\n Mang thu %d la %d", i, a[i]);
    }
    
}

void Arrange (int a[], int n){
    for (int i=0; i < n-1 ; i++){
        for (int j = i+1; j < n; j++){
            if (a[i] > a[j] )
            {
                int temp = a[j];
                a[j] = a [i];
                a[i] = temp;
            }
            
        }
    }
}
int main (){
    int Arr [100];
    int n;
    do {
        printf ("\nNhap vao so luong phan tu mang");
        scanf ("%d",&n);
    } while (n < 0 && n > 100);
    NhapMang (Arr, n);
    XuatMang (Arr, n);
    Arrange (Arr, n);
    printf ("\n............................................\n");
    XuatMang (Arr, n);
}
