/*Nama/NIM :    Azka Ihsan Nurrahman            / 18211002 */
/*              Fady Noor Ilmi                  / 18211015 */
/*              Naufal Dwi Satria Rindawarman   / 18211021 */
/*              Denis Enrico Hasyim             / 18211022 */
/*              Andre Aditya Pratama            / 18211034 */
/*Kelompok      : LikeABoss                                */
/* File : interface.h */
/* File Spesifikasi/Header dari Interface(Antar Muka) Program */

#ifndef interface_H
#define interface_H
#include <stdio.h>
#include "interface.c"

void displayheader(void);
/* I.S : Menu header belum ditampilkan */
/* F.S : Menu header sudah ditampilkan */

void displaypersiapan(void);
/* I.S : Tampilan modus persiapan belum ditampilkan */
/* I.S : Tampilan modus persiapan sudah ditampilkan */

void displaysimulasi(void);
/* I.S : Tampilan modus simulasi belum ditampilkan */
/* I.S : Tampilan modus simulasi sudah ditampilkan */

void displayhelp(void);
/* I.S : Menu bantuan belum ditampilkan */
/* F.s : Menu bantuan telah ditampilkan */

#endif
