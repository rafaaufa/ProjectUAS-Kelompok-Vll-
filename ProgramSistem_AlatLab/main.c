#include "alat.h"

//FUNGSI MENU
int main(int argc,char *argv[]){
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

    if (strcmp(username, "admin") == 0 && strcmp(password, "123") == 0) {
        printf("Login sebagai Admin berhasil!\n\n");
        printf("(Silahkan Tekan Enter)\n");
        getchar();
        ADMIN_MENU(alat,&count);
    }
    else if (strcmp(username, "user") == 0 && strcmp(password, "123") == 0) {
        printf("Login sebagai User berhasil!\n\n");
        printf("(Silahkan Tekan Enter)\n");
        getchar();
        USER_MENU(alat,&count);
    }
    else 
        printf("Login gagal,username atau password salah");

    SIMPAN_FILE(alat, count);
    return 0;
}