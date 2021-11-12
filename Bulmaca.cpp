#include<stdio.h>
#include<string.h>
int main(){
	int i,j,a;
	char tarla[40][04];
	char istenilen_kelime[40];
	for(i=0;i<40;i++){
		for(j=0;j<40;j++){
		   printf("Lutfen bir harf giriniz= ");
		   gets(tarla[i]);
		}
	}
	printf("Lutfen aradiginiz kelimeyi giriniz= ");
	gets(istenilen_kelime);
	if(strlen(istenilen_kelime)<=40){
		for(i=0;i<40;i++){
			for(j=0;j<40;j++){
				if(tarla[i][j]==istenilen_kelime[a]){
				a++;
				printf("(%d,%d) indis",i,j);
				}
				
			}
		}
		if(a=strlen(istenilen_kelime)-1)
		printf("Kelime var.");
		if(a<strlen(istenilen_kelime))
		printf("kelimenin yalnýzca %d.kýsmý var.",a+1);
		a=0;
		for(j=0;j<40;j++){
			for(i=0;i<40;i++){
				if(tarla[i][j]==istenilen_kelime[a]){
					a++;
					printf("(%d,%d) indis",i,j);
				}
			}
		}
		if(a=strlen(istenilen_kelime)-1)
		printf("Kelime var.");
		if(a<strlen(istenilen_kelime))
		printf("kelimenin yalnýzca %d.kýsmý var.",a+1);
	}

}
