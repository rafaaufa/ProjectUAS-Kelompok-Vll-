#ifndef alat_h
#define alat_h

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    unsigned int id;
    char nama_alat[50];
    char merek[50];
    char model[50];
    unsigned int tahunproduksi;
    unsigned int jumlah;
    unsigned int dipinjam;
}data;

#endif