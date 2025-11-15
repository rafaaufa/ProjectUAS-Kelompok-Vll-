#include "alat.h"

//FUNGSI ADMIN
void ADMIN_MENU(data alat[],int *count){
    int pilihan1;
    system("cls");
    printf("------------------------------\n");
    printf("\tSELAMAT DATANG\n");
    do{
        printf("------------------------------\n");
        printf("[1.] TAMBAH DATA\n");
        printf("[2.] LIHAT DATA\n");
        printf("[3.] EDIT DATA\n");
        printf("[4.] HAPUS DATA\n");
        printf("[5.] KELUAR\n");
        printf("Silahkan Masukkan Pilihan : ");
        scanf("%d",&pilihan1);
        getchar();
        printf("\n------------------------------\n");
        switch (pilihan1){
            case 1 :ADMIN_TAMBAHDATA(alat,count);
                    TAMBAH_FILE(alat,count);
                    break;
            case 2 :ADMIN_LIHATDATA(alat,*count);
                    break;
            case 3 :ADMIN_EDITDATA(alat,count);
                    break;
            case 4 :ADMIN_HAPUSDATA(alat,count);
                    break;
            case 5 :system("cls");
                    SIMPAN_FILE(alat,*count);
                    printf("\nTerima Kasih ,Program Selesai");
                    break;
            default :printf("\nEror!! SILAHKAN LOGIN ULANG\n");
        }
        if(pilihan1 != 5){ 
        printf("\nTekan Enter Untuk Kembali Ke Menu...");
        getchar();
        system("cls");
    }
    }while(pilihan1 != 5);
}

void ADMIN_TAMBAHDATA(data alat[],int *count){
    printf("Masukkan ID : ");
    scanf("%d",&alat[*count].id);
    getchar();
    printf("Silahkan Masukkan Nama Alat : ");
    fgets(alat[*count].nama_alat,sizeof(alat[*count].nama_alat),stdin);   
    alat[*count].nama_alat[strcspn(alat[*count].nama_alat,"\n")] = '\0';

    printf("Silahkan Masukkan Merek : ");
    fgets(alat[*count].merek,sizeof(alat[*count].merek),stdin);    
    alat[*count].merek[strcspn(alat[*count].merek,"\n")] = '\0';

    printf("Silahkan Masukkan Model : ");
    fgets(alat[*count].model,sizeof(alat[*count].model),stdin);    
    alat[*count].model[strcspn(alat[*count].model,"\n")] = '\0';

    printf("Silahkan Masukkan Tahun Produksi : ");
    scanf("%d",&alat[*count].tahunproduksi);
    getchar();
    printf("Silahkan Masukkan Jumlah : ");
    scanf("%d",&alat[*count].jumlah);   
    alat[*count].dipinjam = 0;
    (*count)++;
}

void ADMIN_LIHATDATA(data alat[],int count){
    if (count == 0){
        printf("Belum Ada Data");
        return;
    } 
    printf("\n\tDAFTAR ALAT YANG TERSEDIA\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("| %-5s| %-20s| %-15s| %-15s| %-6s| %-7s|\n",
        "ID", "Nama Alat", "Merek", "Model", "Tahun", "Jumlah");
    printf("---------------------------------------------------------------------------------\n");
    for(int i = 0; i < count; i++) {
        printf("| %-5u| %-20s| %-15s| %-15s| %-6u| %-7u|\n",
            alat[i].id,
            alat[i].nama_alat,
            alat[i].merek,
            alat[i].model,
            alat[i].tahunproduksi,
            alat[i].jumlah);
    }
    printf("---------------------------------------------------------------------------------\n");
}

void ADMIN_EDITDATA(data alat[],int *count){
    int edit;
    int idnya = 0;
    printf("Masukkan ID Yang Ingin Diedit : ");
    scanf("%d",&edit);
    getchar();
    for (int i = 0; i < *count ; i++){
        if(alat[i].id == edit){
            idnya = 1;
            printf("Silahkan Masukkan Nama Alat : ");
            fgets(alat[i].nama_alat,sizeof(alat[i].nama_alat),stdin);   
            alat[i].nama_alat[strcspn(alat[i].nama_alat,"\n")] = 0;

            printf("Silahkan Masukkan Merek : ");
            fgets(alat[i].merek,sizeof(alat[i].merek),stdin);    
            alat[i].merek[strcspn(alat[i].merek,"\n")] = 0;

            printf("Silahkan Masukkan Model : ");
            fgets(alat[i].model,sizeof(alat[i].model),stdin);    
            alat[i].model[strcspn(alat[i].model,"\n")] = 0;

            printf("Silahkan Masukkan Tahun Produksi : ");
            scanf("%d",&alat[i].tahunproduksi);
            getchar();
            printf("Silahkan Masukkan Jumlah : ");
            scanf("%d",&alat[i].jumlah);
            printf("\nData dengan ID %d berhasil diedit!\n",edit);
            break;
            }
        }
    if (idnya == 0){
        printf("ID Tidak Ditemukan!!");
    }
    SIMPAN_FILE(alat,*count);
}

