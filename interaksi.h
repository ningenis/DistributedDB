/*Nama/NIM :    Azka Ihsan Nurrahman            / 18211002 */
/*              Fady Noor Ilmi                  / 18211015 */
/*              Naufal Dwi Satria Rindawarman   / 18211021 */
/*              Denis Enrico Hasyim             / 18211022 */
/*              Andre Aditya Pratama            / 18211034 */
/*Kelompok      : LikeABoss                                */
/*File : interaksi.h */
/* File header untuk modus persiapan */


#ifndef INTERAKSI_H_INCLUDED
#define INTERAKSI_H_INCLUDED
#include "eksternal.h"
#include "tools.h"
#include "tabel.h"
#include "interaksi.c"

void load(char nfile[30]);
/* Loading file input ke dalam struktur-struktur internal */
/* Perintah ini harus dijalankan terlebih dahulu sebelum perintah lain bisa */
/* dijalankan */

void open(char klokasi);
/* Masuk ke lingkungan salah satu lokasi dalam basis data tersebar, */
/* yaitu klokasi */
/* Klokasi harus sebuah kode lokasi yang memiliki client */

void save(char nfile[30]);
/* Menyimpan kondisi terakhir basis data tersebar ke dalam file input */

void reset();
/* Mengembalikan semua kondisi ke kondisi semula */

void addsite(char kodelokasi, char serve, char clien, float cpu);
/* Penambahan lokasi baru dalam basis data tersebar */

void addconn(char kodelokasi1, char kodelokasi2, float bandwidt);
/* Penambahan koneksi baru antara dua lokasi dalam basis data tersebar */

void create(char namatabel[10], char kodelokasi);
/* Membuat tabel baru pada suatu lokasi */

void list(char data[10], char mode[4]);
/* Menampilkan daftar lokasi, koneksi, server, client, dan tabel */

#endif // INTERAKSI_H_INCLUDED
