#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int uzunluk(char not[]){
	
	int deger=0;
	int i;
	for(i=0; not[i]!='\0';i++){
		deger++;
	}
	
	return deger;
}


void main(){
	
	printf("\tSifre Kontrol Paneli ve Maddeleri\n\n");
	printf(" 1. Sifre En Az 8 Karakterli Olmalidir.\n");
	printf(" 2. Sifre ( a - z ) Kucuk Harf Icermektedir.\n");
	printf(" 3. Sifre ( A - Z ) Buyuk Harf Icermektedir.\n");
	printf(" 4. Þifre ( ! - # - @ - $ - % - * - . ) En Az Birini Girilmeli\n\n");
	
		
	char buyuk[29]={'A','B','C','Ç','D','E','F','G','Ð','H','Ý','I','J','K','L','M','N','O','Ö','P','R','S','Þ','T','U','Ü','V','Y','Z','\0'};
	char kucuk[29]={'a','b','c','ç','d','e','f','g','ð','h','i','ý','j','k','l','m','n','o','ö','p','r','s','þ','t','u','ü','v','y','z','\0'};
	char harf[10]={'0','1','2','3','4','5','6','7','8','9','\0'};
	char ozel[7]={'!','@','#','$','%','*','.','\0'};
	bool sonuc=false;
	int deger1=0;
	int deger2=0;
	int deger3=0;
	int deger4=0;
	do{
		
		char sifre[]={};
		
		printf(" Lutfen Sifre Giriniz..: ");
		scanf("%s",sifre);
		int sayi=uzunluk(sifre);
		if(sayi>7){
			int i;
			int x,y,z,v;
			
			for(i=0 ;i<sayi;i++){
				for(x=0 ; x<29; x++){
					if(sifre[i]==buyuk[x]){
						deger1++;
					}
				}
				for(y=0 ; y<29; y++){
					if(sifre[i]==kucuk[y]){
						deger2++;
					}
				}
				for(z=0 ; z<9; z++){
					if(sifre[i]==harf[z]){
						deger3++;
					}
				}
				for(v=0 ; v<7; v++){
					if(sifre[i]==ozel[v]){
						deger4++;
					}
				}
			}
			
			if(deger1>0 && deger2>0 && deger3>0 && deger4>0){
				sonuc=true;
			}
			else{
				sonuc=false;
			}
		}
		
	}while(sonuc!=true);
	printf("Sifre Dogrulandi.");
	
	
}






