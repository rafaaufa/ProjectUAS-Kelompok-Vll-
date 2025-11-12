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
            