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
            case 5 :system("cls");
                    SIMPAN_FILE(alat,*count);
                    printf("\nTerima Kasih ,Program Selesai");
                    break;
                      default : printf("Eror!! SILAHKAN LOGIN ULANG");
        }
        if(pilihan2 != 5){ 
        printf("\nTekan Enter untuk kembali ke menu...");
        getchar();
        system("cls");
    }
    }while(pilihan2 != 5);
}

void USER_PEMINJAMAN(data alat[],int *count){
    int id;
    printf("Masukkan ID Alat Yang Ingin Dipinjam : ");
    scanf("%d",&id);
    if(id <= 0 || id > *count){
        printf("Data Tidak Valid");
        return;
    }
     if (alat[id-1].dipinjam == 1){
        printf("Alat sudah dipinjam!\n");
         } else {
        alat[id-1].dipinjam = 1; 
        printf("Alat Berhasil Dipinjam!\n");
    }
    SIMPAN_FILE(alat,*count);
}

void USER_PENGEMBALIAN(data alat[],int *count){
    int id;
    printf("Masukkan ID Alat Yang Ingin Dikembalikan : ");
    scanf("%d",&id);
    if(id <= 0 || id > *count){
        printf("Data Tidak Valid");
        return;
    }
     if (alat[id-1].dipinjam == 0){
        printf("Alat belum dipinjam!\n");
    } else {
         alat[id-1].dipinjam = 0; 
        printf("Alat berhasil dikembalikan!\n");
    }
    SIMPAN_FILE(alat,*count);
}
