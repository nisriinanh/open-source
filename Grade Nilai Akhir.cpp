#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define repeat(r) for (int x=0;x<r;x++)

//FUNCTION/PROCEDURE
float f(float abs,float uts,float uas,float lain)
{
	float nakhir;
	nakhir=(abs*0.1f)+(uts*0.3f)+(uas*0.4f)+(lain*0.2f);
	return(nakhir);
}

int main(){
int pilih,jml_matkul,n,o=1;
char recount;

//RECORD/TIPE DATA BENTUKAN & ARRAY
struct mahasiswa{
	char nama[50];
	char matkul[20];
	char prodi[20];
	int nim,smt;
	float abs,uts,uas,lain,nakhir;
	char grade;
}mhs[20];

awal:
//MENAMPILKAN DALAM MENU & PERULANGAN REPEAT
repeat(2){
printf("============================================\n");}
printf("| PROGRAM MENGHITUNG NILAI AKHIR DAN GRADE |");
repeat(2){
printf("\n============================================");}
printf("\n1. Menghitung Nilai Akhir\n");
printf("2. Menentukan Grade Nilai Akhir\n");
printf("\n00. Keluar");
printf("\nMasukkan Pilihan = ");
scanf("%d",&pilih);

switch(pilih){
	case (1):
		//PERULANGAN DO WHILE
		do{
		printf("\nMenghitung Nilai Akhir\n");
		printf("======================\n");
		printf("\nNama\t\t\t: ");scanf("%s",&mhs[n].nama);
		printf("NIM\t\t\t: ");scanf("%d",&mhs[n].nim);
		printf("Program Studi\t\t: ");scanf("%s",&mhs[n].prodi);
		printf("Semester\t\t: ");scanf("%d",&mhs[n].smt);
		printf("Jumlah Mata Kuliah\t: ");scanf("%d",&jml_matkul);
		
		//TRANSFERSAL
		for(n=0;n<jml_matkul;n++){
			printf("\n\nMata Kuliah %d\t",o++);
			printf("\n\nNama Mata Kuliah\t: ");scanf("%s",&mhs[n].matkul);
			printf("Nilai Kehadiran\t\t: ");scanf("%f",&mhs[n].abs);
			printf("Nilai UTS\t\t: ");scanf("%f",&mhs[n].uts);
			printf("Nilai UAS\t\t: ");scanf("%f",&mhs[n].uas);
			printf("Nilai Tugas\t\t: ");scanf("%f",&mhs[n].lain);
			mhs[n].nakhir=f(mhs[n].abs,mhs[n].uts,mhs[n].uas,mhs[n].lain);//deklarasi nilai abs,uts,uas,lain
			printf("Nilai Akhir\t\t: %.2f",mhs[n].nakhir);
		}
		//MENAMPILKAN KEMBALI
		printf("\n\n\n====================================================================");
		printf("\n|\t\t\tHasil  Nilai Akhir	\t\t   |");
		printf("\n====================================================================");
		/*printf("\n\nNo\t");*/printf("\n\nMata Kuliah\t ");printf("Kehadiran\t");printf("UTS\t");printf("UAS\t");printf("Tugas\t");printf("Nilai Akhir\t");
		printf("\n--------------------------------------------------------------------");
		//TRANSFERSAL
		for(n=0;n<jml_matkul;n++){
		/*printf("\n %d \t",o++);*/printf("\n%s \t\t",mhs[n].matkul);printf("%10.2f",mhs[n].abs);printf("%10.2f",mhs[n].uts);printf("%10.2f",mhs[n].uas);printf("%10.2f",mhs[n].lain);printf("%10.2f\t",mhs[n].nakhir);
		}
			
		printf("\n======================\n|| Hitung lagi? Y/N ||\n======================\n",recount);scanf("%s",&recount);
		}while(recount=='y'||recount=='Y');
		goto awal;
	break; 
	case (2):
		//PERULANGAN DO WHILE
		do{
		printf("\nMenentukan Grade Nilai Akhir\n");
		printf("============================\n");
		printf("\n\nNama\t\t\t: ");scanf("%s",&mhs[n].nama);
		printf("NIM\t\t\t: ");scanf("%d",&mhs[n].nim);
		printf("Program Studi\t\t: ");scanf("%s",&mhs[n].prodi);
		printf("Semester\t\t: ");scanf("%s",&mhs[n].smt);
		printf("Jumlah Mata Kuliah\t: ");scanf("%d",&jml_matkul);
		
		//TRANSFERSAL
		for(n=0;n<jml_matkul;n++){
		printf("\n\nMata Kuliah %d\t",o++);
		printf("\n\nNama Mata Kuliah\t: ");scanf("%s",&mhs[n].matkul);
		printf("Masukkan Nilai Akhir\t: ");scanf("%f",&mhs[n].nakhir);
		
		//PENYELEKSI KONDISI IF
		if(mhs[n].nakhir>=80){mhs[n].grade='A';} else
		if(mhs[n].nakhir>=65){mhs[n].grade='B';} else
		if(mhs[n].nakhir>=55){mhs[n].grade='C';} else
		if(mhs[n].nakhir>=45){mhs[n].grade='D';} else 
		if(mhs[n].nakhir<45){mhs[n].grade='E';}
		printf("Grade Nilai Akhir\t: %c",mhs[n].grade);
		}
		
		//MENAMPILKAN KEMBALI
		printf("\n\n\n=================================================");
		printf("\n|\t\tHasil Grade Nilai Akhir\t\t|");
		printf("\n=================================================");
		/*printf("\n\nNo\t");*/printf("\n\nMata Kuliah\t ");printf("\tNilai Akhir\t");printf("Grade\t");
		printf("\n-------------------------------------------------");
		//TRANSFERSAL
		for(n=0;n<jml_matkul;n++){
		/*printf("\n %d \t",o++);*/printf("\n%s \t\t",mhs[n].matkul);printf("%15.2f\t\t",mhs[n].nakhir);printf("%5c \t",mhs[n].grade);
		}
		
			
		printf("\n\n======================\n|| Hitung lagi? Y/N ||\n======================\n",recount);scanf("%s",&recount);
		}while(recount=='y'||recount=='Y');
		goto awal;
	break;
	case (00):
	// KELUAR DARI PROGRAM
	break;
	//PERULANGAN REPEAT
	default: repeat(3){printf("\nMAAF NOMOR YANG ANDA MASUKKAN TIDAK TERSEDIA!");};break;
	
	}
}
