/*Nama/NIM :    Azka Ihsan Nurrahman            / 18211002 */
/*              Fady Noor Ilmi                  / 18211015 */
/*              Naufal Dwi Satria Rindawarman   / 18211021 */
/*              Denis Enrico Hasyim             / 18211022 */
/*              Andre Aditya Pratama            / 18211034 */
/*Kelompok      : LikeABoss                                */
/*File :interaksi.c */


#include "eksternal.h"
#include "interaksi.h"
#include "simulasi.h"
#include "tools.h"
#include "tabel.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <strings.h>
#include <windows.h>

char * fileinput = "input.in";

void load(char nfile[30]){

    inputfile (nfile);

}
void open(char klokasi){
    int halting = 0;
    char com[20];

    while (halting == 0){
        char s[10];
        printf("\n%c >> ", klokasi);

        gets (&s);
        ambil(s,1, com);
        if (apasama(com, "retrieve"))
            retrieve(1);
        else if (apasama(com, "insert"))
            insert(1);
        else if (apasama(com, "delete"))
            delet(1);
        else if (apasama(com, "update"))
            update(1);
        else if (apasama(com, "close"))
            halting = 1;
        else
            errorkode(4);
    }
}
void save(char nfile[30]){
   	//rename ("temp.in", nfile);
	int i;
	int n;
	int a;
	FILE *fileku;
	fileku = fopen (nfile, "w");

    fprintf (fileku, "%d", a);


	fclose (fileku);
}
void reset(int i){
    //deletefile ("temp.in")
    printf("\n fileinput gue %s", fileinput);
    inputfile(fileinput);
}

void addsite(char kodelokasi, char serve, char clien, float cpu){
    insertlokasi (kodelokasi, serve, clien, cpu);
}
void addconn(char kodelokasi1, char kodelokasi2, float bandwidt){
    insertedge (kodelokasi1, kodelokasi2, bandwidt);
}
void create(char namatabel[10], char kodelokasi){
    createtable (kodelokasi, namatabel);
}

void list(char data[10], char mode[4]){

    if (apasama(data, "all")){
        daftar (mode, 1);
        daftar (mode, 2);}
    else if (apasama(data, "sites"))
        daftar (mode, 2);
    else if (apasama(data, "connections"))
        daftar (mode, 1);
    else if (apasama(data, "servers"))
        daftar (mode, 3);
    else if (apasama(data, "clients"))
        daftar (mode, 4);
    else if (apasama(data, "tables"))
        daftar (mode, 5);

}
