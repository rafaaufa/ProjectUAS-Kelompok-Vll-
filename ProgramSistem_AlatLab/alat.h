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

void ADMIN_MENU(data alat[], int *count);
void ADMIN_TAMBAHDATA(data alat[], int *count);
void ADMIN_LIHATDATA(data alat[], int count);
void ADMIN_EDITDATA(data alat[], int *count);
void ADMIN_HAPUSDATA(data alat[], int *count);

void SIMPAN_FILE(data alat[], int count);
void TAMBAH_FILE(data alat[], int *count);
void LIHAT_FILE(data alat[], int *count);

void USER_MENU(data alat[],int *count);
void USER_PEMINJAMAN(data alat[],int *count);

#endif