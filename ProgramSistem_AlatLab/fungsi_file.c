#include "alat.h"

//FUNGSI FILE
void SIMPAN_FILE(data alat[],int count){
    FILE *file = fopen("data.txt","w");
    if (file == NULL) {
    printf("Gagal membuka file!\n");

    return;
    }

    for(int i = 0; i < count; i++){
        fprintf(file,"%u|%s|%s|%s|%u|%u|%u\n", alat[i].id,
            alat[i].nama_alat,
            alat[i].merek,
            alat[i].model,
            alat[i].tahunproduksi,
            alat[i].jumlah,
            alat[i].dipinjam);
    }
    fclose(file);
}

void LIHAT_FILE(data alat[],int *count){    
    FILE *file = fopen("data.txt","r");
    if (file == NULL) {
    printf("Gagal membuka file!\n");
    *count = 0;
     return;
    }
    int i = 0;
    while(fscanf(file,"%u|%[^|]|%[^|]|%[^|]|%u|%u|%u\n", 
         &alat[i].id,
        alat[i].nama_alat,
        alat[i].merek,
        alat[i].model,
        &alat[i].tahunproduksi,
        &alat[i].jumlah,
        &alat[i].dipinjam)==7)
        {
            i++;
        }
    *count = i;
    fclose(file);
}

void TAMBAH_FILE(data alat[],int *count){
    FILE *file = fopen("data.txt","a");
    if (file == NULL) {
    printf("Gagal membuka file!\n");
    return;
    }
     int i = (*count) - 1;
    fprintf(file,"%u|%s|%s|%s|%u|%u|%u\n", alat[i].id,
        alat[i].nama_alat,
        alat[i].merek,
        alat[i].model,
        alat[i].tahunproduksi,
        alat[i].jumlah,
        alat[i].dipinjam);
    fclose(file);
}