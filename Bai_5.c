#include <stdio.h>
int TinhTien(int km){
    if(km <= 1){
        return 5000;
    }
    if ( 1 < km <= 31){
        return 5000+ 4000*(km-1);
    }
    if (km > 31){
        return 5000 + 4000*30 + (km -31)*3000;
    }
}


int main (){
    int km;
    printf ("Nhap vao so Km ");
    scanf("%d",&km);
   printf("So Tien la %d", TinhTien (km));
}