#include <stdio.h>
#include <string.h>
#include <ctype.h>

void bersihkan_kata(char *kata) {
    char sementara[200];
    int j = 0;

    for (int i = 0; kata[i] != '\0'; i++) {
        if (isalpha(kata[i]) || kata[i] == '\'' || kata[i] == '-') {
            sementara[j] = tolower(kata[i]);
            j++;
        }
    }
    sementara[j] = '\0';
    strcpy(kata, sementara);
}

int cek_duplikat(char *cek_kata, char daftar_kata[400][200], int jumlah_kata) {
    for (int i = 0; i < jumlah_kata; i++) {
        if (strcmp(cek_data, daftar_kata[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int main(){
    char kata[200];
    char judul_baris[200];
    char kosa_kata_unik[400][200];
    int ketemu_kata_unik = 0;

    FILE *file1 = fopen("lirik.txt", "r");
    FILE *file2 = fopen("kosa-kata.txt", "w");

    if (fgets(judul_baris, 200, file1) != NULL) {
    printf("tesss");
}