#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
void baslangic();
void oda1();
void oda2();
void oda3();
void oda4();
void oda5();
void oda6();
char komut2[]="DOGU";
char komut3[]="BATI";
char komut4[]="KUZEY";
char komut5[]="GUNEY";
char komut6[]="YEMEK YE";
char komut7[]="DINLEN";
char komut8[]="ANAHTAR AL";
bool anahtar= false;
int dizi[]={0,1,2,3,4,5,6,7,8,9};
main() {
	baslangic();
}
	void baslangic(){
		system("cls");
		char komut[15];
		printf("Dogu yonunde buyuk bir satonun onundesin. Iceri girmen gerekiyor yoksa pesindekiler seni yakalayacaklar\n");
		printf("Komut:");
		gets(komut);
		strupr(komut);
	
		if(strcmp(komut,komut2)==0) oda1();
		else{
			printf("Gecersiz komut..\n");
			sleep(1);
			baslangic();
		}
	}
	
	void oda1(){
		system("cls");
		char komut[15];
		printf("Sonunda iceridesin. Yemek masasi uzerinden bir seyler yiyebilirsin\n");
		printf("Komut: ");
		gets(komut);
		strupr(komut);
		
		if(strcmp(komut,komut2)==0) oda6();
		else if(strcmp(komut,komut3)==0) baslangic();
		else if(strcmp(komut,komut4)==0) oda2();
		else if(strcmp(komut,komut5)==0) oda3();
		else if(strcmp(komut,komut6)==0) oda1();
		else {
			printf("Gecersiz komut");
			sleep(1);
			oda1();
		}
	}
	void oda2(){
		system("cls");
		printf("Khaleesi'nin Dracarys sesini duymanla beraber ejderha atesi altinda yanarak oldun.\n");
	}
	void oda3(){
		system("cls");
		char komut[15];
		printf("Kucuk bir odadasin. Ortada bir yatak var. Yorgunsan dinlenebilirsin\n");
		printf("komut:");
		gets(komut);
		strupr(komut);
		if(strcmp(komut,komut2)==0) oda5();
		else if(strcmp(komut,komut4)==0) oda1();
		else if(strcmp(komut,komut5)==0) oda4();
		else if(strcmp(komut,komut7)==0) oda3();
		else{
			printf("Gecersiz komut");
			sleep(1);
			oda3();
		} 
	}
	void oda4(){
		system("cls");
		printf("Tissss.... Bir piton yilani tarafindan sikilarak olduruldun... Bogulurken keske C yerine Python mu ogrenseydim diye kafandan gecirdin...\n");
	}	
	void oda5(){
		system("cls");
		char komut[15];
		printf("Cok karanlik bir odadasin. Sadece parlayan altin bir anahtar var.\n");
		printf("komut:");
		gets(komut);
		strupr(komut);
		if(strcmp(komut,komut3)==0) oda3();
		else if(strcmp(komut,komut8)==0) {
			anahtar=true;
			oda5();
		}
		else {
			printf("Gecersiz komut");
			sleep(1);
			oda4();
		}
		
	}	
	void oda6(){
		system("cls");
		int sayi,tahmin,y;
		int x=1;
		srand(time(NULL));
		sayi=rand()%10;

		printf("Bilgisayar tarafindan yonetilen odadasin. 0 ile 9 arasinda bir sayi tutmus. Uc denemede bulmalisin.\n");
		while(x<4){
			printf("%d.Tahmin: ",x);
		    scanf("%d",&tahmin);
		    
		if(tahmin==sayi){
			if(anahtar==true) printf("Tebrikler... dogru sayiyi buldun ve kilitli kapiyi acarak prensesi kurtardin...");
			else printf("Dogru sayiyi buldun ancak kilitli kapiyi acacak anahtar yaninda degil...odaya zehirli bir gaz dolmaya basladi ve oldun...");
			break;
		}
		for(y=0;y<10;y++){
			if(dizi[y]==tahmin)break;
		}
		if(y==10){
			printf("Gecersiz tahmin.\n");
			x--;
		}
		x++;
	}
	if(tahmin!=sayi)printf("Uc denemede bulamadin.. odaya zehirli bir gaz dolmaya basladi ve oldun...");
	}
