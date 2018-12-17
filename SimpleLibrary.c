#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int hash(int k){
	int key;
	key=k%30;
	return key;
}

void dosyaac(){
    int i;
	FILE *fp= fopen("kitaplarim.txt","w");
	for (i = 0; i < 30; i++)
	{
		fprintf(fp, "%s %s %s %s %s\n", "NULL", "NULL", "NULL", "NULL", "NULL");
	}
	fclose(fp);
	
	
	
}
void ekle(int x){
	        char raf[29][4];
	        int rafi;
	        rafi=hash(x);
	        int k,b;
	        FILE *fp = fopen("kitaplarim.txt","a+");
	        char kitapadi[100];		
			printf("Kitap adini giriniz :");
			gets(kitapadi);
	        if(raf[rafi][0]=="NULL") {
	        	
	       
	        fprintf(fp,"%d.%s\n",x,kitapadi);
			getchar();
			raf[rafi][0]=kitapadi;
			}
			else if(raf[rafi][1]=="NULL") {
	        	
	        
	        fprintf(fp,"%d.%s\n",x,kitapadi);
			getchar();
		    raf[rafi][1]=kitapadi;
			}
			
		    else if (raf[rafi][2]=="NULL") {
	        	
	        
	        fprintf(fp,"%d.%s\n",x,kitapadi);
			getchar();
			raf[rafi][2]=kitapadi;
			}
			
			else if(raf[rafi][3]=="NULL") {
	        	
	        
	        fprintf(fp,"%d.%s\n",x,kitapadi);
			getchar();
		    raf[rafi][3]=kitapadi;
			}
			
			else if(raf[rafi][4]=="NULL") {
	        	
	       
	        fprintf(fp,"%d.%s\n",x,kitapadi);
			getchar();
			raf[rafi][4]=kitapadi;
			}
		
		
	        else{
			
	        printf("Dolu.");
	        
		}
			fp=fopen("raflarim.txt","w+");
	        for(k=0;k<30;k++){
	        	for(b=0;b<5;b++){
	        		fprintf(fp,"%s ",raf[k][b]);
				}
				fprintf(fp,"\n");
	        	
	        	
			}

			return;

}

void listele(){
	
   FILE *fp1;
   char kitapadi[100];
   char *c;
   fp1 = fopen("raflarim.txt","r");
   do {
     c = fgets(kitapadi,100,fp1); /* bir satir okuyalim */
     if (c != NULL)
        printf("%s",kitapadi);    /* ekrana yazalim   */
   } while (c != NULL);          /* ta ki NULL olana kadar.. */
   fclose(fp1);
	
	
}

void ara(){
	
	
	 FILE *fp=fopen("raflarim.txt","r");
                 char kitapadi[100];
                 printf("aranan kitap adini giriniz");
                 gets(kitapadi);
                 while(!feof(fp)){
                   
                   fscanf(fp,"%s",kitapadi);
                   if(strcmp(kitapadi,kitapadi)==0){
                       printf("%s\n",kitapadi);
                   }                            
                 }     
                 fclose(fp);   
	
}


int main(){
	int i;
	int sayac=0;
	
  do{
	int secim;
    printf("\n1.Kitap ekle");
    printf("\n2.Kitap ara");
    printf("\n3.Tum kitap raflarini listele");
    printf("\n4.Cikis");
    printf("\n");
	scanf("%d",&secim);
  	getchar();
  	switch(secim){
		case 1 :
			dosyaac();
			ekle(sayac);
			sayac++;
			
			break;
		case 2:
			ara();
			
			break;
		case 3:
			listele();
			break;
		case 4:
			printf("Program sonlandiriliyor.");
			exit(1);
		    break;
		default:
        printf("Gecerli Bir Numara Girmediniz!");
		
	}
	
printf("\nCikmak icin 1'e,devam etmek icin herhangi bir tusa basiniz.");
getchar();
scanf("%d",&i);


}while(i!=1);


}
