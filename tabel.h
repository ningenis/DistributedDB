/*Nama/NIM :    Azka Ihsan Nurrahman            / 18211002 */
/*              Fady Noor Ilmi                  / 18211015 */
/*              Naufal Dwi Satria Rindawarman   / 18211021 */
/*              Denis Enrico Hasyim             / 18211022 */
/*              Andre Aditya Pratama            / 18211034 */
/*Kelompok      : LikeABoss                                */
/*File : tabel.h */


#ifndef TABE_H_INCLUDED
#define TABE_H_INCLUDED

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <strings.h>
#include <windows.h>
#include "tabel.c"

void createtable (char lok, char tab[15]);
/* Membuat tabel di suatu lokasi dalam basis data tersebar */

void insertmhs (char nim[8], char nama[50], char tgllahir[50], char kota[20], float ipk[5], int jmlsks[3], char lok);
/* Memasukkan data mahasiswa ke dalam suatu lokasi */
/* Data yang dimasukkan antara lain NIM, nama, tempat dan tanggal lahir, IPK, */
/* dan jumlah SKS */

void insertmk (char mk[10], char namamk[25], int sks, char bkeahlian[20], char lok);
/* Memasukkan daftar mata kuliah ke dalam suatu lokasi*/

void insertpengmk (char nim[10], char mk[10], int smt, char thajr[10], char nilai, char lok);
/* Memasukkan mata kuliah yang diambil oleh mahasiswa beserta nilai */

void insertedge (char lokasi1, char lokasi2, float bandwidth);
/* Menambahkan koneksi antara dua lokasi */

void insertlokasi (char nama, char serve, char clien, float cput);
/* Menambahkan server, client, dan CPU time di suatu lokasi */

void sorting(int tabel);

void pilihinsert (void);

#endif // TABE_H_INCLUDED
