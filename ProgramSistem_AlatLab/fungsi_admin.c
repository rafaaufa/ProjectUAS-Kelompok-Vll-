#include "alat.h"

//FUNGSI ADMIN
void ADMIN_MENU(data alat[],int *count){
    int pilihan1;
    system("cls");
    printf("------------------------------\n");
    printf("\tSELAMAT DATANG\n");
    do{
        printf("------------------------------\n");
        printf("[1.] TAMBAH DATA\n");
        printf("[2.] LIHAT DATA\n");
        printf("[3.] EDIT DATA\n");
        printf("[4.] HAPUS DATA\n");
        printf("[5.] KELUAR\n");
        printf("Silahkan Masukkan Pilihan : ");
        scanf("%d",&pilihan1);
        getchar();
        printf("\n------------------------------\n");