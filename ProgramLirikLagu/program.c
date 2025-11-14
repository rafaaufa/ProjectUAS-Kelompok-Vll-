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
int main(){
    char kata[200];
    FILE *file1 = fopen("lirik.txt", "r");
    FILE *file2 = fopen("kosa-kata.txt", "w");
    printf("tesss");
}