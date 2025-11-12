#include "alat.h"

//FUNGSI FILE
void SIMPAN_FILE(data alat[],int count){
    FILE *file = fopen("data.txt","w");
    if (file == NULL) {
    printf("Gagal membuka file!\n");
    