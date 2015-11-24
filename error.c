/*Nama/NIM :    Azka Ihsan Nurrahman            / 18211002 */
/*              Fady Noor Ilmi                  / 18211015 */
/*              Naufal Dwi Satria Rindawarman   / 18211021 */
/*              Denis Enrico Hasyim             / 18211022 */
/*              Andre Aditya Pratama            / 18211034 */
/*Kelompok      : LikeABoss                                */
/*File : error.c */


#include "error.h"
void errorkode(int code){
    if (code == 1)
        printf ("\n<error: kesalahan parsing> \n");
    else if (code == 2)
        printf ("\n<error: file not found> \n");
    else if (code == 5)
        printf ("\n<error: input tidak dikenali> \n");
    else
        printf ("\n<error bro> \n");
    return;
}

void halting(){
    char a;
    scanf("%c", &a);
}
