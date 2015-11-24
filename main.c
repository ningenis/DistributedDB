/*Nama/NIM :    Azka Ihsan Nurrahman            / 18211002 */
/*              Fady Noor Ilmi                  / 18211015 */
/*              Naufal Dwi Satria Rindawarman   / 18211021 */
/*              Denis Enrico Hasyim             / 18211022 */
/*              Andre Aditya Pratama            / 18211034 */
/*Kelompok      : LikeABoss                                */
/*File : main.c */


#include "tabel.h"
#include "eksternal.h"
#include "interaksi.h"
#include "simulasi.h"
#include "tools.h"
#include "error.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <strings.h>
#include <windows.h>
#include "interface.h"


int main()

{
    //char namalokasi;
    //char server;
    //char client;
    //float cputime;
    //dataMhs tabMhs[30];
    //dataMK tabMK[30];
    //dataPengMK tabpengMK[30];
    //recordtab recordtabel;
    //connections edges[25];

    jmllokasi = 0;
    //insertlokasi('A', 'Y', 'Y', 0.0025);

    //insertmhs("1996", "Amin Badrun", "1-8-1990", "Bandung", '4.00', 12, 'A');
    //insertmhs("19960", "Am Badru", "1-8-1990", "Bandun", '4.00', 12, 'A');
    //insertmhs("199600", "Ami Badr", "1-8-1990", "Bandu", '4.00', 12, 'A');
    //insertmhs("1996000", "Amin Bad", "1-8-1990", "Band", '4.00', 12, 'A');
    //insertlokasi('B', 'N', 'Y', 0.002);
    //insertmk("if9289", "algoritma", 3, "pemrograman", 'B');
    //insertmhs("19960", "Amin Band", "1-8-1990", "Band", '4.00', 13, 'B');
//
    //insertlokasi('C', 'Y', 'T', 0.003);
    //insertlokasi('D', 'Y', 'Y', 0.001);
    //insertpengmk("1996989889", "if9289", 2, "2009-2020", 'A', 'D');

    //insertlokasi('E', 'T', 'Y', 0.0);


    //insertedge('A', 'B', 2.5);
    //insertedge('A', 'C', 1.0);
    //insertedge('B', 'C', 2.0);
    //insertedge('C', 'D', 0.5);
    //insertedge('B', 'E', 2.5);
    //insertedge('C', 'E', 3.0);
    //insertedge('E', 'A', 3.0);
//
                        ////////////////////////////////////////////////////////////////////////////////////////////////////////////
                        //printf ("\n hello world" );
                        //printf ("\n %c", lokasi[4].edges[0].lokasi2);
                        //char *qwe = "metciank";

                        //printf("%d",apasama(qwe, "metciank"));
                        //int asd;
                        //scanf("%d", asd);
                        //////////////////////////////////////////////////////////////////////////////////////////////////////////

    //printf("\n%c", atoi('A'));
    //char qwe[56];
    //strcpy (qwe, "pratamov");
    //printf ("%s", qwe);
    //int asd;
    //scanf("%d", &asd);
    displayheader();
    displaypersiapan();
    char temp[100];
    char command[20];
    char temp1[20];
    char temp2[20];
    char * temp3;
    char * temp4;
    char temp5[20];
    char temp6[20];
    char * fileinput = "input.in";
    int halt = 0;

    while (halt == 0){
        printf("\n> ");
        gets(&temp);
        ambil(temp,1,command);
        if (apasama(command,"load")){

            ambil(temp, 2, temp1);

            fileinput = temp1;

            if (apasama(fileinput, "#") == 1)
                errorkode(1);
            else
                load(fileinput);
            }
        else if (apasama(command, "open")){
            ambil(temp, 2, temp1);
            displaysimulasi();
            open(temp1[0]);
        }
        else if (apasama(command, "save")){
            if (temp1 == "#")
                save(fileinput);
            else
                save(temp1);
        }
        else if (apasama(command, "addsite")){  //////////////////////////////
            ambil(temp, 2, temp1);
            ambil(temp, 3, temp2);
            ambil(temp, 4, temp5);
            ambil(temp, 5, temp6);
            addsite(temp1[0], temp2[0], temp5[0], atof(temp6));
        }
        else if (apasama(command,"addconn")){
            ambil(temp, 2, temp1);
            ambil(temp, 3, temp2);
            ambil(temp, 4, temp5);
            ambil(temp, 5, temp5);
            if (apasama(temp5, "#"))
                errorkode(6);
            addconn(temp1[0], temp2[0], atof(temp5));
        }
        else if (apasama(command, "create")){
            ambil(temp, 2, temp1);
            ambil(temp, 3, temp2);
            create(temp1, temp2[0]);
        }
        else if (apasama(command,"reset"))
            reset(1);

        else if (apasama(command,"list")){      /////////////////////////////////
            ambil(temp, 2, temp1);
            ambil(temp, 3, temp2);
            if (apasama(temp1, "asc")||apasama(temp1, "desc")||apasama(temp1, "#")){
                temp3 = "all";
                temp4 = "asc";
            }
            else if (apasama(temp1, "sites")){
                temp3 = "sites";
                if (apasama(temp2, "asc")||(apasama(temp2, "#")))
                    temp4 = "asc";
                else if(apasama(temp2, "desc"))
                    temp4 = "desc";
                else
                    errorkode(1);
            }
            else if (apasama(temp1, "connections")){
                temp3 = "connections";
                if (apasama(temp2, "asc")||(apasama(temp2, "#")))
                    temp4 = "asc";
                else if(apasama(temp2, "desc"))
                    temp4 = "desc";
                else
                    errorkode(1);
            }
            else if (apasama(temp1, "servers")){
                temp3 = "servers";
                if (apasama(temp2, "asc")||(apasama(temp2, "#")))
                    temp4 = "asc";
                else if(apasama(temp2, "desc"))
                    temp4 = "desc";
                else
                    errorkode(1);
            }
            else if (apasama(temp1, "clients")){
                temp3 = "clients";
                if (apasama(temp2, "asc")||(apasama(temp2, "#")))
                    temp4 = "asc";
                else if(apasama(temp2, "desc"))
                    temp4 = "desc";
                else
                    errorkode(1);
            }
            else if (apasama(temp1, "tables")){
                temp3 = "tables";
                if (apasama(temp2, "asc")||(apasama(temp2, "#")))
                    temp4 = "asc";
                else if(apasama(temp2, "desc"))
                    temp4 = "desc";
                else
                    errorkode(1);
            }
            else
                errorkode(1);
            list (temp3, temp4);

        }

        else if (apasama(command, "help"))
            displayhelp();
        else if (apasama(command, "exit"))////////////////////////////////////////////////
            halt = 1;
        else
            printf("error, type \"help\" to display help");
    }
    return 0;
}

