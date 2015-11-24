/*Nama/NIM :    Azka Ihsan Nurrahman            / 18211002 */
/*              Fady Noor Ilmi                  / 18211015 */
/*              Naufal Dwi Satria Rindawarman   / 18211021 */
/*              Denis Enrico Hasyim             / 18211022 */
/*              Andre Aditya Pratama            / 18211034 */
/*Kelompok      : LikeABoss                                */
/*File : eksternal.c */

#include "tabel.h"
#include "tools.h"
#include "eksternal.h"
#include "error.h"


void inputfile (char feks[100]){

    FILE *f;
    f = fopen(feks, "r");
    if (f == NULL)
        printf ("<error: file not found \n");
    else {

		//variabel///////////////////////
		int max = 256;
		int def = 0;
		int jml;
		char namal;
		int counter = 0;
		int halt = 0;
		int jmlnode;
		char temps[100];
		int asd;
		char jk[20];
		char ntabel[20];
		int loop;
		char t1[20];
		char t2[20];
		char t3[20];
		char t4[20];
		char t5[20];
		char t6[20];
		char t7[20];
		char t8[20];
        char tem[100];

		//////////////////////////////////

		fgets(temps, max, f); //isinya "@nodes"
        fgets(temps, max, f); // isisnya jumlah komputer
		ambil(temps, 1, jk); //ambil karakter pertama(jumlah komputer)
		jml = atoi(jk);

        while (halt != 1){

            if (def == 0) fgets(temps, max, f);

            if ((temps[0] == '@') && (temps[1] == '@')){
                counter++;
                namal = temps[2];
                fgets(temps, max, f);
                char s[2];
                    ambil(temps, 1, s);
                char c[2];
                    ambil(temps, 2, c);
                char cpu[10];
                    ambil(temps, 3, cpu);

                insertlokasi (namal, s[0], c[0], atof(cpu));

                fgets(temps, max, f);
                def = 1;

                /////////////////////////////////////////////////////
                strcpy(tem, temps);

                temps[strlen(temps)-1] = '\0';

                if (apasama("@edges", temps) || apasama("@edges", tem)){

                    halt = 1;

                    goto nodes;
                }
                //////////////////////////////////////////////////

            }
            else{
                ambil(temps, 1, ntabel);
                if (apasama(ntabel, "Mahasiswa")){

                    createtable(namal, ntabel);
                    fgets(temps, max, f); //asumsikan tabel selalu terurut
                    loop = 1;
                    while (loop == 1){
                        fgets(temps, max, f);
                        ambil(temps, 1, t1);
                        if ((temps[1] == '@') || (apasama(t1, "Mahasiswa")) || (apasama(t1, "MataKuliah"))|| (apasama(t1, "PengambilanMK"))){
                            loop = 0;
                            def = 1;
                            strcpy(tem, temps);
                            temps[strlen(temps)-1] = '\0';

                            if (apasama("@edges", temps) || apasama("@edges", tem)){
                                halt = 1;

                                goto nodes;
                            }

                        }
                        else{

                            char *u1;
                            char *u2;
                            char *u3;
                            char *u4;
                            ambil(temps, 2, t2);
                            ambil(temps, 3, t3);
                            ambil(temps, 4, t4);
                            ambil(temps, 5, t5);
                            ambil(temps, 6, t6);
                            ambil(temps, 7, t7);
                            ambil(temps, 8, t8);
                            if (t2[strlen(t2)-1] != '"'){
                                strcat(t2, " ");
                                strcat(t2, t3);
                                u1 = t4;
                                u2 = t5;
                                u3 = t6;
                                u4 = t7;
                            }
                            else{
                                u1 = t3;
                                u2 = t4;
                                u3 = t5;
                                u4 = t6;
                            }
                            if (t2[strlen(t2)-1] != '"'){
                                strcat(t2, " ");
                                strcat(t2, t4);
                                u1 = t5;
                                u2 = t6;
                                u3 = t7;
                                u4 = t8;
                            }
                            //char * name;
                            //if (t2[strlen(t2-1]) != '"')
                            //    name = strcat()

                            insertmhs (t1, t2, u1, u2, atof(u3), atoi(u4), namal);

                        }
                    }
                }
                else if (apasama(ntabel, "MataKuliah")){

                    createtable(namal, ntabel);
                    fgets(temps, max, f); //asumsikan tabel selalu terurut
                    loop = 1;
                    while (loop == 1){
                        fgets(temps, max, f);
                        ambil(temps, 1, t1);
                        if ((temps[1] == '@') || (apasama(t1, "Mahasiswa")) || (apasama(t1, "MataKuliah"))|| (apasama(t1, "PengambilanMK"))){
                            loop = 0;
                            def = 1;
                            strcpy(tem, temps);
                            temps[strlen(temps)-1] = '\0';

                            if (apasama("@edges", temps) || apasama("@edges", tem)){
                                halt = 1;

                                goto nodes;
                            }

                        }
                        else{

                            char *u1;
                            char *u2;
                            ambil(temps, 2, t2);
                            ambil(temps, 3, t3);
                            ambil(temps, 4, t4);
                            ambil(temps, 5, t5);
                            ambil(temps, 6, t6);
                            ambil(temps, 7, t7);
                            ambil(temps, 8, t8);
                            if (t2[strlen(t2)-1] != '"'){
                                strcat(t2, " ");
                                strcat(t2, t3);

                                u1 = t4;
                                u2 = t5;
                            }
                            else{
                                u1 = t3;
                                u2 = t4;
                            }
                            if (t2[strlen(t2)-1] != '"'){
                                strcat(t2, " ");
                                strcat(t2, t4);

                                u1 = t5;
                                u2 = t6;
                            }
                            if (t2[strlen(t2)-1] != '"'){
                                strcat(t2, " ");
                                strcat(t2, t5);

                                u1 = t6;
                                u2 = t7;
                            }
                            if (t2[strlen(t2)-1] != '"'){
                                strcat(t2, " ");
                                strcat(t2, t6);
                                u1 = t7;
                                u2 = t8;
                            }

                        insertmk (t1, t2, atoi(u1), u2, namal);

                        }
                    }
                }
                else if (apasama(ntabel, "PengambilanMK")){

                    createtable(namal, ntabel);

                    fgets(temps, max, f); //asumsikan tabel selalu terurut
                    loop = 1;
                    while (loop == 1){
                        fgets(temps, max, f);
                        ambil(temps, 1, t1);
                        if ((temps[1] == '@') || (apasama(t1, "Mahasiswa")) || (apasama(t1, "MataKuliah"))|| (apasama(t1, "PengambilanMK"))){
                            loop = 0;
                            def = 1;
                            strcpy(tem, temps);
                            temps[strlen(temps)-1] = '\0';

                            if (apasama("@edges", temps) || apasama("@edges", tem)){
                                halt = 1;

                                goto nodes;

                            }

                        }
                        else{

                            ambil(temps, 2, t2);
                            ambil(temps, 3, t3);
                            ambil(temps, 4, t4);
                            insertpengmk (t1, t2, atoi(t3), t4, t5[0], namal);

                        }
                    }
                }
            }

            //halting;
        }
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\masuk ke node\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

    nodes:

            fgets(temps, max, f);
            int jumlah;
            int k = 1;
            ambil(temps, 1, jumlah);
            while (k != atoi(jumlah)){
                fgets(temps, max, f);
                char l1[2];
                    ambil(temps, 1, l1);
                char *l2[2];
                    ambil(temps, 2, l2);
                char *bw[10];
                    ambil(temps, 3, bw);
                insertedge(l1[0], l2[0], atof(bw));
                k++;
            }

    }

}

