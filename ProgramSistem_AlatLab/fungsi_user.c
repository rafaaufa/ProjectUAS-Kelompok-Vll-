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
        printf("\nTekan Enter Untuk Kembali Ke Menu...");
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

void USER_LIHATTERSEDIA(data alat[],int count){
     printf("\n\tDAFTAR ALAT YANG TERSEDIA\n");
      printf("---------------------------------------------------------------------------------\n");
      printf("| %-5s| %-20s| %-15s| %-15s| %-6s| %-7s|\n",
        "ID", "Nama Alat", "Merek", "Model", "Tahun", "Jumlah");
      printf("---------------------------------------------------------------------------------\n");

      for (int i = 0; i < count; i++){
        if (alat[i].dipinjam == 0){
            printf("| %-5u| %-20s| %-15s| %-15s| %-6u| %-7u|\n",
                alat[i].id,
                alat[i].nama_alat,
                alat[i].merek,
                alat[i].model,
                alat[i].tahunproduksi,
                alat[i].jumlah);
        }
    }
    printf("---------------------------------------------------------------------------------\n");
}

void USER_LIHATDIPINJAM(data alat[],int count){
    printf("\n\tDAFTAR ALAT YANG DIPINJAM\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("| %-5s| %-20s| %-15s| %-15s| %-6s| %-7s|\n",
        "ID", "Nama Alat", "Merek", "Model", "Tahun", "Jumlah");
    printf("---------------------------------------------------------------------------------\n");
