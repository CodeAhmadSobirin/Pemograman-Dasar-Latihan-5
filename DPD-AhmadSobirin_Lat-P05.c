/*
Latihan Praktikum 4.1 D
Nama : Ahmad Sobirin
Kelas : S1 -D
STMIK Tasikmalaya
*/

#include "stdio.h"
#include "stdlib.h"
#include "windows.h"

void gotoxy (int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
} 

int TotalOrder, UangBayar, kembali, JmlOrder, Harga;

	int main () {
	char kasir_as[20];
	char namakasir_as[10];
	char namacustomer_as[20];
	char namamenu_as[20];
	int harga_as, jmlorder_as, totalorder_as;
	int uangbayar_as;
	int kembali_as;
	
	gotoxy(3,0);printf ("==================================================================================================================");
	gotoxy(55,1);printf ("Frind's Zone Cafe ");
	gotoxy(35,2);printf ("Jl. RE. Martadinata No. 272D - Indihiang . Tasikmalaya");
	gotoxy(3,3);printf ("==================================================================================================================");
	
	gotoxy(3,5);printf ("---------------------");
	gotoxy(4,6);printf ("+ Input Data Kasir +\n");
	gotoxy(3,7);printf ("---------------------");
	gotoxy(4,8);printf ("ID Kasir   : "); 
	gets (kasir_as);
	fflush stdin; 
	gotoxy(4,9);printf ("Nama Kasir : ");
	gets (namakasir_as);
	
	
	gotoxy(3,12);printf ("--------------------------");
	gotoxy(4,13);printf ("+ Inpuut Data Customer +");
	gotoxy(3,14);printf ("--------------------------");
	gotoxy(4,15);printf ("Nama Customer : ");
	gets (namacustomer_as);
	
	fflush stdin; 
	gotoxy(4,16);printf ("Nama Menu     : ");
	gets (namamenu_as);
	
	fflush stdin;
	gotoxy(4,17);printf ("Harga         : Rp.");
	scanf ("%i", &harga_as);
	
	fflush stdin;
	gotoxy(4,18);printf ("Jumlah Order  :  ");
	gotoxy(25,18);printf ("Porsi");
	fflush stdin;
	gotoxy(20,18);scanf ("%i",&jmlorder_as); 
	

	gotoxy(3,20);system ("pause > null | echo Tekan Sembarang Tombol .. ..");
	gotoxy(3,21);printf ("===============================================================================================================");
	gotoxy(55,22);printf ("Friend's Zone Cafe");
	gotoxy(3,23);printf ("===============================================================================================================");
	
	gotoxy(4,25);printf ("Nama Customer  : %s   ",namacustomer_as); 
	gotoxy(3,26);printf ("----------------");
	gotoxy(4,27);printf ("#Detail Order#");
	gotoxy(3,28);printf ("----------------");
	gotoxy(4,29);printf ("Menu    :  %s ", namamenu_as);
	gotoxy(4,30);printf ("Harga   :  %i ", harga_as);
	gotoxy(4,31);printf ("Jumlah  :  %i ", jmlorder_as);
	
	gotoxy(3,32);printf ("***************************************************************************************************************");
    totalorder_as = harga_as * jmlorder_as;
    gotoxy(80,33);printf("Total order : Rp.         %i ", totalorder_as);
    
    gotoxy(80,34); printf("Uang bayar  : Rp. ");
    gotoxy(97,34);scanf("%i", &uangbayar_as);
    
    kembali_as = uangbayar_as - totalorder_as;
    gotoxy(80,35);printf("Kembali     : Rp.         %i", kembali_as);
    gotoxy(3,36);printf ("***************************************************************************************************************");
    
    gotoxy(3,37);printf ("Di Input Oleh : [%s - %s]", kasir_as, namakasir_as);
    gotoxy(3,38);printf ("===============================================================================================================");
    gotoxy(3,39);printf ("*                                     S T M I K  T A S I K M A L A Y A                                        *");
    gotoxy(3,40);printf ("*                                               2022 - 2023                                                   *");
    gotoxy(3,41);printf ("===============================================================================================================");
    
    gotoxy(3,42);printf ("#- Created By -#");
    gotoxy(4,43);printf ("Nama  : Ahmad Sobirin");
    gotoxy(4,44);printf ("NPM   : 432007006220166");
    gotoxy(4,45);printf ("Kelas : S1-D");
    gotoxy(3,46);printf ("# STMIK TASIKMALAYA - 2022 #");
    
    
    

	
	
	
	return 0;
}