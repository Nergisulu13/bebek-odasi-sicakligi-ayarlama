#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int ay=0;
	int uykusaati=0;
	int odasicakligi=0;
	printf("bebegin ay ve uykusaatini giriniz\n");
	scanf("%d %d %d",&ay,&uykusaati,&odasicakligi);
	if(ay>=1 && ay<6)
	{
     	printf(	"oda sicakligi 19-21 derece arasi olmali anlik sicakliga gore ayarlayiniz\n");
     	if(uykusaati>15.00 && uykusaati<=00.00)
     	  printf(	"sicakligi arttir\n");
     	else if(uykusaati>00.00 && uykusaati<=12.00)
     	  printf(	"sicakligi arttirin\n");
     	else if(uykusaati>10.00 && uykusaati<=15.00)
	      printf(	"sicakligi azaltin\n");
}
	if(ay>6 && ay<12)
	{
     	printf(	"oda sicakligi 20-24 derece arasi olmali anlik sicakliga gore ayarlayiniz\n");
     	if(uykusaati>15.00 && uykusaati<=00.00)
     	  printf(	"sicakigi arttirin\n");
     	else if(uykusaati>00.00 && uykusaati<=12.00)
     	  printf(	"sicakligi arttirin\n");
     	else if(uykusaati>10.00 && uykusaati<=15.00)
	      printf(	"sicakligi azaltin\n");
	      
	   else
	   printf(	"sicaklik sabit kalsin");
}
	int isi[5]={1,2,3,4,5};
	int i=0;
	printf("5 adet sicaklik giriniz :\n");
	for(i=0;i<5;i++)
	{
	 printf("%d sicaklik degeri :",i+1);
	 scanf("%d",&isi[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("olculen sicaklik degeri %d elemani=%d\n",i,isi[i]);
	}
		   int dizi[1][3];  
    
    for(int i = 0; i < 1; i++)
    {
        for(int j = 0; j < 3; j+=3)
        {
            printf("%d. odanin sabah sicakligini giriniz: ",i+1);
            scanf("%d",&dizi[i][j]);
            printf("%d. odanin oglen sicakligini giriniz: ",i+1);
            scanf("%d",&dizi[i][j+1]);
             printf("%d. odanin aksam sicakligini giriniz: ",i+1);
            scanf("%d",&dizi[i][j+2]);
        }
    }
 
    printf("\nzaman\t odanin sabah sicakligi\t odanin oglen sicakligi\todanin aksam sicakligi");
 
    for(int i = 0; i < 1; i++)
    {
        printf("\nzaman: %d\t", i+1);
        for(int j = 0; j < 3; j+=3)
        {
            printf("\t\t%d",dizi[i][j]);
            printf("\t\t%d",dizi[i][j+1]);
             printf("\t\t%d",dizi[i][j+2]);
        }
        
    }
   char sdizi1[]="Dikkat! ";
   char sdizi2[]=" oda sicakligi cok yuksek";
   
   printf("\n\n\t");
   printf("1.bildirim:%s",sdizi1);
   printf("\n\t");
   printf("2.bildirim:%s",sdizi2);
   printf("\n\n\t");
   strcat(sdizi1,sdizi2);
   puts(sdizi1);
   
   void merhaba()
{
    printf("Sistem hatasi!");
}
main()
{
    merhaba();
}

    
	return 0;
}
