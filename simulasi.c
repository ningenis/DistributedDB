/*Nama/NIM :    Azka Ihsan Nurrahman            / 18211002 */
/*              Fady Noor Ilmi                  / 18211015 */
/*              Naufal Dwi Satria Rindawarman   / 18211021 */
/*              Denis Enrico Hasyim             / 18211022 */
/*              Andre Aditya Pratama            / 18211034 */
/*Kelompok      : LikeABoss                                */
/*File : simulasi.c */

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

void insert(int a){
    pilihinsert();
}
void delet(int a){
    return 0;
}
void update(int a){
    return 0;
}

void retrieve(int a){/*/*
    int jmllokasi;
    char ntabel[20];
    char cond[30];
    char kol[50];
    char temp1[20], temp2[20],temp3[20],temp4[20],temp5[20];
    asd:
    printf("\nMasukkan nama tabel: ");
        gets(&ntabel);
    printf("\nMasukkan nama kolom (pisahkan dengan spasi atau * untuk memilih semua): ");
        gets(&kol);
    printf("\nMasukkan kondisi pencarian: ");
        gets(&cond);

        ambil(cond, 1, temp1);
        ambil(cond, 2, temp2);
        ambil(cond, 3, temp3);
        /*if (!(apasama(temp2, "="))){
            errorkode(5);
            break;
        }
        else
            int kondisi;*/
            /*
        NIM Nama TglLahir KotaAsal IPK JumlahSKS
            if (apasama (temp1, "NIM"))
                kondisi = 1;
            else if (apasama (temp1, "NIM"))
                kondisi = 1;
            else if (apasama (temp1, "Nama"))
                kondisi = 1;
            else if (apasama (temp1, "TglLahir"))
                kondisi = 1;
            else if (apasama (temp1, "KotaAsal"))
                kondisi = 1;
            else if (apasama (temp1, "IPK"))
                kondisi = 1;
            else if (apasama (temp1, "JumlahSKS"))
                kondisi = 1;
            else if (apasama (temp1, "NIM"))
                kondisi = 1;
            else if (apasama (temp1, "NIM"))
                kondisi = 1;
            else if (apasama (temp1, "NIM"))
                kondisi = 1;
            else if (apasama (temp1, "NIM"))
                kondisi = 1;
            else if (apasama (temp1, "NIM"))
                kondisi = 1;
            else if (apasama (temp1, "NIM"))
                kondisi = 1;
            else if (apasama (temp1, "NIM"))
                kondisi = 1;
            else if (apasama (temp1, "NIM"))
                kondisi = 1;
            else if (apasama (temp1, "NIM"))
                kondisi = 1;
            else if (apasama (temp1, "NIM"))
                kondisi = 1;
*/
    ///////////opsi///////////////////////
/*
    if (kol[0] == '*'){
        if (apasama("Mahasiswa", ntabel) || apasama("mahasiswa", ntabel)){
            printf("\nTabel Mahasiswa");
            printf("\nNIM\tNama\t\tTglLahir\tKotaAsal\tIPK\tJumlahSKS");
            char ada[20];
            int j = 0;

            char cond1, cond2, cond3;
            ambil(cond, 1, cond1);
            ambil(cond, 2, cond2);
            ambil(cond, 3, cond3);

            while ((j != jmllokasi-1) && (jmllokasi != 0)){
                if (apasama (cond2, "=")){
                    if (apasama (cond3, "NIM"))
                        ada = lokasi[j].tabMhs[0].NIM;
                    else if (apasama (cond1, "Nama"))
                        strcpy(ada,lokasi[j].tabMhs[0].Nama);
                    else if (apasama (cond1, "TglLahir"))
                        strcpy(ada,lokasi[j].tabMhs[0].TglLahir);
                    else if (apasama (cond1, "KotaAsal"))
                        strcpy(ada,lokasi[j].tabMhs[0].KotaAsal);
                    else if (apasama (cond1, "IPK"))
                        strcpy(ada,lokasi[j].tabMhs[0].IPK);
                    else if (apasama (cond1, "JumlahSKS"))
                        strcpy(ada,lokasi[j].tabMhs[0].JmlSKS);
                    else
                        errorkode (5);
                }
                else
                    strcpy (ada, cond3);
                int k = 0;
                if ((lokasi[j].recordtabel.tmhs != 99) && (lokasi[j].recordtabel.tmhs != 0)){
                    while ((k <= lokasi[j].recordtabel.tmhs) && (ada == cond3)){
                        printf("\n %s\t%s\t%s\t%s\t%f\t%d", lokasi[j].tabMhs[k].NIM, lokasi[j].tabMhs[k].Nama, lokasi[j].tabMhs[k].TglLahir, lokasi[j].tabMhs[k].KotaAsal, lokasi[j].tabMhs[k].IPK, lokasi[j].tabMhs[k].JmlSKS);
                        k++;
                        if (apasama (cond2, "=")){
                            if (apasama (cond3, "NIM"))
                                strcpy(ada, lokasi[j].tabMhs[k].NIM);
                            else if (apasama (cond1, "Nama"))
                                strcpy(ada, lokasi[j].tabMhs[k].Nama);
                            else if (apasama (cond1, "TglLahir"))
                                strcpy(ada, lokasi[j].tabMhs[k].TglLahir);
                            else if (apasama (cond1, "KotaAsal"))
                                strcpy(ada, lokasi[j].tabMhs[k].KotaAsal);
                            else if (apasama (cond1, "IPK"))
                                strcpy(ada, lokasi[j].tabMhs[k].IPK);
                            else if (apasama (cond1, "JumlahSKS"))
                                strcpy(ada, lokasi[j].tabMhs[k].JmlSKS);
                            else
                                errorkode (5);
                        }
                        else
                            strcpy(ada, cond3);
                    }
                }
                j++;
            }
        }
        if (apasama("PengambilanMK", ntabel)||apasama("pengambilanmk", ntabel)||apasama("pengambilanMK", ntabel)){
            printf("\nTabel PengambilanMK");
            printf("\nNIM\tKodeMK\tSemester\tThnAkademik\tNilai");
            int j = 0;
            while (j != jmllokasi-1){
                //printf("%d", lokasi[j].recordtabel.tmhs);
                //int asd;
                //scanf("%d", &asd);
                int k = 0;
                if ((lokasi[j].recordtabel.tpeng != 99) && (lokasi[j].recordtabel.tpeng != 0)){
                    while (k <= lokasi[j].recordtabel.tpeng-1){
                        printf("\n %s\t%s\t%d\t%s\t%c", lokasi[j].tabpengMK[k].NIM, lokasi[j].tabpengMK[k].MK, lokasi[j].tabpengMK[k].semester, lokasi[j].tabpengMK[k].TahunAjaran, lokasi[j].tabpengMK[k].Nilai);
                        k++;
                    }
                }
                j++;
            }
        }
        if (apasama("MataKuliah", ntabel) || apasama("matakuliah", ntabel)){
            printf("\nTabel MataKuliah");
            printf("\nKodeMK\tNamaMK\t\tSKS\tBidang");
            int j = 0;
            while (j != jmllokasi-1){
                //printf("%d", lokasi[j].recordtabel.tmhs);
                int k = 0;
                printf("\ntester: %s\t%s\t%d\t%s", lokasi[2].tabMK[0].MK, lokasi[2].tabMK[0].NamaMK, lokasi[2].tabMK[0].SKS, lokasi[2].tabMK[0].BKeahlian);
                printf("\ntester: %s\t%s\t%d\t%s", lokasi[2].tabMK[1].MK, lokasi[2].tabMK[1].NamaMK, lokasi[2].tabMK[1].SKS, lokasi[2].tabMK[1].BKeahlian);
                printf("\ntester: %s\t%s\t%d\t%s", lokasi[2].tabMK[2].MK, lokasi[2].tabMK[2].NamaMK, lokasi[2].tabMK[2].SKS, lokasi[2].tabMK[2].BKeahlian);
                int asd;
                scanf("%d", &asd);

                if ((lokasi[j].recordtabel.tmk != 99) && (lokasi[j].recordtabel.tmk != 0)){
                    while (k <= lokasi[j].recordtabel.tmk-1){
                        printf("\n%s\t%s\t%d\t%s", lokasi[j].tabMK[k].MK, lokasi[j].tabMK[k].NamaMK, lokasi[j].tabMK[k].SKS, lokasi[j].tabMK[k].BKeahlian);
                        k++;
                    }
                }
                j++;
            }
        }
        else
            errorkode(5);
    }
    else{
        char temp1[20], temp2[20],temp3[20],temp4[20],temp5[20];
        int jmlkondisi = 0;
        ambil(kol, 1, temp1);
        ambil(kol, 2, temp2);
        ambil(kol, 3, temp3);
        ambil(kol, 4, temp4);
        ambil(kol, 5, temp5);
        ambil(kol, 5, temp5);
        //printf("\n%d %d %d %d %d", strlen(temp1),strlen(temp2),strlen(temp3),strlen(temp4),strlen(temp5));
        //if (temp5 == NULL)
        int i=0;
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////bagian mahasiswa////////////////////////////////////////////////////////////////////////////////
        if (apasama("Mahasiswa", ntabel)||apasama("mahasiswa", ntabel)){
            printf("\nTabel Mahasiswa");
            if (strlen(temp2) == 0){
                printf("\n================");
                printf ("\n%s", temp1);
                printf("\n================");
                int k = 0;
                while ((k != (jmllokasi-1)) && (jmllokasi != 0)){
                    int j = 0;
                    if ((lokasi[k].recordtabel.tmhs != 99) && (lokasi[k].recordtabel.tmhs != 0)){
                        while (j != (lokasi[k].recordtabel.tmhs)){
                            printf("\n%s", isikolom(ntabel, temp1, j, k));
                            j++;
                        }
                    }
                    k++;
                }
            }
            else if ((strlen(temp2) != 0) && (strlen(temp3) == 0)&& (strlen(temp4) == 0)&& (strlen(temp5) == 0)){
                int k = 0;
                printf("\n==================================");
                printf("\n%s\t%s", temp1, temp2);
                printf("\n==================================");
                if (jmllokasi != 0){
                    int j = 0;
                    while (k <= jmllokasi-1){
                        if ((lokasi[k].recordtabel.tmhs != 99) && (lokasi[k].recordtabel.tmhs != 0)){
                            while (j <= (lokasi[k].recordtabel.tmhs-1)){
                                printf("\n%s\t\t%s", isikolom(ntabel, temp1, j, k), isikolom(ntabel, temp2, j, k));
                                j++;
                            }
                        }
                        k++;
                    }
                }
            }
            else if ((strlen(temp2) != 0) && (strlen(temp3) != 0)&& (strlen(temp4) == 0)&& (strlen(temp5) == 0)){
                printf("\n==========================================================");
                printf("\n %s\t%s\t%s", temp1, temp2, temp3);
                printf("\n==========================================================");
                int k = 0;
                while((k != jmllokasi-1) && (jmllokasi != 0)){
                    int j = 0;
                    if (lokasi[k].recordtabel.tmhs != 99){
                        while (j != (lokasi[k].recordtabel.tmhs-1)){
                            printf("\n %s\t%s\t%s", isikolom(ntabel, temp1, j, k), isikolom(ntabel, temp2, j, k), isikolom(ntabel, temp3, j, k));
                            j++;
                        }
                    }
                    k++;
                }
            }
            else if ((strlen(temp2) != 0) && (strlen(temp3) != 0)&& (strlen(temp4) != 0)&& (strlen(temp5) == 0)){
                printf("\n=======================================================================================");
                printf("\n %s\t%s\t%s\t%s", temp1, temp2, temp3, temp4);
                printf("\n=======================================================================================");
                int k = 0;
                while ((k != jmllokasi) && (jmllokasi != 0)){
                    int j = 0;
                    if (lokasi[k].recordtabel.tmhs != 99){
                        while (j != (lokasi[k].recordtabel.tmhs-1)){
                            printf("\n %s\t%s\t%s\t%s", isikolom(ntabel, temp1, j, k), isikolom(ntabel, temp2, j, k), isikolom(ntabel, temp3, j, k), isikolom(ntabel, temp4, j, k));
                            j++;
                        }
                    }
                    k++;
                }
            }
            else if ((strlen(temp2) != 0) && (strlen(temp3) != 0)&& (strlen(temp4) != 0)&& (strlen(temp5) != 0)){
                printf("\n=========================================================================================");
                printf("\n %s\t%s\t%s\t%s\t%s", temp1, temp2, temp3, temp4, temp5);
                printf("\n=========================================================================================");
                int k = 0;
                while (k != jmllokasi){
                    int j = 0;
                    if (lokasi[k].recordtabel.tmhs != 99){
                        while (j != (lokasi[k].recordtabel.tmhs-1)){
                            printf("\n %s\t%s\t%s\t%s\t%s", isikolom(ntabel, temp1, j, k), isikolom(ntabel, temp2, j, k), isikolom(ntabel, temp3, j, k), isikolom(ntabel, temp4, j, k), isikolom(ntabel, temp5, j, k));
                            j++;
                        }
                    }
                    k++;
                }
            }
        }
/////////////////////////////////////////////////////////////////////////////////////////
//////////////////////bagian matakuliah/////////////////////////////////////////////////
        if (apasama("MataKuliah", ntabel)||apasama("matakuliah", ntabel)){

            printf("\nTabel MataKuliah");

            if (strlen(temp2) == 0){
                printf("\n================");
                printf ("\n%s", temp1);
                printf("\n================");
                int k = 0;
                while ((k != (jmllokasi-1)) && (jmllokasi != 0)){
                    int j = 0;
                    if ((lokasi[k].recordtabel.tmk != 99) && (lokasi[k].recordtabel.tmk != 0)){
                        while (j != (lokasi[k].recordtabel.tmk)){
                            printf("\n%s", isikolom(ntabel, temp1, j, k));
                            j++;
                        }
                    }
                    k++;
                }
            }
            else if ((strlen(temp2) != 0) && (strlen(temp3) == 0)&& (strlen(temp4) == 0)&& (strlen(temp5) == 0)){
                int k = 0;
                printf("\n=================================");
                printf("\n%s\t%s", temp1, temp2);
                printf("\n=================================");
                if (jmllokasi != 0){
                    int j = 0;
                    while ((k <= jmllokasi-1) && (jmllokasi != 0)){
                        if ((lokasi[k].recordtabel.tmk != 99) && (lokasi[k].recordtabel.tmk != 0)){
                            while (j != (lokasi[k].recordtabel.tmk)){
                                printf("\n%s\t\t%s", isikolom(ntabel, temp1, j, k), isikolom(ntabel, temp2, j, k));
                                j++;
                            }
                        }
                        k++;
                    }
                }
            }
            else if ((strlen(temp2) != 0) && (strlen(temp3) != 0)&& (strlen(temp4) == 0)&& (strlen(temp5) == 0)){
                printf("\n===============================================");
                printf("\n%s\t%s\t%s", temp1, temp2, temp3);
                printf("\n===============================================");
                int k = 0;
                while((k != jmllokasi-1) && (jmllokasi != 0)){
                    int j = 0;
                    if (lokasi[k].recordtabel.tmhs != 99){
                        while (j != (lokasi[k].recordtabel.tmhs-1)){
                            printf("\n %s\t%s\t%s", isikolom(ntabel, temp1, j, k), isikolom(ntabel, temp2, j, k), isikolom(ntabel, temp3, j, k));
                            j++;
                        }
                    }
                    k++;
                }
            }
            else if ((strlen(temp2) != 0) && (strlen(temp3) != 0)&& (strlen(temp4) != 0)&& (strlen(temp5) == 0)){
                printf("\n=====================================================================");
                printf("\n%s\t%s\t%s\t%s", temp1, temp2, temp3, temp4);
                printf("\n=====================================================================");
                int k = 0;
                while ((k != jmllokasi-1) && (jmllokasi != 0)){
                    int j = 0;
                    if (lokasi[k].recordtabel.tmhs != 99){
                        while (j != (lokasi[k].recordtabel.tmhs-1)){
                            printf("\n %s\t%s\t%s\t%s", isikolom(ntabel, temp1, j, k), isikolom(ntabel, temp2, j, k), isikolom(ntabel, temp3, j, k), isikolom(ntabel, temp4, j, k));
                            j++;
                        }
                    }
                    k++;
                }
            }
            else if ((strlen(temp2) != 0) && (strlen(temp3) != 0)&& (strlen(temp4) != 0)&& (strlen(temp5) != 0)){
                printf("\n========================================================================================================");
                printf("\n%s\t%s\t%s\t%s\t%s", temp1, temp2, temp3, temp4, temp5);
                printf("\n========================================================================================================");
                int k = 0;
                while ((k != jmllokasi-1) && (jmllokasi != 0)){
                    int j = 0;
                    if (lokasi[k].recordtabel.tmhs != 99){
                        while (j != (lokasi[k].recordtabel.tmhs-1)){
                            printf("\n %s\t%s\t%s\t%s\t%s", isikolom(ntabel, temp1, j, k), isikolom(ntabel, temp2, j, k), isikolom(ntabel, temp3, j, k), isikolom(ntabel, temp4, j, k), isikolom(ntabel, temp5, j, k));
                            j++;
                        }
                    }
                    k++;
                }
            }
        }
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////bagian pengambilan mk////////////////////////////////////////////////////////////////
        if (apasama("PengambilanMK", ntabel)|| apasama("pengambilanmk", ntabel)||apasama("pengambilanMK", ntabel)){
            printf("\nTabel PengambilanMK");
            if (strlen(temp2) == 0){
                printf("\n================");
                printf ("\n%s", temp1);
                printf("\n================");
                int k = 0;
                while ((k != (jmllokasi-1)) && (jmllokasi != 0)){
                    int j = 0;
                    if ((lokasi[k].recordtabel.tpeng != 99) && (lokasi[k].recordtabel.tpeng != 0)){
                        while (j != (lokasi[k].recordtabel.tpeng)){
                            printf("\n%s", isikolom(ntabel, temp1, j, k));
                            j++;
                        }
                    }
                    k++;
                }
            }
            else if ((strlen(temp2) != 0) && (strlen(temp3) == 0)&& (strlen(temp4) == 0)&& (strlen(temp5) == 0)){
                int k = 0;
                printf("\n=======================================");
                printf("\n%s\t%s", temp1, temp2);
                printf("\n=======================================");
                if (jmllokasi != 0){
                    int j = 0;
                    while (k <= jmllokasi-1){
                        if ((lokasi[k].recordtabel.tpeng != 99) && (lokasi[k].recordtabel.tpeng != 0)){
                            while (j <= (lokasi[k].recordtabel.tpeng-1)){
                                printf("\n%s\t\t%s", isikolom(ntabel, temp1, j, k), isikolom(ntabel, temp2, j, k));
                                j++;
                            }
                        }
                        k++;
                    }
                }
            }
            else if ((strlen(temp2) != 0) && (strlen(temp3) != 0)&& (strlen(temp4) == 0)&& (strlen(temp5) == 0)){
                printf("\n===========================================");
                printf("\n %s\t%s\t%s", temp1, temp2, temp3);
                printf("\n===========================================");
                int k = 0;
                while ((k != jmllokasi-1) && (jmllokasi != 0)){
                    int j = 0;
                    if (lokasi[k].recordtabel.tpeng != 99){
                        while (j != (lokasi[k].recordtabel.tpeng-1)){
                            printf("\n %s\t%s\t%s", isikolom(ntabel, temp1, j, k), isikolom(ntabel, temp2, j, k), isikolom(ntabel, temp3, j, k));
                            j++;
                        }
                    }
                    k++;
                }
            }
            else if ((strlen(temp2) != 0) && (strlen(temp3) != 0)&& (strlen(temp4) != 0)&& (strlen(temp5) == 0)){
                printf("\n================");
                printf("\n %s\t%s\t%s\t%s", temp1, temp2, temp3, temp4);
                printf("\n================");
                int k = 0;
                while ((k != jmllokasi) && (jmllokasi != 0)){
                    int j = 0;
                    if (lokasi[k].recordtabel.tpeng != 99){
                        while (j != (lokasi[k].recordtabel.tpeng-1)){
                            printf("\n %s\t%s\t%s\t%s", isikolom(ntabel, temp1, j, k), isikolom(ntabel, temp2, j, k), isikolom(ntabel, temp3, j, k), isikolom(ntabel, temp4, j, k));
                            j++;
                        }
                    }
                    k++;
                }
            }
            else if ((strlen(temp2) != 0) && (strlen(temp3) != 0)&& (strlen(temp4) != 0)&& (strlen(temp5) != 0)){
                printf("\n================");
                printf("\n %s\t%s\t%s\t%s\t%s", temp1, temp2, temp3, temp4, temp5);
                printf("\n================");
                int k = 0;
                while ((k != jmllokasi) && (jmllokasi != 0)){
                    int j = 0;
                    if (lokasi[k].recordtabel.tpeng != 99){
                        while (j != (lokasi[k].recordtabel.tpeng-1)){
                            printf("\n %s\t%s\t%s\t%s\t%s", isikolom(ntabel, temp1, j, k), isikolom(ntabel, temp2, j, k), isikolom(ntabel, temp3, j, k), isikolom(ntabel, temp4, j, k), isikolom(ntabel, temp5, j, k));
                            j++;
                        }
                    }
                    k++;
                }
            }
        }
    }*/
}
    //////////////////////////////////////
