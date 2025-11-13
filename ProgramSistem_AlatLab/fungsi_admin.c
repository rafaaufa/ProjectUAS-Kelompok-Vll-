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
        switch (pilihan1){
            case 1 :ADMIN_TAMBAHDATA(alat,count);
                    TAMBAH_FILE(alat,count);
                    break;
            case 2 :ADMIN_LIHATDATA(alat,*count);
                    break;
            case 3 :ADMIN_EDITDATA(alat,count);
                    break;
            case 4 :ADMIN_HAPUSDATA(alat,count);
                    break;
            case 5 :system("cls");
                    SIMPAN_FILE(alat,*count);
                    printf("\nTerima Kasih ,Program Selesai");
                    break;
            default :printf("\nEror!! SILAHKAN LOGIN ULANG\n");
        }
        if(pilihan1 != 5){ 
        printf("\nTekan Enter untuk kembali ke menu...");
        getchar();
        system("cls");
    }
    }while(pilihan1 != 5);
}

void ADMIN_TAMBAHDATA(data alat[],int *count){
    printf("Masukkan ID : ");
    scanf("%d",&alat[*count].id);
    getchar();
    printf("Silahkan Masukkan Nama Alat : ");
    fgets(alat[*count].nama_alat,sizeof(alat[*count].nama_alat),stdin);   
    alat[*count].nama_alat[strcspn(alat[*count].nama_alat,"\n")] = '\0';

    