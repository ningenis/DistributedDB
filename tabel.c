/*Nama/NIM :    Azka Ihsan Nurrahman            / 18211002 */
/*              Fady Noor Ilmi                  / 18211015 */
/*              Naufal Dwi Satria Rindawarman   / 18211021 */
/*              Denis Enrico Hasyim             / 18211022 */
/*              Andre Aditya Pratama            / 18211034 */
/*Kelompok      : LikeABoss                                */
/*File : tabel.c */

#include "tabel.h"
#include "tools.h"
#include "error.h"
#include "interaksi.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <strings.h>
#include <windows.h>


typedef struct{
    char isi[30];
    char isi2[30];
} tab;

typedef struct
    {
    char *NIM;
    char *Nama;
    char *TglLahir;
    char *KotaAsal;
    float *IPK;
	int *JmlSKS;
	} dataMhs;


typedef struct
    {
    char *MK;
    char *NamaMK;
    int *SKS;
	char *BKeahlian;
	} dataMK;

typedef struct
    {
    char *NIM;
    char *MK;
    int *semester;
    char *TahunAjaran;
    char Nilai;
	} dataPengMK;

typedef struct
    {
    char lokasi2;
    float bandwidth;//0 = tdk terhubung
    } connections;

typedef struct
    {
        int tmhs;
        int tmk;
        int tpeng;
        int edge;
    } recordtab;

typedef struct
    {
    char namalokasi;
    char server;
    char client;
    float cputime;
    dataMhs tabMhs[30];
    dataMK tabMK[30];
    dataPengMK tabpengMK[30];
    recordtab recordtabel;
    connections edges[25];
    } locations;

locations lokasi[26];
int jmllokasi;


int carilokasi(char lok){
    if (jmllokasi == 0)
        return 99;
    else{
        int n = 0;
        int res = 99;
        while (n != jmllokasi-1){
            if (lokasi[n].namalokasi == lok){
                res = n;
                n = jmllokasi-1;
            }
            else
                n++;
        }
        if (lokasi[jmllokasi-1].namalokasi == lok)
                res = jmllokasi-1;
        return res;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////MANIPULASI TABEL///////////////////////////////////////////////////////////////////////////////////
void createtable (char lok, char tab[15]){
    int n = carilokasi(lok);
    if (n == 99)
        errorkode(4);
    else{
        if(apasama(tab, "Mahasiswa")){
            if (lokasi[n].recordtabel.tmhs == 99)
                lokasi[n].recordtabel.tmhs = 0;
        }
        else if(apasama(tab, "MataKuliah")){
            if (lokasi[n].recordtabel.tmk == 99)
                lokasi[n].recordtabel.tmk = 0;
        }
        else if(apasama(tab, "PengambilanMK")){
            if (lokasi[n].recordtabel.tpeng == 99)
                lokasi[n].recordtabel.tpeng = 0;
        }
    }
}

void insertmhs (char nim[8], char nama[50], char tgllahir[50], char kota[20], float ipk[5], int jmlsks[3], char lok){

    int n = carilokasi(lok);
    int baru;
    	            
	if (lokasi[n].recordtabel.tmhs == 99)
        baru = 0;
    else
        baru = lokasi[n].recordtabel.tmhs;
        	        
	lokasi[n].tabMhs[baru].NIM = nim;
	            
    lokasi[n].tabMhs[baru].Nama = nama;
                
    lokasi[n].tabMhs[baru].TglLahir = tgllahir;
                
    lokasi[n].tabMhs[baru].KotaAsal = kota;
                
    lokasi[n].tabMhs[baru].IPK = ipk;
                
    lokasi[n].tabMhs[baru].JmlSKS = jmlsks;
                
    createtable(lok, "Mahasiswa");
                
    lokasi[n].recordtabel.tmhs = baru + 1;
            
}

void insertmk (char mk[10], char namamk[25], int sks, char bkeahlian[20], char lok){


    int n = carilokasi(lok);
    int baru;
	if (lokasi[n].recordtabel.tmk == 99)
        baru = 0;
    else
        baru = lokasi[n].recordtabel.tmk;
    lokasi[n].tabMK[baru].MK = mk;
    lokasi[n].tabMK[baru].NamaMK = namamk;
    lokasi[n].tabMK[baru].SKS = sks;
	lokasi[n].tabMK[baru].BKeahlian = bkeahlian;
	createtable(lok, "MataKuliah");
	lokasi[n].recordtabel.tmk = lokasi[n].recordtabel.tmk + 1;
}


void insertpengmk (char nim[10], char mk[10], int smt, char thajr[10], char nilai, char lok){
    int n = carilokasi(lok);
    int baru;
	if (lokasi[n].recordtabel.tpeng == 99)
        baru = 0;
    else
        baru = lokasi[n].recordtabel.tpeng;
    lokasi[n].tabpengMK[baru].NIM = nim;
    lokasi[n].tabpengMK[baru].MK = mk;
    lokasi[n].tabpengMK[baru].semester = smt;
    lokasi[n].tabpengMK[baru].TahunAjaran = thajr;
    lokasi[n].tabpengMK[baru].Nilai = nilai;
    createtable(lok, "PengambilanMK");
    lokasi[n].recordtabel.tpeng = baru + 1;
}

void insertedge (char lokasi1, char lokasi2, float bandwidth){
    int n = carilokasi(lokasi1);
	int baru = lokasi[n].recordtabel.edge;
	lokasi[n].edges[baru].lokasi2 = lokasi2;
    lokasi[n].edges[baru].bandwidth = bandwidth;
	lokasi[n].recordtabel.edge = baru + 1;
}

void insertlokasi (char nama, char serve, char clien, float cput){
    int n = carilokasi(nama);
    if (n != 99)
        errorkode(4);
    else{
        int baru = jmllokasi;
        lokasi[baru].namalokasi = nama;
        lokasi[baru].server = serve;
        lokasi[baru].client = clien;
        lokasi[baru].cputime = cput;
        jmllokasi = baru + 1;
        lokasi[baru].recordtabel.tmhs = 99;
        lokasi[baru].recordtabel.tmk = 99;
        lokasi[baru].recordtabel.tpeng = 99;
        lokasi[baru].recordtabel.edge = 0;
    }

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////MANIPULASI TABEL///////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////MENAMPILKAN TABEL///////////////////////////////////////////////////////////////////////////////////


char * isikolom(char ntabel[20], char kolom[20], int posisi, int lok){
    if (apasama(ntabel, "Mahasiswa")){
        if (apasama(kolom, "Nama"))
            return lokasi[lok].tabMhs[posisi].Nama;
        else if (apasama(kolom, "NIM"))
            return lokasi[lok].tabMhs[posisi].NIM;
        else if (apasama(kolom, "KotaAsal"))
            return lokasi[lok].tabMhs[posisi].KotaAsal;
        else if (apasama(kolom, "TglLahir"))
            return lokasi[lok].tabMhs[posisi].TglLahir;
        else if (apasama(kolom, "IPK"))
            return lokasi[lok].tabMhs[posisi].IPK;
        else if (apasama(kolom, "JmlSKS"))
            return lokasi[lok].tabMhs[posisi].JmlSKS;
        else{
            errorkode(4);
            return NULL;
        }

    }
    if (apasama(ntabel, "MataKuliah")){
        if (apasama(kolom, "KodeMK"))
            return lokasi[lok].tabMK[posisi].MK;
        else if (apasama(kolom, "NamaMK"))
            return lokasi[lok].tabMK[posisi].NamaMK;
        else if (apasama(kolom, "SKS"))
            return lokasi[lok].tabMK[posisi].SKS;
        else if (apasama(kolom, "Bidang"))
            return lokasi[lok].tabMK[posisi].BKeahlian;
        else{
            errorkode(4);
            return NULL;
        }
    }

	if (apasama(ntabel, "PengambialnMK")){
        if (apasama(kolom, "NIM"))
            return lokasi[lok].tabpengMK[posisi].NIM;
        else if (apasama(kolom, "KodeMK"))
            return lokasi[lok].tabpengMK[posisi].MK;
        else if (apasama(kolom, "Semester"))
            return lokasi[lok].tabpengMK[posisi].semester;
        else if (apasama(kolom, "ThnAkademik"))
            return lokasi[lok].tabpengMK[posisi].TahunAjaran;
        else if (apasama(kolom, "Nilai"))
            return lokasi[lok].tabpengMK[posisi].Nilai;
        else{
            errorkode(4);
            return NULL;
        }
    }
}


void Sortchar(char list[40][10], int array_size)
/* I.S. Fungsi yang men-sortng masukan karakter dalam array */
/* F.S. Array terurut */
{
    /* Kamus Lokal */
	int i, j;
 	char temp[10];

    /* Algoritma */
 	for (i=0; i<(array_size - 1); i++)
 	{
 		for (j=i+1; j< array_size; j++)
 		{
 			if (strcmp(list[i],list[j]) < 0)
 			{
 				strcpy(temp,list[j]);
 				strcpy(list[j], list[i]);
 				strcpy(list[i],temp);
 			}
		 }
 	}
	for(i = 0; i < array_size; i++)
	{
		printf("%c",list[i]);
	}
}

void sorting(int tabel){

    char temp[30];
    char temp2[30];
    int i = 0;
    if (tabel == 2){//tabel sites

        while (i != jmllokasi-1){
            lokasi[i].namalokasi = temp[i];
            i++;
        }
        printf("%c", temp[0]);
        int asd;
        scanf("%d", asd);
        Sortchar(temp, jmllokasi);
        printf("%s", temp);
    }
}

void daftar(char mode[3], int tipe){
    if (tipe == 1){
        printf("Connections: \n");
        printf("Site-1\tSite-2\tBandwidth (KBpS)");
        int i = 0;
        while (i != jmllokasi){
            int j = lokasi[i].recordtabel.edge;
            if (j>0){
                int k = 0;
                while (k != (j)){
                    printf("\n%c\t%c\t%f", lokasi[i].namalokasi, lokasi[i].edges[k].lokasi2, lokasi[i].edges[k].bandwidth);
                    k++;
                }
            }
            i++;
        }
    }
    else if(tipe == 2){

        printf("\nSites: \n");
        printf("\nSite\tServer\tClient\tTables\t\tNumber of Records");
        int i = 0;
        while(i != jmllokasi){
            char * a;
            int b;
            int c = 1;
            if (lokasi[i].recordtabel.tmhs != 99){
                a = "Mahasiswa";
                b = lokasi[i].recordtabel.tmhs;
            }
            else if ((lokasi[i].recordtabel.tmhs == 99) && (lokasi[i].recordtabel.tmk != 99)){
                a = "MataKuliah";
                b = lokasi[i].recordtabel.tmk;}
            else if ((lokasi[i].recordtabel.tmhs == 99) && (lokasi[i].recordtabel.tmk == 99) && (lokasi[i].recordtabel.tpeng != 99)){
                a = "PengambilanMK";
                b = lokasi[i].recordtabel.tpeng;}
            if ((lokasi[i].recordtabel.tmhs == 99) && (lokasi[i].recordtabel.tmk == 99) && (lokasi[i].recordtabel.tpeng == 99)){
                a = " ";
                b = 0;}
            if (apasama(a, " "))
                printf("\n%c\t%c\t%c\t", lokasi[i].namalokasi, lokasi[i].server, lokasi[i].client);
            else
                printf("\n%c\t%c\t%c\t%s\t%d", lokasi[i].namalokasi, lokasi[i].server, lokasi[i].client, a, b);

            if (apasama(a, "Mahasiswa")){
                if(lokasi[i].recordtabel.tmk != 99){
                    printf("\n\t\t\tMataKuliah\t%d", lokasi[i].recordtabel.tmk);
                    if (lokasi[i].recordtabel.tpeng != 99)
                        printf("\n\t\t\tPengambilanMK\t%d", lokasi[i].recordtabel.tpeng);
                }
                else if(lokasi[i].recordtabel.tpeng != 99){
                    printf("\n\t\t\tPengambilanMK\t%d", lokasi[i].recordtabel.tpeng);
                }
            }
            else if(apasama(a, "MataKuliah")){
                if(lokasi[i].recordtabel.tpeng != 99){
                    printf("\n\t\t\tPengambilanMK\t%d", lokasi[i].recordtabel.tpeng);
                }
            }
            i++;
        }
    }

    else if(tipe == 3){

        printf("\nSites: \n");
        printf("\nSite\tServer\tClient\tTables\t\tNumber of Records");
        int i = 0;
        while(i != jmllokasi){
            char * a;
            int b;
            int c = 1;
            if (lokasi[i].recordtabel.tmhs != 99){
                a = "Mahasiswa";
                b = lokasi[i].recordtabel.tmhs;
            }
            else if ((lokasi[i].recordtabel.tmhs == 99) && (lokasi[i].recordtabel.tmk != 99)){
                a = "MataKuliah";
                b = lokasi[i].recordtabel.tmk;}
            else if ((lokasi[i].recordtabel.tmhs == 99) && (lokasi[i].recordtabel.tmk == 99) && (lokasi[i].recordtabel.tpeng != 99)){
                a = "PengambilanMK";
                b = lokasi[i].recordtabel.tpeng;}
            if ((lokasi[i].recordtabel.tmhs == 99) && (lokasi[i].recordtabel.tmk == 99) && (lokasi[i].recordtabel.tpeng == 99)){
                a = " ";
                b = 0;}
            if(lokasi[i].server == 'Y'){
                if (apasama(a, " "))
                    printf("\n%c\t%c\t%c\t", lokasi[i].namalokasi, lokasi[i].server, lokasi[i].client);
                else
                    printf("\n%c\t%c\t%c\t%s\t%d", lokasi[i].namalokasi, lokasi[i].server, lokasi[i].client, a, b);

                if (apasama(a, "Mahasiswa")){
                    if(lokasi[i].recordtabel.tmk != 99){
                        printf("\n\t\t\tMataKuliah\t%d", lokasi[i].recordtabel.tmk);
                        if (lokasi[i].recordtabel.tpeng != 99)
                            printf("\n\t\t\tPengambilanMK\t%d", lokasi[i].recordtabel.tpeng);
                    }
                    else if(lokasi[i].recordtabel.tpeng != 99){
                        printf("\n\t\t\tPengambilanMK\t%d", lokasi[i].recordtabel.tpeng);
                    }
                }
                else if(apasama(a, "MataKuliah")){
                    if(lokasi[i].recordtabel.tpeng != 99){
                        printf("\n\t\t\tPengambilanMK\t%d", lokasi[i].recordtabel.tpeng);
                    }
                }
            }
            i++;
        }
    }

    else if(tipe == 4){
        printf("\nSites: \n");
        printf("\nSite\tServer\tClient\tTables\t\tNumber of Records");
        int i = 0;
        while(i != jmllokasi){
            char * a;
            int b;
            int c = 1;
            if (lokasi[i].recordtabel.tmhs != 99){
                a = "Mahasiswa";
                b = lokasi[i].recordtabel.tmhs;
            }
            else if ((lokasi[i].recordtabel.tmhs == 99) && (lokasi[i].recordtabel.tmk != 99)){
                a = "MataKuliah";
                b = lokasi[i].recordtabel.tmk;}
            else if ((lokasi[i].recordtabel.tmhs == 99) && (lokasi[i].recordtabel.tmk == 99) && (lokasi[i].recordtabel.tpeng != 99)){
                a = "PengambilanMK";
                b = lokasi[i].recordtabel.tpeng;}
            if ((lokasi[i].recordtabel.tmhs == 99) && (lokasi[i].recordtabel.tmk == 99) && (lokasi[i].recordtabel.tpeng == 99)){
                a = " ";
                b = 0;}
            if(lokasi[i].client == 'Y'){
                if (apasama(a, " "))
                    printf("\n%c\t%c\t%c\t", lokasi[i].namalokasi, lokasi[i].server, lokasi[i].client);
                else
                    printf("\n%c\t%c\t%c\t%s\t%d", lokasi[i].namalokasi, lokasi[i].server, lokasi[i].client, a, b);

                if (apasama(a, "Mahasiswa")){
                    if(lokasi[i].recordtabel.tmk != 99){
                        printf("\n\t\t\tMataKuliah\t%d", lokasi[i].recordtabel.tmk);
                        if (lokasi[i].recordtabel.tpeng != 99)
                            printf("\n\t\t\tPengambilanMK\t%d", lokasi[i].recordtabel.tpeng);
                    }
                    else if(lokasi[i].recordtabel.tpeng != 99){
                        printf("\n\t\t\tPengambilanMK\t%d", lokasi[i].recordtabel.tpeng);
                    }
                }
                else if(apasama(a, "MataKuliah")){
                    if(lokasi[i].recordtabel.tpeng != 99){
                        printf("\n\t\t\tPengambilanMK\t%d", lokasi[i].recordtabel.tpeng);
                    }
                }
            }
            i++;
        }
    }

    else if(tipe == 5){
        printf("\nSites: \n");
        printf("\nSite\tServer\tClient\tTables\t\tNumber of Records");
        int i = 0;
        while(i != jmllokasi){

            char * a;
            int b;
            int c = 1;
            if (lokasi[i].recordtabel.tmhs != 99){
                a = "Mahasiswa";
                b = lokasi[i].recordtabel.tmhs;
            }
            else if ((lokasi[i].recordtabel.tmhs == 99) && (lokasi[i].recordtabel.tmk != 99)){
                a = "MataKuliah";
                b = lokasi[i].recordtabel.tmk;}
            else if ((lokasi[i].recordtabel.tmhs == 99) && (lokasi[i].recordtabel.tmk == 99) && (lokasi[i].recordtabel.tpeng != 99)){
                a = "PengambilanMK";
                b = lokasi[i].recordtabel.tpeng;}
            if ((lokasi[i].recordtabel.tmhs == 99) && (lokasi[i].recordtabel.tmk == 99) && (lokasi[i].recordtabel.tpeng == 99)){
                a = " ";
                b = 0;}

            if((lokasi[i].recordtabel.tmhs != 99) || (lokasi[i].recordtabel.tmk != 99) || (lokasi[i].recordtabel.tpeng != 99)){

                if (apasama(a, " "))
                    printf("\n%c\t%c\t%c\t", lokasi[i].namalokasi, lokasi[i].server, lokasi[i].client);
                else
                    printf("\n%c\t%c\t%c\t%s\t%d", lokasi[i].namalokasi, lokasi[i].server, lokasi[i].client, a, b);
                if (apasama(a, "Mahasiswa")){
                    if(lokasi[i].recordtabel.tmk != 99){
                        printf("\n\t\t\tMataKuliah\t%d", lokasi[i].recordtabel.tmk);
                        if (lokasi[i].recordtabel.tpeng != 99)
                            printf("\n\t\t\tPengambilanMK\t%d", lokasi[i].recordtabel.tpeng);
                    }
                    else if(lokasi[i].recordtabel.tpeng != 99){
                        printf("\n\t\t\tPengambilanMK\t%d", lokasi[i].recordtabel.tpeng);
                    }
                }
                else if(apasama(a, "MataKuliah")){
                    if(lokasi[i].recordtabel.tpeng != 99){
                        printf("\n\t\t\tPengambilanMK\t%d", lokasi[i].recordtabel.tpeng);
                    }
                }
            }
            i++;
        }
    }

}


void pilihinsert ()
{
	/* Kamus Lokal */
	char pilihan[15];
	char nim[8];
	char nama[50];
	char tgl[50];
	char kota[20];
	char IPK[5];
	int sks;
	char lokasi[5];
	char mk[10];
	char namamk[50];
	char keahlian[20];
	char smt[3];
	char tahun[10];
	char nilai;
	/* Algortima */
	printf("Masukkan nama tabel : ");
	scanf("%s", &pilihan);
	if (apasama(pilihan, "Mahasiswa"))
	{
		printf ("Data kolom NIM : ");
		scanf("%s", &nim);
		printf ("Data kolom Nama : ");
		scanf("%s", &nama);
		printf ("Data kolom Tanggal Lahir : ");
		scanf("%s", &tgl);
		printf ("Data kolom Kota Asal : ");
		scanf("%s", &kota);
		printf ("Data kolom IPK : ");
		scanf("%s", &IPK);
		printf ("Data kolom Jumlah SKS : ");
		scanf("%d", &sks);
		printf ("Lokasi Insert : ");
		scanf("%s", &lokasi);
		insertmhs (nim, nama, tgl, kota, IPK, sks, lokasi[0]);
        list("all", "asd");
        int asd;
        scanf("%d", &asd);
	}
	else if (apasama(pilihan, "MataKuliah"))
	{
		printf ("Data kolom Kode Mata Kuliah : ");
		scanf("%s", &mk);
		printf ("Data kolom Nama Mata Kuliah : ");
		scanf("%s", &namamk);
		printf ("Data kolom Jumlah SKS : ");
		scanf("%d", &sks);
		printf ("Data kolom Bidang Keahlian : ");
		scanf("%s", &keahlian);
		printf ("Lokasi Insert : ");

		scanf("%s", &lokasi);
		insertmk (mk, namamk, sks, keahlian, lokasi[0]);
		int asd;
		scanf("%d", asd);
	}
	else if (apasama(pilihan, "PengambilanMK"))
	{
		printf ("Data kolom NIM : ");
		scanf("%s", &nim);
		printf ("Data kolom Kode Mata Kuliah : ");
		scanf("%s", &mk);
		printf ("Data kolom Semester : ");
		scanf("%s", &smt);
		printf ("Data kolom Tahun Ajaran : ");
		scanf("%s", &tahun);
		printf ("Data kolom Nilai : ");
		scanf("%c", &nilai);
		printf ("Lokasi Insert : ");
		scanf("%c", &lokasi);
		insertpengmk (nim ,mk ,smt, tahun, nilai, lokasi);
		char asd;
		scanf("%c", &asd);

	}
	else
        errorkode(5);
    printf("koe neng kene bro \n");
    //open('A');
}


