/*Nama/NIM :    Azka Ihsan Nurrahman            / 18211002 */
/*              Fady Noor Ilmi                  / 18211015 */
/*              Naufal Dwi Satria Rindawarman   / 18211021 */
/*              Denis Enrico Hasyim             / 18211022 */
/*              Andre Aditya Pratama            / 18211034 */
/*Kelompok      : LikeABoss                                */
/*File : tools.c */


#include "tools.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <strings.h>
#include <windows.h>
#include "boolean.h"

void ambil(char input[100], int letak, char output[100]){
    int j=0;
    int spasi=0;
    int k = 0;
    int jml = 0;
    while (k != strlen(input)-1){
        if (input[k] == ' ')
            jml++;
        k++;
    }
    if ((jml+1) < letak){
        output[0] = '\0';
        output = NULL;
    }
    else{
            while (spasi != letak-1)
            {
                if (input[j]==' ')
                {
                    spasi++;}
                j++;
            }
            int i=0;
            while((input[j] != ' ') && (input[j] != '\0'))
            {
                output[i]=input[j];
                i++;
                j++;
            }
            output[i]='\0';
        }
}


char posisi(char input[100], int letak){
	return input[letak];
}

int apasama(char a[50], char b[50]){
    int la = strlen(a);
    int lb = strlen(b);

    if ((la == lb) && (memcmp(a, b, la) == 0))
        return 1;
    else
        return 0;
}
