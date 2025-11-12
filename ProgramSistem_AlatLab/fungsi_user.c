#include "alat.h"

//FUNGSI USER
void USER_MENU(data alat[],int *count){
    int pilihan2;
    system("cls");
    printf("------------------------------\n");
    printf("\tSELAMAT DATANG\n");
    do{
        printf("------------------------------\n");
        printf("[1.] PEMINJAMAN\n");
        printf("[2.] PENGEMBALIAN\n");
        printf("[3.] LIHAT ALAT TERSEDIA\n");
        printf("[4.] LIHAT ALAT DIPINJAM\n");
        printf("[5.] KELUAR\n");
        printf("Silahkan Masukkan Pilihan : ");
        scanf("%d",&pilihan2);
        switch (pilihan2){
            case 1 :USER_PEMINJAMAN(alat,count);
                    break;
            case 2 :USER_PENGEMBALIAN(alat,count);
                    break;
            case 3 :USER_LIHATTERSEDIA(alat,*count);
                    break;
            case 4 :USER_LIHATDIPINJAM(alat,*count);
                    break;