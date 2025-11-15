#include "alat.h"

int main(int argc,int *argv[]) {
    char login[10];
    int pilihan2;
    data alat[100];
    int count = 0;
    
    LIHAT_FILE(alat, &count);

    if(argc != 3){
        printf("Cara login : %s <username> <password>",argv[0]);
        return 1;
    }
    char *username = argv[1];
    char *password = argv[2];

}