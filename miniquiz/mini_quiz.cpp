#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void rekor();
void yardim();
void rekorKaydet(float , char []);
int main()
     {
     int countr,r,count,i,n;
     float score;
     char choice;
     char oyuncuismi[20];
     mainhome:
     system("cls");
     printf("-------------------------------------------------------MINI QUIZ OYUNU--------------------------------------------------\n");
     printf("\n > Oyuna baslamak icin 'S' tusuna basiniz");
     printf("\n > En yuksek rekoru gormek icin 'V' tusuna basiniz  ");
     printf("\n > Yardim icin 'H' tusuna basiniz            ");
     printf("\n > Oyundan cikmak icin 'Q' tusuna basiniz            ");

     choice=toupper(getch());
     if (choice=='V'){
        rekor();
        goto mainhome;}

     else if (choice=='H'){
        yardim();getch();
        goto mainhome;}

	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");
     printf("\n\Kullanmak istediginiz ismi giriniz:");
     gets(oyuncuismi);

    system("cls");
    printf("\n  ------------------------------------------------Oyuna Hosgeldin %s!----------------------------------------------- ",oyuncuismi);
    printf("\n Baslamadan once isinize yarayabilecek kurallar:\n");
    printf("\n\n >> Quizde 10 soru bulunmaktadir.");
    printf("\n\n >> Verilen 4 secenekten birini secmek icin A, B, C, D tuslarindan birini giriniz.");
    printf("\n\n >> Verilen her dogru cevap icin 10 puan kazanacaksanýz.");
    printf("\n\n >> Herhangi bir soruda yanlis cevap verdiginiz anda oyun sonlandirilacak ve puaniniz belirlenecektir.\n\n\n");
    printf(" Oyuna baslamak icin 'Y' tusuna basiniz!\n");
    if (toupper(getch())=='Y'){
		    goto home;}
	else{
        goto mainhome;
        system("cls");}

     home:
     system("cls");
     count=0;
     for(i=1;i<=10;i++){
     system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nTurkiye'nin baskenti neresidir?");
		printf("\n\nA.Istanbul\t\tB.Ankara\n\nC.Kayseri\t\tD.Izmir");
		if (toupper(getch())=='B')
			{printf("\n\nDogru cevap +10 Puan!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nYanlis dogru cevap B.Ankara");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\nIlk arama motoru hangisidir ?");
		printf("\n\nA.Archie\t\tB.Google\n\nC.Wais\t\t        D.Altavista");
		if (toupper(getch())=='A')
			{printf("\n\nDogru cevap +10 Puan!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nYanlis dogru cevap A.Archie");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\nIlk cikan bilgisayar oyunu hangisidir ? ");
		printf("\n\nA.Spacewar\t\tB.Mario\n\nC.Pong\t\t        D.Pac-man");
		if (toupper(getch())=='A')
			{printf("\n\nDogru cevap +10 Puan!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nYanlis dogru cevap A.Spacewar");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n2. Dunya Savasi hangi yil baslamistir ?");
		printf("\n\nA.1937\t\tB.1938\n\nC.1940\t\tD.1939");
		if (toupper(getch())=='D')
			{printf("\n\nDogru cevap +10 Puan!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nYanlis dogru cevap D.1939");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n2022 yilinda en cok dinlenen sanatci kimdir ?");
		printf("\n\nA.Drake\t\t     B.Taylor Swift\n\nC.Bad Bunny          D.Travis Scott");
		if (toupper(getch())=='C')
			{printf("\n\nDogru cevap +10 Puan!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nYanlis dogru cevap C.Bad Bunny 18,5 Milyar");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\nDunya uzerinde kac cesit element bulunur ?");
		printf("\n\nA.120\t\tB.118\n\nC.117\t\tD.121");
		if (toupper(getch())=='B' )
			{printf("\n\nDogru cevap +10 Puan!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nYanlis dogru cevap B.118");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n1945 yilinda Japonya'ya atilan atom bombasinin ismi nedir ?");
		printf("\n\nA.Little Boy\t\tB.Fat Man\n\nC.Strong Girl\t\tD.Crazy17");
		if (toupper(getch())=='A')
			{printf("\n\nDogru cevap +10 Puan!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nYanlis dogru cevap A.Little Boy");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\nDünya'nýn en buyuk savas gemisinin ismi nedir ?");
		printf("\n\nA.Nimitz\t\t  B.Queen Elizabeth\n\nC.Amiral Kuznetsov        D.Gerald R. Ford");
		if (toupper(getch())=='D')
			{printf("\n\nDogru cevap +10 Puan!!!");countr++;getch(); break;}
		else
		       {printf("\n\nYanlis dogru cevap D.Gerald R. Ford");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\nEn cok piyasa degerine sahip olan coin hangisidir ?");
		printf("\n\nA.Ethereum\t\tB.AVAX\n\nC.Bitcoin\t\tD.SOL");
		if (toupper(getch())=='C')
			{printf("\n\nDogru cevap +10 Puan!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nYanlis dogru cevap C.Bitcoin");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\nStar Wars film serisinde bulunan 'Darth Vader' isimli karakterin filmdeki asýl ismi nedir ?");
		printf("\n\nA.Anakin Skywalker\t\tB.Obi-wan Kenobi\n\nC.Han Solo\t\t        D.Master Yoda");
		if (toupper(getch())=='A')
			{printf("\n\nDogru cevap +10 Puan!!!");countr++;getch(); break;}
		else
		       {printf("\n\nYanlis dogru cevap A.Anakin Skywalker");getch();break;goto score;
		       break;}}}

	score:
    system("cls");
	score=(int)countr*10;
	if(score>0.00 && score<100.00){
	   printf("******************************************** TEBRIKLER *************************************************\n");
       printf("\n                                        Puaniniz %.2f!, %s\n\n",score,oyuncuismi);goto go;}

	 else if(score==100.00){
	    printf("******************************************* TEBRIKLER **************************************************\n");
	    printf("\n                       Tum sorulari dogru bildiniz puaniniz %.2f! , %s\n\n",score,oyuncuismi);}

	 else{

	 printf("*********************************************** UZGUNUM  **************************************************\n");
     printf("\n                       Soruya dogru cevap veremediginiz icin puan kazanamadiniz.\n");
     printf("\n Tekrar deneyin!\n\n");goto go;}

	go:
	printf(" Oyunu tekrar baslatmak icin 'Y' tusuna basiniz.\n");
	printf(" Ana menuye donmek icin herhangi bir tusa basiniz");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		rekorKaydet(score,oyuncuismi);
		goto mainhome;}}}

void rekor()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s en yuksek skor %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void yardim()
	{system("cls");
    printf("\n\n                                                       YARDIM");
    printf("\n\n >> Quizde 10 soru bulunmaktadir.");
    printf("\n\n >> Verilen 4 secenekten birini secmek icin A, B, C, D tuslarindan birini giriniz.");
    printf("\n\n >> Verilen her dogru cevap icin 10 puan kazanacaksanýz.");
    printf("\n\n >> Herhangi bir soruda yanlis cevap verdiginiz anda oyun sonlandirilacak ve puaniniz belirlenecektir.\n\n\n");}

void rekorKaydet(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}

