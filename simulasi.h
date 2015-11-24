/*Nama/NIM :    Azka Ihsan Nurrahman            / 18211002 */
/*              Fady Noor Ilmi                  / 18211015 */
/*              Naufal Dwi Satria Rindawarman   / 18211021 */
/*              Denis Enrico Hasyim             / 18211022 */
/*              Andre Aditya Pratama            / 18211034 */
/*Kelompok      : LikeABoss                                */
/*File : simulasi.h */
/* File header untuk modus simulasi */

#ifndef SIMULASI_H_INCLUDED
#define SIMULASI_H_INCLUDED
#include "simulasi.c"
#include "tabel.h"

void retrieve(int a);
/* Menampilkan data yang terdapat dalam tabel */
/* Dapat menggunakan filter untuk menampilkan data yang diinginkan */

void insert(int a);
/* Menambahkan suatu record ke dalam tabel */

void delet(int a);
/* Menghapus suatu record dari dalam tabel */

void update (int a);
/* Mengubah data record dalam suatu tabel */

void close (int a);
/* Menutup modus simulasi */

void retrieve(int a);

#endif // SIMULASI_H_INCLUDED
