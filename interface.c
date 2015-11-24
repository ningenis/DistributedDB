/*Nama/NIM :    Azka Ihsan Nurrahman            / 18211002 */
/*              Fady Noor Ilmi                  / 18211015 */
/*              Naufal Dwi Satria Rindawarman   / 18211021 */
/*              Denis Enrico Hasyim             / 18211022 */
/*              Andre Aditya Pratama            / 18211034 */
/*Kelompok      : LikeABoss                                */
/* File : interface.c */
/* File Body dari Interface(Antar Muka) Program */

#include "interface.h"
#include <stdio.h>

void displayheader(void)
/* I.S : Menu header belum ditampilkan */
/* F.S : Menu header sudah ditampilkan */
{
	system("CLS");
	printf("\n");
	printf("\n");
	printf("################################################################################");
	printf("########################## Program Basis Data Tersebar #########################");
	printf("################################################################################");
	printf("############################# Created by LikeABoss #############################");
	printf("####################### Andre, Azka, Denis, Fady, Naufal #######################");
	printf("##################### Copyright (C) 2012 All Rights Reserved ###################");
	printf("################################################################################\n");
	printf("################ Selamat datang di Program Basis Data Tersebar #################\n");
	printf("\n");
}

void displaypersiapan(void)
/* I.S : Tampilan modus persiapan belum ditampilkan */
/* I.S : Tampilan modus persiapan sudah ditampilkan */
{
	printf("Anda kini berada pada Modus Persiapan\n");
	printf("Silahkan ketikkan perintah yang diinginkan\n\n");
	printf("Pilihan Perintah :\n");
	printf(">load\n");
	printf(">open\n");
	printf(">save\n");
	printf(">reset\n");
	printf(">addsite\n");
	printf(">addconn\n");
	printf(">create\n");
	printf(">list\n");
	printf(">help\n");
	printf(">exit\n");
}

void displaysimulasi(void)
/* I.S : Tampilan modus simulasi belum ditampilkan */
/* I.S : Tampilan modus simulasi sudah ditampilkan */
{
	printf("Anda kini berada pada Modus Simulasi\n");
	printf("Silahkan ketikkan perintah yang diinginkan\n\n");
	printf("Pilihan Perintah :\n");
	printf(">retrieve\n");
	printf(">insert\n");
	printf(">delete\n");
	printf(">update\n");
	printf(">close\n");
}

void displayhelp(void)
/* I.S : Menu bantuan belum ditampilkan */
/* F.s : Menu bantuan telah ditampilkan */
{
	printf(" '  -----  '  Menu Bantuan\n");
	printf("              Silahkan dibaca baik-baik petunjuk di bawah ini\n");
	printf("  |       |   - Ada dua Modus dalam Program ini, yaitu :\n");
	printf("  |       |     1. Modus Persiapan\n");
	printf("                2. Modus Simulasi\n");
	printf(" '  -----  '  - Pada Modus Persiapan, terdapat beberapa perintah penting\n");
	printf("    |   |       1. Load : Perintah yang paling pertama harus dijalankan\n");
	printf("    |   |       2. Open : Untuk masuk ke modus simulasi\n");
	printf("    -----       3. Save : Menyimpan semua kondisi terakhir\n");
	printf("                4. Reset : Mengembalikan kondisi simulasi ke kondisi awal\n");
	printf("    TIPS        5. Addsite/Addcon : Untuk menambah lokasi atau koneksi\n");
	printf("    AND         6. Create : Untuk menambahkan tabel pada lokasi tertentu\n");
	printf("    TRIK        7. List : Untuk melihat daftar isi basis data\n");
	printf("                8. Exit : Untuk keluar dari program\n");
	printf("    BY        - Pada Modus Simulasi, terdapat beberapa perintah penting\n");
	printf("    LIKE        1. Retrieve : Mengambil data dari suatu lokasi tertentu\n");
	printf("    A           2. Insert : Menambahakan record ke suatu tabel\n");
	printf("    BOSS        3. Delete : Menghapus record suatu tabel\n");
	printf("                4. Update : Mengubah data record dalam suatu tabel\n");
	printf("                5. Close : Untuk kembali ke Modus Persiapan\n");
	printf("Tekan Enter untuk kembali ke Menu Utama\n");
}
