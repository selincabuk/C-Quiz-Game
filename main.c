#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//T�RK�E KARAKTERLER� KULLANMAK ���N
#include <time.h>//random kodunda time null kullanmak i�in
#include <conio.h>//system("cls") ya da system("pause") kulllanmak i�in.
#include <ctype.h>//B�y�k, k���k harf.

int sayac;
int sorunumarasi=0;
int soruarttir=0;//skor tutma fonksiyonlar�na g�ndermek ama�l� global ald�k
char isim[20];//ismi al�p skor tutmaya g�ndermek ama�l� global ald�k.

void baslangic();//men� 2 den sonra kullan�c�dan isim alan ve sonras�nda da zorlukseviyesi fonksiyonunu �al��t�ran fonksiyon
void gerisayim();//geri say�mlar�n bir arada �al��mas�n� sa�lamak ama�l�
void gerisayim1();
void gerisayim2();
void gerisayim3();
void menu();//oyuna girdi�imizde kar��m�za ilk ��kan men�
void menu2();//ilk men�deki se�eneklerden birini se�memizi sa�layan men�
void yardim();//ana men�de 3 e bast���m�zda gitti�imiz yard�m fonksiyonu
void cikis();//oyun sonunda credit fonksiyonunu �al��t�ran ve sonras�nda da ��k�� de�i�keni alan fonksiyon
void skoryazdirmakolay(char isim1[20],int skor);//kolay test sonras� en y�ksek skorun tutulmas�n� sa�layan fonksiyon
void skoryazdirmaorta(char isim1[20],int skor);//orta test sonras� en y�ksek skorun tutulmas�n� sa�layan fonksiyon
void skoryazdirmazor(char isim1[20],int skor);//zor test sonras� en y�ksek skorun tutulmas�n� sa�layan fonksiyon
void kolay();//zorluk seviyesi se�tikten sonra gidilen kolay sorular fonksiyonu
void orta();//zorluk seviyesi se�tikten sonra gidilen orta sorular fonksiyonu
void zor();//zorluk seviyesi se�tikten sonra gidilen zor sorular fonksiyonu
void zorlukseviyesi();//men� 2 den sonra zorluk se�menizi sa�layan fonksiyon
void credit();//eme�i ge�enler k�sm�
void gorunenskorzor();//ilk men�de 2ye bast���m�z zaman tutmu� oldu�umuz zor seviyede y�ksek skoru g�steren fonksiyon
void gorunenskorkolay();//ilk men�de 2ye bast���m�z zaman tutmu� oldu�umuz kolay seviyede y�ksek skoru g�steren fonksiyon
void gorunenskororta();//ilk men�de 2ye bast���m�z zaman tutmu� oldu�umuz orta seviyede y�ksek skoru g�steren fonksiyon

//sorular�n cevab�n� al�rken kullanm�� oldu�umuz (toupper(getch())=='A') kodlar�ndaki toupper k�sm� harfin b�y�kl�k k���kl�k durumunu ihmal eden kod
//getchar kullanmak yerine getch kullanma amac�m�z harfi girdikten sonra 'enter' gerektirmemesi


void gerisayim1(){
	system("cls");
	printf("\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t    **\n");
	printf("\t\t\t\t\t\t\t    **\n");
	printf("\t\t\t\t\t\t\t   ***\n");
	printf("\t\t\t\t\t\t\t  ****\n");
	printf("\t\t\t\t\t\t\t *****\n");
	printf("\t\t\t\t\t\t\t******\n");
	printf("\t\t\t\t\t\t\t    **\n");
	printf("\t\t\t\t\t\t\t    **\n");
	printf("\t\t\t\t\t\t\t    **\n");
	printf("\t\t\t\t\t\t\t    **\n");
	printf("\t\t\t\t\t\t\t    **\n");
	printf("\t\t\t\t\t\t\t    **\n");
	printf("\t\t\t\t\t\t\t    **\n");
	printf("\t\t\t\t\t\t\t    **\n");
	printf("\t\t\t\t\t\t\t    **\n");
	printf("\t\t\t\t\t\t\t  ******\n");
	printf("\t\t\t\t\t\t\t  ******\n");
	Sleep(1000);
}

void gerisayim2(){
	system("cls");
	printf("\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t    *******\n");
	printf("\t\t\t\t\t\t   **********\n");
	printf("\t\t\t\t\t\t  ****    ****\n");
	printf("\t\t\t\t\t\t ****      ****\n");
	printf("\t\t\t\t\t\t          ****\n");
	printf("\t\t\t\t\t\t         ****\n");
	printf("\t\t\t\t\t\t        ****\n");
	printf("\t\t\t\t\t\t       ****\n");
	printf("\t\t\t\t\t\t      ****\n");
	printf("\t\t\t\t\t\t     ****\n");
	printf("\t\t\t\t\t\t    ****\n");
	printf("\t\t\t\t\t\t   ****\n");
	printf("\t\t\t\t\t\t  ****\n");
	printf("\t\t\t\t\t\t ****************\n");
	printf("\t\t\t\t\t\t ****************\n");
	Sleep(1000);
}

void gerisayim3(){
	system("cls");
	printf("\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t     *****\n");
	printf("\t\t\t\t\t\t    *******\n");
	printf("\t\t\t\t\t\t  ****   ****\n");
	printf("\t\t\t\t\t\t          ****\n");
	printf("\t\t\t\t\t\t         ****\n");
	printf("\t\t\t\t\t\t        ****\n");
	printf("\t\t\t\t\t\t       ****\n");
	printf("\t\t\t\t\t\t      ****\n");
	printf("\t\t\t\t\t\t       ****\n");
	printf("\t\t\t\t\t\t        ****\n");
	printf("\t\t\t\t\t\t         ****\n");
	printf("\t\t\t\t\t\t          ****\n");
	printf("\t\t\t\t\t\t  ****   ****\n");
	printf("\t\t\t\t\t\t    *******\n");
	printf("\t\t\t\t\t\t     *****\n");
	Sleep(1000);
}

void gerisayim(){ //geri say�mlar�n bir arada �al��mas�n� sa�lamak ama�l�
	gerisayim3();
	gerisayim2();
	gerisayim1();
}

void menu(){ //oyuna girdi�imizde kar��m�za ilk ��kan men�
    system("cls");
    printf("\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\tGenel K�lt�r Quiz\n\n");
    printf("\n\t\t\t\t--------------------------------------------------");
    printf("\n\t\t\t\t\t Ba�lamak i�in '1' tu�una bas�n.\n");
    printf("\n\t\t\t\t\t Skor tablosu i�in '2' tu�una bas�n\n");
    printf("\n\t\t\t\t\t Yard�m i�in '3' tu�una bas�n.\n");
    printf("\n\t\t\t\t\t ��kmak i�in '4' tu�una bas�n.");
    printf("\n\t\t\t\t--------------------------------------------------\n\n\t\t\t\t");
    menu2();
}

void yardim(){ //ana men�de 3 e bast���m�zda gitti�imiz yard�m fonksiyonu
	system("cls");
	printf("\n\n\n\t\t\t-----------------------------------------------------------------------\n");
	printf("\n\n\t\t\t   Bu oyun oynamak i�in �ok kolay. Size baz� genel k�lt�r, tarih, dizi");
	printf("\n\n\t\t\t    sorular� sorulacak ve do�ru cevap, sunulan d�rt se�enek aras�ndan");
	printf("\n\n\t\t\t    se�ilecektir. Skorunuz oyunun sonunda hesaplanacakt�r ve ekranda");
	printf("\n\n\t\t\tg�r�necektir. Ald���n�z puan verdi�iniz cevab�n do�rulu�una ba�l� olarak");
	printf("\n\n\t\t\tde�i�iklik g�sterecektir. E�er skorunuz, en y�ksek skorsa kaydedilecektir.");
	printf("\n\n\t\t\t\t\t\t    �Y� �ANSLAR :)\n\n");
	printf("\t\t\t-----------------------------------------------------------------------\n\n");
	Sleep(1000);
	printf("\n\n\t\t\t\t   Anamen�ye d�nmek i�in herhangi bir tu�a bas�n�z.\n\n\t\t\t\t\t\t\t   ");
	getch();
	menu();
}

void menu2(){ //ilk men�deki se�eneklerden birini se�memizi sa�layan men�
	int baslangicdegeri;
	printf("\t\t\t");
	scanf("%d",&baslangicdegeri);
	switch(baslangicdegeri){
		case 1:
			sayac=0;
			baslangic();
			break;
		case 2:
			gorunenskorkolay();
			gorunenskororta();
			gorunenskorzor();
			printf("\n\n\n\n\t\t\t");
			printf("     Anamen�ye d�nmek i�in herhangi bir tu�a bas�n�z.");
			getch();//system("pause") ayn�
			menu();
			break;
		case 3:
			yardim();
			break;
		case 4:
			break;
		default:
			printf("\n\t\t\t\t\tBilinmeyen tu�. Yeniden deneyiniz.");
			Sleep (1000);
			menu();
			break;
	}
	
}

void baslangic(){ //men� 2 den sonra kullan�c�dan isim alan ve sonras�nda da zorlukseviyesi fonksiyonunu �al��t�ran fonksiyon
    system("cls");
    printf("\n\n\n\n\n\n\n\n");
    printf("\n\n\t\t\t\t-----------------------------------------------------");
    printf("\n\n\t\t\t\t\t\tL�tfen Ad�n�z� Giriniz.\n\n");
    printf("\t\t\t\t-----------------------------------------------------\n\n\t\t\t\t\t\t\t");
    scanf("%s",&isim);
    soruarttir=0;
	zorlukseviyesi();
}

void zorlukseviyesi(){
	system("cls");
	printf("\n\n\n\n\n\n\n\n");
	printf("\n\n\t\t\t\t\t\tZorluk Seviyesi Se�iniz:\n\n\t\t\t\t\tK-Kolay\n\n\t\t\t\t\tO-Orta\n\n\t\t\t\t\tZ-Zor\n\n\t\t\t\t\tA-Anamen�\n");
	printf("\n\t\t\t\t\t\t\t");
	char zorluk;
	zorluk=getch();
	switch(zorluk){
	case 'k':
		printf("\n\n\n\t\t\t\t\t");
		printf("***KOLAY SEV�YE BA�LATILIYOR***");
		Sleep(1000);
		printf("\n\n\t\t\t\t\t");
		printf("***********BA�ARILAR***********");
		Sleep(1000);
		gerisayim();
		kolay();
		break;
	case 'o':
		printf("\n\n\n\t\t\t\t\t");
		printf("***ORTA SEV�YE BA�LATILIYOR***");
		Sleep(1000);
		printf("\n\n\t\t\t\t\t");
		printf("**********BA�ARILAR***********");
		Sleep(1000);
		gerisayim();
		orta();
		break;
	case 'z':
		printf("\n\n\n\t\t\t\t\t");
		printf("***ZOR SEV�YE BA�LATILIYOR***");
		Sleep(1000);
		printf("\n\n\t\t\t\t\t");
		printf("**********BA�ARILAR**********");
		Sleep(1000);
		gerisayim();
		zor();
		break;
	case 'a':
		menu();
		break;
	default:
		printf("\n\n\t\t\t\t\tYanl�� Tu�a Bast�n�z!!!\n");
		Sleep(500);
		zorlukseviyesi();
		break;
		}
}

void zor(){
	int dizi[20];
	int sorusoru=0;
	int sayac=0;
	int i;
	for( sayac=0;sayac<20;sayac++){
	srand ( time(NULL) );
	
	
	sorunumarasi=rand()%51+1;
	dizi[sayac]=sorunumarasi;

	for (i = 0; i < sayac; i++)
	{
		if (dizi[i]==sorunumarasi){
			sorunumarasi=rand()%51+1;
			i=0;
		}
	}
	sorusoru++;
	switch(sorunumarasi){
		case 1:
			system("cls");
			printf("\n\n%d-Hangi hayvanlar�n dam�zl�k erkek olanlar�n�n adlar� bur�lara verilmi�tir?",sorusoru);
			printf("\n\nA)Bal�k ve Yenge�\t\t\tB)Koyun ve S���r\n\nC)Aslan ve Akrep\t\t\tD)Z�rafa ve Gergedan\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)Koyun ve S���r\n\n\n\n\n\n");
			}
			getch();
			break;
		case 2:
			system("cls");
			printf("\n\n%d-K�sa olan �eyler hangisinin �mr�ne benzetilir?",sorusoru);
			printf("\n\nA)Kelebek\t\t\tB)Kaplumba�a\n\nC)��ng�rakl� y�lan\t\tD)�amur z�pz�p�\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
		 	}
			else{
        		printf("\n\nYanl��!!! Do�ru cevap A)Kelebek\n\n\n\n\n\n");
			}
			getch();
			break;
		case 3:
			system("cls");
			printf("\n\n%d-Bir yere kal�c� olarak yerle�meyen insan topluluklar� i�in kullan�lan ifade hangisidir?",sorusoru);
			printf("\n\nA)Dururbekler\t\t\tB)Konarg��er\n\nC)�nerbiner\t\t\tD)Gelirgider\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)Konarg��er\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 4:
			system("cls");
			printf("\n\n%d-'Leviathan' adl� eseriyle bilinen 17. Y�zy�l d���n�r� kimdir??",sorusoru);
			printf("\n\nA)Jean-Jacques Rousseau\t\t\tB)Karl Marx\n\nC)Adam Smith\t\t\t\tD)Thomas Hobbes\n\n");
			if (toupper(getch())=='D'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)Thomas Hobbes\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 5:
			system("cls");
			printf("\n\n%d-3 ayda ��kan bir dergi 60. say�s�n� ��kar�yorsa ka� senedir yay�mlan�yordur?",sorusoru);
			printf("\n\nA)10\t\t\tB)12\n\nC)15\t\t\tD)20\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)15\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 6:
			system("cls");
			printf("\n\n%d-'�ulluk' nedir?",sorusoru);
			printf("\n\nA)Bir t�r boh�a\t\t\t\tB)G��men bir ku�\n\nC)Bir diki� y�ntemi\t\t\tD)Yumurtal� bir yemek\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)G��men bir ku�\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 7:
			system("cls");
			printf("\n\n%d-Bir dedeyle torununun ba��ndan ge�en fantastik maceralar� konu edinen, \nbilim kurgu ve komedi t�r�ndeki �izgi dizi hangisidir?",sorusoru);
			printf("\n\nA)The Simpsons\t\t\t\tB)Family Guy\n\nC)Rick and Morty\t\t\tD)S�nger Bob\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Rick and Morty\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 8:
			system("cls");
			printf("\n\n%d-Elementleri ��renmeye �al��an bir ��renci hangisini kullan�r?",sorusoru);
			printf("\n\nA)Ya�l� boya tablo\t\t\tB)�arp�m tablosu\n\nC)Periyodik tablo\t\t\tD)S�per Lig puan tablosu\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Periyodik tablo\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 9:
			system("cls");
			printf("\n\n%d-Hangisi 'desteklemek' anlam�nda kullan�lan ifadedir?",sorusoru);
			printf("\n\nA)Sehpa tutmak\t\t\tB)Koltuk ��kmak\n\nC)Masa a�mak\t\t\tD)Karyola katmak\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)Koltuk ��kmak\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 10:
			system("cls");
			printf("\n\n%d-'Ortanca karde�' olan birinin ka� karde�i vard�r?",sorusoru);
			printf("\n\nA)1\t\t\tB)2\n\nC)3\t\t\tD)5\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)2\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 11:
			system("cls");
			printf("\n\n%d-T�rk�e s�zl�klerde yer alan '�vester' kelimesi ne anlama gelir?",sorusoru);
			printf("\n\nA)S�veter\t\t\tB)K�z karde�\n\nC)Vestiyer\t\t\tD)Erkek karde�\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)K�z karde�\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 12:
			system("cls");
			printf("\n\n%d-Hangisi, 1994 yap�m� 'Vampirle G�r��me' filminde ba�roldeki 3 karizmatik vampiri \ncanland�ran akt�rlerden biri de�ildir?",sorusoru);
			printf("\n\nA)Tom Cruise\t\t\tB)Brad Pitt\n\nC)Johnny Depp\t\t\tD)Antonio Banderas\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Johnny Depp\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 13:
			system("cls");
			printf("\n\n%d-Ara� ruhsatlar� genellikle nereye konur?",sorusoru);
			printf("\n\nA)�of�r koltu�unun g�ne�li�ine\t\t\tB)Bagaja\n\nC)Kaput i�ine\t\t\t\t\tD)Yedek lasti�in alt�na\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap A)�of�r koltu�unun g�ne�li�ine\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 14:
			system("cls");
			printf("\n\n%d-Hangisi Klasik Bat� M�zi�i bestecisidir?",sorusoru);
			printf("\n\nA)Immanuel Kant\t\t\t\tB)Arthur Schopenhauer\n\nC)Frederic Chopin\t\t\tD)Soren Kierkegaard\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
       		 	printf("\n\nYanl��!!! Do�ru cevap C)Frederic Chopin\n\n\n\n\n\n");
       		}
    		getch();
			break;
		case 15:
			system("cls");
			printf("\n\n%d-Hangisi, D�nya Kupas�'n� hem futbolcu hem de teknik direkt�rken kazanan �� ki�iden biri de�ildir?",sorusoru);
			printf("\n\nA)Didier Deschamps\t\t\tB)Franz Beckenbauer\n\nC)Mario Zagallo\t\t\t\tD)Carlos Alberto Parreira\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)Carlos Alberto Parreira\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 16:
			system("cls");
			printf("\n\n%d-Londra merkezli Southbank Centre'�n 2014 y�l�nda se�ti�i 'son 50 y�l�n en g�zel 50 a�k �iiri' \naras�nda yer alan 'Severmi�im Me�er' kimin �iirdir?",sorusoru);
			printf("\n\nA)Atilla �lhan\t\t\tB)Cemal S�reyya\n\nC)Naz�m Hikmet\t\t\tD)�zdemir Asaf\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
       			printf("\n\nYanl��!!! Do�ru cevap C)Naz�m Hikmet\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 17:
			system("cls");
			printf("\n\n%d-'Daily Planet' muhabiri Clark Kent, telefon kul�besine girip, k�l�k de�i�tirdikten sonra hangisi olarak d��ar� ��kar?",sorusoru);
			printf("\n\nA)Batman\t\t\tB)He-Man\n\nC)S�permen\t\t\tD)Kaptan Ma�ara Adam�\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)S�permen\n\n\n\n\n\n");
        	}
    		getch();
			break;
		case 18:
			system("cls");
			printf("\n\n%d-Da��stan, Tataristan ve �e�enistan hangisine ba�l� cumhuriyetlerdir?",sorusoru);
			printf("\n\nA)�in\t\t\tB)Rusya\n\nC)�ran\t\t\tD)Mo�olistan\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)Rusya\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 19:
			system("cls");
			printf("\n\n%d-'3 Idiots', 'PK', 'Dangal' ve ge�ti�imiz g�nlerde vizyona giren 'Hindistan E�k�yalar�' \nfilmlerinde ba�rol oynayan Hint akt�r, y�netmen ve yap�mc� kimdir?",sorusoru);
			printf("\n\nA)Raaj Kumar\t\t\tB)Shah Rukh Khan\n\nC)Raj Kapoor\t\t\tD)Aamir Khan\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)Aamir Khan\n\n\n\n\n\n");
        	}	
    		getch();
			break;
		case 20:
			system("cls");
			printf("\n\n%d-2009'da Nijerya'da ger�ekle�en bir silahl� soyguna kar��t��� ��phesiyle tutuklanan ve soru�turma \ntamamlanana kadar g�zalt�nda tutulan hayvan�n t�r� nedir?",sorusoru);
			printf("\n\nA)Ke�i\t\t\tB)At\n\nC)Y�lan\t\t\tD)Fil\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}	
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap A)Ke�i\n\n\n\n\n\n");
        	}	
    		getch();
			break;
		case 21:
			system("cls");
			printf("\n\n%d-'Bostan' kelimesinin Fars�a'daki k�keninin anlam� nedir?",sorusoru);
			printf("\n\nA)G�zel koku\t\t\tB)Ye�il vadi\n\nC)Yumu�ak toprak\t\tD)Ac� patl�can\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap A)G�zel koku\n\n\n\n\n\n");
        	}	
    		getch();
			break;
		case 22:
			system("cls");
			printf("\n\n%d-Kalahari, Atakama, Gobi ve Taklamakan hangi co�rafi olu�uma �rneklerdir?",sorusoru);
			printf("\n\nA)S�rada�\t\t\tB)��l\n\nC)�elale\t\t\tD)Volkanik g�l\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}	
  			else{
       			printf("\n\nYanl��!!! Do�ru cevap B)��l\n\n\n\n\n\n");
       		}	
    		getch();
			break;
		case 23:
			system("cls");
			printf("\n\n%d-Hangisi 22 sezondur yay�mlanmakta olan 'South Park' adl� dizinin ba�karekterinden biri de�ildir?",sorusoru);
			printf("\n\nA)Eric Cartman\t\t\tB)Kyle Broflovski\n\nC)Stan Marsh\t\t\tD)BoJack Horseman\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)BoJack Horseman\n\n\n\n\n\n");
        	}	
    		getch();
			break;	
		case 24:
			system("cls");
			printf("\n\n%d-Tek bir �irkette en uzun s�re �al��ma rekoru ne kadard�r?",sorusoru);
			printf("\n\nA)65 y�l 75 g�n\t\t\tB)70 y�l 75 g�n\n\nC)75 y�l 75 g�n\t\t\tD)80 y�l 75 g�n\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)80 y�l 75 g�n\n\n\n\n\n\n");
        	}
    		getch();
			break;	
		case 25:
			system("cls");
			printf("\n\n%d-Hangi �nl� filmin senaryosu bir�ok b�y�k yap�m �irketi taraf�ndan, \nbaz�lar�nda birden �ok olmak �zere, 40'tan fazla kez reddedilmi�tir?",sorusoru);
			printf("\n\nA)Matrix\t\t\t\t\tB)Gelece�e D�n��\n\nC)Harry Potter ve Felsefe Ta��\t\t\tD)Terminat�r\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)Gelece�e D�n��\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 26:
			system("cls");
			printf("\n\n%d-'Tersi ��kar' genellikle hangisi i�in yap�lan bir yorumdur?",sorusoru);
			printf("\n\nA)�ark� s�zleri\t\t\tB)Tarih kitaplar�\n\nC)R�yalar\t\t\tD)Bilimsel deneyler\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)R�yalar\n\n\n\n\n\n");
			}
   			getch();	
			break;
		case 27:
			system("cls");
			printf("\n\n%d-Y�lba��nda hangi �lkeye giderseniz, yeni y�la yaz mevsiminde girersiniz?",sorusoru);
			printf("\n\nA)�rlanda\t\t\tB)Kanada\n\nC)Rusya\t\t\tD)Brezilya\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)Brezilya\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 28:
			system("cls");
			printf("\n\n%d-�in'de d�zenlenen D�nya Kul�pler �ampiyonas� finalinde, rakibini 3-0 yenerek \n3. kez d�nya �ampiyonu olan kad�n voleybol tak�m� hangisidir?",sorusoru);
			printf("\n\nA)Fenerbah�e\t\t\tB)Vak�fbank\n\nC)Galatasaray\t\t\tD)Eczac�ba��\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
       			printf("\n\nYanl��!!! Do�ru cevap B)Vak�fbank\n\n\n\n\n\n");
       		}
    		getch();
			break;
		case 29:
			system("cls");
			printf("\n\n%d-Hollanda'da 1 ya��ndayken kaybolan ve 17 y�l sonra bulunup sahibine kavu�an 'Lolipop' adl� hayvan hangisidir?",sorusoru);
			printf("\n\nA)Papa�an\t\t\tB)K�pek\n\nC)Kaplumba�a\t\t\tD)Kedi\n\n");
			if (toupper(getch())=='D'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}	
  			else
       			{printf("\n\nYanl��!!! Do�ru cevap D)Kedi\n\n\n\n\n\n");}
    		getch();
			break;	
		case 30:
			system("cls");
			printf("\n\n%d-Yumruk att��� k�t� adamlar�n y�z�nde kurukafa izi b�rakan �izgi roman kahraman� hangisidir?",sorusoru);
			printf("\n\nA)Zorro\t\t\t\tB)Zagor\n\nC)�r�mcek Adam\t\t\tD)K�z�lmaske\n\n");
			if (toupper(getch())=='D'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap D)K�z�lmaske\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 31:
			system("cls");
			printf("\n\n%d-'Uyuyan G�zel', 'F�nd�kk�ran' ve 'Ku�u G�l�' baleleri hangi bestecinin eserleridir?",sorusoru);
			printf("\n\nA)Wagner\t\t\tB)Salieri\n\nC)Handel\t\t\tD)�aykovski\n\n");
			if (toupper(getch())=='D'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap D)�aykovski\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 32:
			system("cls");
			printf("\n\n%d-2006'da, d�nyan�n en uzun insan� Xi Shun, kollar�n� kullanarak hangi t�rden \niki hayvan�n midesinden plastik maddeler ��karm��t�r?",sorusoru);
			printf("\n\nA)Aslan\t\t\t\tB)Yunus\n\nC)Timsah\t\t\tD)Piton\n\n");
			if (toupper(getch())=='B'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap B)Yunus\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 33:
			system("cls");
			printf("\n\n%d-Zeki M�ren'in 'Biraz Fernandel, biraz Belmondo' diye tan�mlad��� ki�i hangisidir?",sorusoru);
			printf("\n\nA)�ener �en\t\t\tB)C�neyt Ark�n\n\nC)Kemal Sunal\t\t\tD)Tar�k Akan\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap C)Kemal Sunal\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 34:
			system("cls");
			printf("\n\n%d-Hangisi, baz� futbol tak�mlar�n�n, taraftarlar� i�in kulland�klar� bir ifadedir?",sorusoru);
			printf("\n\nA)12. Adam\t\t\tB)Yard�mc� eleman\n\nC)Canl� destek\t\t\tD)Yedek kuvvet\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap A)12. Adam\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 35:
			system("cls");
			printf("\n\n%d-Bir G�n Ka� Saniyedir?",sorusoru);
			printf("\n\nA)86000\t\t\tB)88600\n\nC)86400\t\t\tD)84800\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap C)88400\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 36:
			system("cls");
			printf("\n\n%d-Trafikte hangi ara�lar�n arkas�nda 'Dolu' ya da 'Bo�' yazar?",sorusoru);
			printf("\n\nA)Akaryak�t tankeri\t\t\tB)��renci servisi\n\nC)Harfiyat kamyonu\t\t\tD)Yolcu otob�s�\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap A)Akaryak�t tankeri\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 37:
			system("cls");
			printf("\n\n%d-G�vdesi sar� veya kirli sar�; yelesi, kuyru�u ve baca��n�n alt k�sm�ndaki k�llar� \nkoyu renkte olan atlar i�i kullan�lan ifade hangisidir?",sorusoru);
			printf("\n\nA)Doru\t\t\tB)Kula\n\nC)Ya��z\t\t\tD)Seki\n\n");
			if (toupper(getch())=='B'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap B)Kula \n\n\n\n\n\n");
			}
    		getch();
			break;
		case 38:
			system("cls");
			printf("\n\n%d-Hangi meyvenin 'Va�ington' ad�yla sat�lan bir �e�idi vard�r?",sorusoru);
			printf("\n\nA)Nar\t\t\t\tB)Elma\n\nC)Portakal\t\t\tD)Ananas\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap C)Portakal\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 39:
			system("cls");
			printf("\n\n%d-Klasik bir �engel bulmacada, bir kutucukta en fazla ka� farkl� soru sorulur?",sorusoru);
			printf("\n\nA)1\t\t\tB)2\n\nC)3\t\t\tD)4\n\n");
			if (toupper(getch())=='B'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap B)2");
			}
    		getch();
			break;
		case 40:
			system("cls");
			printf("\n\n%d-Genellikle g�ne�ten korunmak i�in bir yerin �zerine gerilen, bez veya naylondan yap�lm�� �rt�ye ne ad verilir?",sorusoru);
			printf("\n\nA)Tente\t\t\t\tB)Marley\n\nC)Lambri\t\t\tD)Laminant\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap A)Tente\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 41:
			system("cls");
			printf("\n\n%d-'Bezek�i' hangisinin di�er ad�d�r?",sorusoru);
			printf("\n\nA)Hattat\t\t\tB)Sarraf\n\nC)Nakka�\t\t\tD)Halla�\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Nakka�\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 42:
			system("cls");
			printf("\n\n%d-333'le hangi say�n�n toplam� 1000 olur?",sorusoru);
			printf("\n\nA)667\t\t\tB)677\n\nC)767\t\t\tD)777\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap A)667\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 43:
			system("cls");
			printf("\n\n%d-K�pe�iniz bir torba mamay� 3 ayda yiyorsa torbas� 75 lira olan mamaya y�ll�k ne kadar �dersiniz?",sorusoru);
			printf("\n\nA)250 lira\t\t\tB)300 lira\n\nC)350 lira\t\t\tD)450 lira\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)300 lira\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 44:
			system("cls");
			printf("\n\n%d-Bir Birle�mi� Milletler kurumu olan 'UNESCO' nun ad�n�n a��l�m�nda hangisi yoktur?",sorusoru);
			printf("\n\nA)E�itim\t\t\tB)�ocuk\n\nC)K�lt�r\t\t\tD)Bilim\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)�ocuk\n\n\n\n\n\n");
			}
    		getch();
			break;		
		case 45:
			system("cls");
			printf("\n\n%d-'Bir varm�� bir yokmu�' diyerek anlat�lmaya ba�lanan genellikle hangisi olur?",sorusoru);
			printf("\n\nA)Masal\t\t\t\t\tB)�zge�mi�\n\nC)Akademin Sunum\t\t\tD)Bilimsel Makale\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap A)Masal\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 46:
			system("cls");
			printf("\n\n%d-Hangi kelime 'kal�nca b�k�lm�� ipek iplik' anlam�na gelir?",sorusoru);
			printf("\n\nA)�brik\t\t\tB)�lmik\n\nC)Me�in\t\t\tD)�bri�im\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)�bri�im\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 47:
			system("cls");
			printf("\n\n%d-'Pizzaya en yak��t�rd���m malzeme an��ezdir' c�mlesinde ad� ge�en 'an��ez' hangisinden yap�lan bir ezme �e�ididir?",sorusoru);
			printf("\n\nA)Mantar\t\t\tB)Tavuk\n\nC)Bal�k\t\t\t\tD)M�s�r\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Bal�k\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 48:
			system("cls");
			printf("\n\n%d-Yar��ma programlar�nda birbiriyle yar��an ki�iler, kendilerini tan�tt�ktan sonra nezaket icab� kime ba�ar�lar diler?",sorusoru);
			printf("\n\nA)Kameralara\t\t\t\tB)Maky�ze\n\nC)Di�er yar��mac�lara\t\t\tD)Prod�ksiyon amirine\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Di�er yar��mac�lara\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 49:
			system("cls");
			printf("\n\n%d-Kolu ya da baca�� al��ya al�nan ki�iye arkada�lar� genellikle hangisini yaparlar?",sorusoru);
			printf("\n\nA)Omuzda ta��rlar\t\t\tB)Al��s�n� imzalarlar\n\nC)Havaya at�p tutarlar\t\t\tD)Sa�lar�n� boyarlar\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)Al��s�n� imzalarlar\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 50:
			system("cls");
			printf("\n\n%d-Gazeteyi i� bulmak amac�yla sat�n alan ki�i, ilk olarak muhtemelen hangisine bakacakt�r?",sorusoru);
			printf("\n\nA)�nsan kaynaklar� eki\t\t\tB)Spor eki\n\nC)Magazin eki\t\t\tD)Moda eki\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap A)�nsan kaynaklar� eki\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 51:
			system("cls");
			printf("\n\n%d-Hangisi bir �e�it cekettir?",sorusoru);
			printf("\n\nA)Klo�\t\t\tB)J�pon\n\nC)Babet\t\t\tD)Blazer\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)Blazer\n\n\n\n\n\n");
			}
    		getch();	
			break;
		default:
			Sleep(200);
		}//case biti�
	}//for biti�
	soruarttir/=2;
	printf("Toplam Skorunuz %d.\n",soruarttir);
	getch();
	skoryazdirmazor(isim,soruarttir);
	cikis();
}//fonk

void orta(){
	int dizi[10];
	int sorusoru=0;
	int sayac=0;
	int i;
	for( sayac=0;sayac<10;sayac++){
	srand ( time(NULL) );
	
	
	sorunumarasi=rand()%30+1;
	dizi[sayac]=sorunumarasi;

	for (i = 0; i < sayac; i++)
	{
		if (dizi[i]==sorunumarasi){
			sorunumarasi=rand()%30+1;
			i=0;
		}
	}
	sorusoru++;
	switch(sorunumarasi){
		case 1:
			system("cls");
			printf("\n\n%d-Hem futbol hem de basketbolda milli tak�mda oynayan sporcumuz?",sorusoru);
			printf("\n\nA)Hidayet T�RKO�LU\t\t\tB)Can BARTU\n\nC)�enol G�NE�\t\t\t\tD)Sergen YAL�IN\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)Can BARTU\n\n\n\n\n\n");
			}
   			getch();	
			break;
		case 2:
			system("cls");
			printf("\n\n%d-Erke�i do�um yapabilen tek hayvan?",sorusoru);
			printf("\n\nA)Salyangoz\t\t\tB)Denizanas�\n\nC)Denizat�\t\t\tD)Kaplumba�a\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Denizat�\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 3:
			system("cls");
			printf("\n\n%d-D�nyada insan �l�m�ne en �ok neden olan hayvan?",sorusoru);
			printf("\n\nA)Kurt\t\t\tB)Ay�\n\nC)Kene\t\t\tD)Sivrisinek\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
       			printf("\n\nYanl��!!! Do�ru cevap D)Sivrisinek\n\n\n\n\n\n");
       		}
    		getch();
			break;
		case 4:
			system("cls");
			printf("\n\n%d-�lkemizde en �ok bulunan a�a� t�r�?",sorusoru);
			printf("\n\nA)Me�e\t\t\tB)S���t\n\nC)��nar\t\t\tD)Ladin\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}	
  			else
       			{printf("\n\nYanl��!!! Do�ru cevap A)Me�e\n\n\n\n\n\n");}
    		getch();
			break;	
		case 5:
			system("cls");
			printf("\n\n%d-Pirelerden bula�an ve ge�mi�te bir�ok insan� topluca �ld�ren bula��c� hastal�k?",sorusoru);
			printf("\n\nA)Ebola\t\t\tB)Korona\n\nC)Veba\t\t\tD)HIV\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap C)Veba\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 6:
			system("cls");
			printf("\n\n%d-Tsunami Felaketinde En Fazla Zarar G�ren G�ney Asya �lkesi A�a��dakilerden Hangisidir?",sorusoru);
			printf("\n\nA)Endonezya\t\t\tB)Srilanka\n\nC)Tayland\t\t\tD)Hindistan\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap A)Endonezya\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 7:
			system("cls");
			printf("\n\n%d-2003 Y�l�nda Euro Vizyon �ark� Yar��mas�nda �lkemizi Temsil Eden ve Yar��mada Birinci Gelen Sanat��m�z Kimdir?",sorusoru);
			printf("\n\nA)Grup Athena\t\t\tB)Sertap Erener\n\nC)�ebnem Paker\t\t\tD)Manga\n\n");
			if (toupper(getch())=='B'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap B)Sertap Erener\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 8:
			system("cls");
			printf("\n\n%d-Mustafa Kemal Atat�rk��n N�fusa Kay�tl� Oldu�u �l Hangisidir?",sorusoru);
			printf("\n\nA)Bursa\t\t\tB)Ankara\n\nC)�stanbul\t\tD)Gaziantep\n\n");
			if (toupper(getch())=='D'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap D)Gaziantep\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 9:
			system("cls");
			printf("\n\n%d-A�a��dakilerden Hangisi D�nya Sa�l�k �rg�t�n�n K�salt�lm�� �smidir?",sorusoru);
			printf("\n\nA)UHW\t\t\tB)UNICEF\n\nC)WHO\t\t\tD)NATO\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap C)WHO\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 10:
			system("cls");
			printf("\n\n%d-Bir G�n Ka� Saniyedir?",sorusoru);
			printf("\n\nA)86000\t\t\tB)88600\n\nC)86400\t\t\tD)84800\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap C)88400\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 11:
			system("cls");
			printf("\n\n%d-Bir Sebepten Dolay� Tek Kula��na K�pe Takan Osmanl� Padi�ah� Kimdir?",sorusoru);
			printf("\n\nA)Kanuni Sultan S�leyman\t\t\tB)Yavuz Sultan Selim\n\nC)Orhan Bey\t\t\t\t\tD)Fatih Sultan Selim\n\n");
			if (toupper(getch())=='B'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap B)Yavuz Sultan Selim\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 12:
			system("cls");
			printf("\n\n%d-Aspirinin Hammaddesi Nedir?",sorusoru);
			printf("\n\nA)S���t\t\t\tB)K�knar\n\nC)Kavak\t\t\tD)Me�e\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap A)S���t \n\n\n\n\n\n");
			}
    		getch();
			break;
		case 13:
			system("cls");
			printf("\n\n%d-Hangisi �skandinav �lkesi de�ildir?",sorusoru);
			printf("\n\nA)Danimarka\t\t\tB)�sve�\n\nC)Norve�\t\t\tD)Finlandiya\n\n");
			if (toupper(getch())=='D'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap D)Finlandiya\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 14:
			system("cls");
			printf("\n\n%d-Hangisi bir renk ismi de�ildir?",sorusoru);
			printf("\n\nA)Yanan konyak alevi\t\t\tB)Sarho� depo pembesi\n\nC)H�zl� maymun kuyru�u\t\t\tD)Drake'in boynu\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap C)H�zl� maymun kuyru�u\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 15:
			system("cls");
			printf("\n\n%d-Bir d�nem kat�ld�klar� g�zellik yar��malar�nda ta� giymeye hak kazanan bu \ng�zellerden hangisinin tac� geri 'al�nmam��t�r'?",sorusoru);
			printf("\n\nA)Aydan �ener\t\t\tB)H�lya Av�ar\n\nC)It�r Esen\t\t\tD)Sibel Turnag�l\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanl��!!! Do�ru cevap A)Aydan �ener\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 16:
			system("cls");
			printf("\n\n%d-Mustafa Kemal Atat�rk resmi kay�tlara g�re toplam ka� kitap okumu�tur?",sorusoru);
			printf("\n\nA)1997\t\t\tB)2997\n\nC)3997\t\t\tD)4997\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)3997\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 17:
			system("cls");
			printf("\n\n%d-PUBG Mobile'�n oynanan ilk haritas� hangisidir?",sorusoru);
			printf("\n\nA)Sanhok\t\t\tB)Miramar\n\nC)Vikendi\t\t\tD)Erangel\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)Erangel\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 18:
			system("cls");
			printf("\n\n%d-FIFA 19'un kapak foto�raf�nda hangi oyuncu vard�r?",sorusoru);
			printf("\n\nA)Kylian Mbappe\t\t\tB)Eden Hazard\n\nC)Cristiano Ronaldo\t\tD)Sabri Sar�o�lu\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Cristiano Ronaldo\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 19:
			system("cls");
			printf("\n\n%d-S�leyman �ak�r Kurtlar Vadisi'nde ka��nc� b�l�mde �lm��t�r?",sorusoru);
			printf("\n\nA)42\t\t\tB)43\n\nC)44\t\t\tD)45\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)45\n\n\n\n\n\n");
			}
    		getch();
			break;		
		case 20:
			system("cls");
			printf("\n\n%d-Ali, Kuzey G�ney dizisinde ka��nc� b�l�mde �lm��t�r?",sorusoru);
			printf("\n\nA)40\t\t\tB)42\n\nC)45\t\t\tD)50\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap A)40\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 21:
			system("cls");
			printf("\n\n%d-Pisa Kulesi hangi y�ne do�ru e�ilmektedir?",sorusoru);
			printf("\n\nA)Kuzey\t\t\tB)G�ney\n\nC)Do�u\t\t\tD)Bat�\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)G�ney\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 22:
			system("cls");
			printf("\n\n%d-Gulyabani hangi filmde yer almaktayd�?",sorusoru);
			printf("\n\nA)Tosun Pa�a\t\t\tB)S�t Karde�ler\n\nC)�abano�lu �aban\t\tD)Hababam S�n�f�\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)S�t Karde�ler\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 23:
			system("cls");
			printf("\n\n%d-Hangisi pesto sos yapmak i�in kullan�l�r?",sorusoru);
			printf("\n\nA)Fesle�en\t\t\tB)Nane\n\nC)Kekik\t\t\t\tD)Roka\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap A)Fesle�en\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 24:
			system("cls");
			printf("\n\n%d-Hangi kelimenin ilk iki harfi, bulmacalarda s�k�a sorulan 'bir nota' sorusunun cevab� olamaz?",sorusoru);
			printf("\n\nA)Fasik�l\t\t\tB)Dobra\n\nC)Sicim\t\t\t\tD)Melek\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)Melek\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 25:
			system("cls");
			printf("\n\n%d-Bulunulan ortam�n durulup sakinle�ti�ini s�ylemek i�in hangi ifade kullan�l�r?",sorusoru);
			printf("\n\nA)Etraf kahveperon\t\t\tB)Ortam �ayotogar\n\nC)�evre ayrandurak\t\t\tD)Ortal�k s�tliman\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)Ortal�k s�tliman\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 26:
			system("cls");
			printf("\n\n%d-Hangi sporun ad�na �cu eki gelirse, s�zl�kte yer alan ve o sporu \nyapan sporcuyu tan�mlayan bir kelime ortaya ��kmaz?",sorusoru);
			printf("\n\nA)Hentbol\t\t\tB)Voleybol\n\nC)Boks\t\t\t\tD)Judo\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Boks\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 27:
			system("cls");
			printf("\n\n%d-Hangi Arap �lkesi Arap Yar�madas� s�n�rlar� i�inde yer almaz?",sorusoru);
			printf("\n\nA)Umman\t\t\tB)Yemen\n\nC)Katar\t\t\tD)Libya\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)Libya\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 28:
			system("cls");
			printf("\n\n%d-Hangisi, UNESCO �nsanl���n Somut Olmayan K�lt�rel Miras� Temsili Listesi'ne \nge�ti�imiz aylarda oy birli�iyle kabul edilmi�tir?",sorusoru);
			printf("\n\nA)Dede Korkut\t\t\tB)Nasreddin Hoca\n\nC)Kelo�lan\t\t\tD)Karag�z\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap A)Dede Korkut\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 29:
			system("cls");
			printf("\n\n%d-T�m canl� ku� t�rleri aras�nda kendi v�cuduna oranla en b�y�k yumurtay� yapan ku� hangisidir?",sorusoru);
			printf("\n\nA)Flamingo\t\t\tB)Deve Ku�u\n\nC)Kivi\t\t\t\tD)Pelikan\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Kivi\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 30:
			system("cls");
			printf("\n\n%d-Hangisi, di�erleriyle e� anlaml�d�r?",sorusoru);
			printf("\n\nA)�arp�k �urpuk\t\t\tB)Eci� b�c��\n\nC)Kelli felli\t\t\tD)E�ri b��r�\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Kelli felli\n\n\n\n\n\n");
			}
    		getch();	
			break;
		default:
			Sleep(200);
		}//case biti�
	}//for biti�
	printf("Toplam Skorunuz %d.\n",soruarttir);
	getch();
	skoryazdirmaorta(isim,soruarttir);
	cikis();
}//fonk

void kolay(){
	int dizi[5];
	int sorusoru=0;
	int sayac=0;
	int i;
	for( sayac=0;sayac<5;sayac++){
	srand ( time(NULL) );
	
	
	sorunumarasi=rand()%27+1;
	dizi[sayac]=sorunumarasi;

	for (i = 0; i < sayac; i++)
	{
		if (dizi[i]==sorunumarasi){
			sorunumarasi=rand()%27+1;
			i=0;
		}
	}
	sorusoru++;
	switch(sorunumarasi){
		case 1:
			system("cls");
			printf("\n\n%d-�ernobil kazas�n�n ya�and��� �lke?",sorusoru);
			printf("\n\nA)Ukrayna\t\t\tB)Rusya\n\nC)�in\t\t\t\tD)Estonya\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap A)Ukrayna\n\n\n\n\n\n");
			}
			getch();
			break;
		case 2:
			system("cls");
			printf("\n\n%d-A4 ka��d�n�n mm olarak standart boyutlar�?",sorusoru);
			printf("\n\nA)148x210\t\t\tB)210x297\n\nC)297x420\t\t\tD)420x594\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
		 	}
			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)210x297\n\n\n\n\n\n");
			}
			getch();
			break;
		case 3:
			system("cls");
			printf("\n\n%d-Matbaa ve ka��t kullanan ve k�t�phane kuran ilk T�rk devleti?",sorusoru);
			printf("\n\nA)Hazarlar\t\t\tB)G�kt�rkler\n\nC)Uygurlar\t\t\tD)Karahanl�lar\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Uygurlar\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 4:
			system("cls");
			printf("\n\n%d-Osmanl� d�nemindeki ilk resmi gazete?",sorusoru);
			printf("\n\nA)Tasvir-i Efkar\t\t\tB)Takvim-i Vekayi\n\nC)Terc�man-� Ahval\t\t\tD)Terc�man-� Hakikat\n\n");
			if (toupper(getch())=='B'){
				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)Takvim-i Vekayi\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 5:
			system("cls");
			printf("\n\n%d-100TL lik banknotta kimin resmi vard�r?",sorusoru);
			printf("\n\nA)Fatma Aliye\t\t\tB)Yunus Emre\n\nC)Cahit Arf\t\t\tD)Itri\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)Itri\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 6:
			system("cls");
			printf("\n\n%d-Eriyen Saatler adl� tablo kime aittir?",sorusoru);
			printf("\n\nA)Pablo Picasso\t\t\tB)Leanardo Da-Vinci\n\nC)Vincent Van Gogh\t\tD)Salvador Dali\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)Salvador Dali\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 7:
			system("cls");
			printf("\n\n%d-Jean Valjean hangi roman�n ba�kahraman�d�r?",sorusoru);
			printf("\n\nA)D�n���m\t\t\t\tB)Sefiller\n\nC)Y�zy�ll�k Yaln�zl�k\t\t\tD)Gazap �z�mleri\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)Sefiller\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 8:
			system("cls");
			printf("\n\n%d-Gezegenlerden farkl� olarak do�udan bat�ya do�ru d�nen tek gezegen?",sorusoru);
			printf("\n\nA)D�nya\t\t\tB)Sat�rn\n\nC)Ven�s\t\t\tD)Uran�s\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Ven�s\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 9:
			system("cls");
			printf("\n\n%d-Cumhurba�kanl��� forsunda ka� adet y�ld�z vard�r?",sorusoru);
			printf("\n\nA)14\t\t\tB)16\n\nC)18\t\t\tD)Y�ld�z yoktur\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)16\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 10:
			system("cls");
			printf("\n\n%d-Ankaran�n ba�kent oldu�u tarih?",sorusoru);
			printf("\n\nA)1919\t\t\tB)1920\n\nC)1922\t\t\tD)1923\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)1923\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 11:
			system("cls");
			printf("\n\n%d-G�kku�a��n�n tam ortas�ndaki renk?",sorusoru);
			printf("\n\nA)Sar�\t\t\tB)Ye�il\n\nC)Mor\t\t\tD)Mavi\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)Ye�il\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 12:
			system("cls");
			printf("\n\n%d-Osmanl� Devletine �eyiz yoluyla ge�en T�rk beyli�i?",sorusoru);
			printf("\n\nA)Mente�eo�ullar�\t\t\tB)Karamano�ullar�\n\nC)Germiyano�ullar�\t\t\tD)Karesio�ullar�\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Germiyano�ullar�\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 13:
			system("cls");
			printf("\n\n%d-Hangi �lkenin birden fazla ba�kenti vard�r?",sorusoru);
			printf("\n\nA)ABD\t\t\tB)G�ney Afrika\n\nC)Cezayir\t\tD)Tunus\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)G�ney Afrika\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 14:
			system("cls");
			printf("\n\n%d-Roma rakamlar�nda hangi say� yoktur?",sorusoru);
			printf("\n\nA)0\t\t\tB)1000\n\nC)10000\t\t\tD)1000000\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
       		 	printf("\n\nYanl��!!! Do�ru cevap A)0\n\n\n\n\n\n");
       		}
    		getch();
			break;
		case 15:
			system("cls");
			printf("\n\n%d-�ubuklara ge�irilmi� k���k bayraklarla i�aretlenmi� bir parkurda,\n belli kurallara g�re ve zikzaklar �izerek yap�lan kayak yar��� hangisidir?",sorusoru);
			printf("\n\nA)Skeleton\t\t\tB)Pentatlon\n\nC)Slalom\t\t\tD)Maraton\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Slalom\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 16:
			system("cls");
			printf("\n\n%d-Tarih boyunca �ngiltere taht�na hangi adda bir kral ��kmam��t�r?",sorusoru);
			printf("\n\nA)Arthur\t\t\tB)Richard\n\nC)Henry\t\t\t\tD)George\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
       			printf("\n\nYanl��!!! Do�ru cevap A)Arthur\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 17:
			system("cls");
			printf("\n\n%d-T�rkiye'de zeytin, �z�m, ha�ha�, t�t�n, ve incirin en fazla yeti�tirildi�i b�lge hangisidir?",sorusoru);
			printf("\n\nA)�� Anadolu\t\t\tB)Akdeniz\n\nC)Ege\t\t\t\tD)Karadeniz\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Ege\n\n\n\n\n\n");
        	}
    		getch();
			break;
		case 18:
			system("cls");
			printf("\n\n%d-Peter Jackson'�n y�netti�i 'The Hobbit' serisinin son filminin ad� nedir?",sorusoru);
			printf("\n\nA)Beklenmedik Yolculuk\t\t\tB)Smaug'un �orak Topraklar�\n\nC)Be� Ordunun Sava��\t\t\tD)Kral�n D�n���\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Be� Ordunun Sava��\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 19:
			system("cls");
			printf("\n\n%d-Kurtulu� Sava��'nda cephede Mustafa Kemal'in yan�nda onba�� r�tbesiyle \ng�rev alan, 'Mor Salk�ml� Ev' roman�n�n yazar� kimdir?",sorusoru);
			printf("\n\nA)Yakup Kadri Karaosmano�lu\t\t\tB)Halide Edip Ad�var\n\nC)Re�at Nuri G�ntekin\t\t\t\tD)Nezihe Meri�\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)Halide Edip Ad�var\n\n\n\n\n\n");
        	}	
    		getch();
			break;
		case 20:
			system("cls");
			printf("\n\n%d-Hangisi i�in notere gidilir?",sorusoru);
			printf("\n\nA)�kametgah belgesi almak\t\t\tB)Vekalet ��karmak\n\nC)Temiz ka��d� almak\t\t\t\tD)Pasaport yenilemek\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}	
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)Vekalet ��karmak\n\n\n\n\n\n");
        	}	
    		getch();
			break;
		case 21:
			system("cls");
			printf("\n\n%d-Patates cipsi paketleri, i�inde cipslerin taze kalmas� i�in genellikle hangi gazla doldurulur?",sorusoru);
			printf("\n\nA)Oksijen\t\t\tB)Hidrojen\n\nC)Helyum\t\t\tD)Azot\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)Azot\n\n\n\n\n\n");
        	}	
    		getch();
			break;
		case 22:
			system("cls");
			printf("\n\n%d-G�ky�z�n�n en parlak y�ld�z�?",sorusoru);
			printf("\n\nA)Antares\t\t\tB)Vega\n\nC)Sirius\t\t\tD)Rigel\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}	
  			else{
       			printf("\n\nYanl��!!! Do�ru cevap C)S�R�US\n\n\n\n\n\n");
       		}	
    		getch();
			break;
		case 23:
			system("cls");
			printf("\n\n%d-�lkemizde tasarlanan ve �retilen ilk otomobil 'DEVR�M' hangi �ehrimizde �retilmi�tir?",sorusoru);
			printf("\n\nA)Ankara\t\t\tB)Eski�ehir\n\nC)Kayseri\t\t\tD)�orum\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap B)Eski�ehir\n\n\n\n\n\n");
        	}	
    		getch();
			break;	
		case 24:
			system("cls");
			printf("\n\n%d-T�rkiye'nin ilk tropikal meyvesi?",sorusoru);
			printf("\n\nA)Ejder Meyvesi\t\t\tB)Avokado\n\nC)Ananas\t\t\tD)Yaban Mersini\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap A)Ejder Meyvesi\n\n\n\n\n\n");
        	}
    		getch();
			break;	
		case 25:
			system("cls");
			printf("\n\n%d-D�nyada en �ok konu�ulan dil?",sorusoru);
			printf("\n\nA)�ngilizce\t\t\tB)Rus�a\n\nC)Portekizce\t\t\tD)�ince\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)�ince\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 26:
			system("cls");
			printf("\n\n%d-'K�reme' hangisiyle yap�l�r?",sorusoru);
			printf("\n\nA)K�re\t\t\tB)K�rdan\n\nC)K�rk\t\t\tD)K�rek\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap D)K�rek\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 27:
			system("cls");
			printf("\n\n%d-'Beyaz', 'kepekli', 'tam bu�day' gibi �n adlar� olan yiyecek hangisidir?",sorusoru);
			printf("\n\nA)S�tla�\t\t\tB)Kumpir\n\nC)Ekmek\t\t\t\tD)Yaprak sarma\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBR�KLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanl��!!! Do�ru cevap C)Ekmek\n\n\n\n\n\n");
			}
    		getch();	
			break;
		}//case biti�
	}//for biti�
	soruarttir*=2;
	printf("Toplam Skorunuz %d.\n",soruarttir);
	getch();
	skoryazdirmakolay(isim,soruarttir);
	cikis();
}//fonk

void skoryazdirmakolay(char isim1[20],int skor){ //kolay test sonras� en y�ksek skorun tutulmas�n� sa�layan fonksiyon
	float puan;
	char isim2[20];
	FILE *skortablosu;
	system("cls");
	skortablosu=fopen("kolay.txt","r");
	fscanf(skortablosu,"%s%f",&isim2,&puan);
	if (skor>=puan){ 
		puan=skor;
    	skortablosu=fopen("kolay.txt","w");
    	fprintf(skortablosu,"%s\n%.2f",isim1,puan);
    	fclose(skortablosu);
   }
}

void skoryazdirmaorta(char isim1[20],int skor){
	float puan;
	char isim2[20];
	FILE *skortablosu;
	system("cls");
	skortablosu=fopen("orta.txt","r");
	fscanf(skortablosu,"%s%f",&isim2,&puan);
	if (skor>=puan){ 
		puan=skor;
    	skortablosu=fopen("orta.txt","w");
    	fprintf(skortablosu,"%s\n%.2f",isim1,puan);
    	fclose(skortablosu);
   }
}

void skoryazdirmazor(char isim1[20],int skor){
	float puan;
	char isim2[20];
	FILE *skortablosu;
	system("cls");
	skortablosu=fopen("zor.txt","r");
	fscanf(skortablosu,"%s%f",&isim2,&puan);
	if (skor>=puan){ 
		puan=skor;
    	skortablosu=fopen("zor.txt","w");
    	fprintf(skortablosu,"%s\n%.2f",isim1,puan);
    	fclose(skortablosu);
   }
}

void gorunenskorkolay(){
 	char isim3[20];
 	float skor;
 	FILE *skortablosu;
 	system("cls");
 	skortablosu=fopen("kolay.txt","r");
 	fscanf(skortablosu,"%s%f",&isim3,&skor);
 	printf("\n\n\t\t ");
 	printf("\n\n\t\t\t Kolay seviyede, %s adl� oyuncunun en y�ksek skoru %.2f",isim3,skor);
 	printf("\n\n\t\t ");
	fclose(skortablosu);
}

void gorunenskororta(){
	char isim4[20];
	float skor2;
	FILE *skortablosu2;
	skortablosu2=fopen("orta.txt","r");
 	fscanf(skortablosu2,"%s%f",&isim4,&skor2);
 	printf("\n\n\t\t ");
 	printf("\n\n\t\t\t Orta seviyede, %s adl� oyuncunun en y�ksek skoru %.2f",isim4,skor2);
 	printf("\n\n\t\t ");
 	fclose(skortablosu2);
}

void gorunenskorzor(){
	char isim5[20];
	float skor3;
	FILE *skortablosu3;
	skortablosu3=fopen("zor.txt","r");
 	fscanf(skortablosu3,"%s%f",&isim5,&skor3);
 	printf("\n\n\t\t ");
 	printf("\n\n\t\t\t Zor seviyede, %s adl� oyuncunun en y�ksek skoru %.2f",isim5,skor3);
 	printf("\n\n\t\t ");
	fclose(skortablosu3);
}

void cikis(){ //oyun sonunda credit fonksiyonunu �al��t�ran ve sonras�nda da ��k�� de�i�keni alan fonksiyon
	char cikisdegiskeni;
	system("cls");	
	credit();
	cikisdegiskeni=getch();
	switch(cikisdegiskeni){
		case 'm':
			menu();
			break;
		case 'q':
			break;
		default:
			printf("\n\n\t\t\tBilinmeyen Tus");
			Sleep(1000);
			cikis();
	}
}

void credit(){
	system("cls");
	printf("\n\n\n\n\n\n");
	printf("\t\t\t****************************EME�� GE�ENLER********************************\n");
	Sleep(250);
	printf("\t\t\t**************************************************************************\n");
	Sleep(250);
	printf("\t\t\t**************************************************************************\n");
	Sleep(250);
	printf("\t\t\t**************************************************************************\n");
	Sleep(250);
	printf("\t\t\t**************************************************************************\n");
	Sleep(250);
	printf("\t\t\t**************************************************************************\n");
	Sleep(250);
	printf("\t\t\t**********Selin �ABUK********G�k�e �OBAN********Mehmet Ali TONGA**********\n");
	Sleep(250);
	printf("\t\t\t**************************************************************************\n");
	Sleep(250);
	printf("\t\t\t**************************************************************************\n");
	Sleep(250);
	printf("\t\t\t***********191180026**********191180029************201180758**************\n");
	Sleep(250);
	printf("\t\t\t**************************************************************************\n");
	Sleep(250);
	printf("\t\t\t**************************************************************************\n");
	Sleep(250);
	printf("\t\t\t**************************************************************************\n");
	Sleep(250);
	printf("\t\t\t**************************************************************************\n");
	Sleep(250);
	printf("\t\t\t**************************************************************************\n");
	Sleep(250);
	printf("\t\t\t**************************************************************************\n\n");
	Sleep(500);
	printf("\t\t\t******Ana Men�ye D�nmek ��in 'M'ye, ��k�� Yapmak ��in 'Q'ya Bas�n�z.******");
}

int main() {
	setlocale(LC_ALL, "Turkish"); //T�RK�E KARAKTERLER� KULLANMAK ���N
	menu();
}
