#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//TÜRKÇE KARAKTERLERÝ KULLANMAK ÝÇÝN
#include <time.h>//random kodunda time null kullanmak için
#include <conio.h>//system("cls") ya da system("pause") kulllanmak için.
#include <ctype.h>//Büyük, küçük harf.

int sayac;
int sorunumarasi=0;
int soruarttir=0;//skor tutma fonksiyonlarýna göndermek amaçlý global aldýk
char isim[20];//ismi alýp skor tutmaya göndermek amaçlý global aldýk.

void baslangic();//menü 2 den sonra kullanýcýdan isim alan ve sonrasýnda da zorlukseviyesi fonksiyonunu çalýþtýran fonksiyon
void gerisayim();//geri sayýmlarýn bir arada çalýþmasýný saðlamak amaçlý
void gerisayim1();
void gerisayim2();
void gerisayim3();
void menu();//oyuna girdiðimizde karþýmýza ilk çýkan menü
void menu2();//ilk menüdeki seçeneklerden birini seçmemizi saðlayan menü
void yardim();//ana menüde 3 e bastýðýmýzda gittiðimiz yardým fonksiyonu
void cikis();//oyun sonunda credit fonksiyonunu çalýþtýran ve sonrasýnda da çýkýþ deðiþkeni alan fonksiyon
void skoryazdirmakolay(char isim1[20],int skor);//kolay test sonrasý en yüksek skorun tutulmasýný saðlayan fonksiyon
void skoryazdirmaorta(char isim1[20],int skor);//orta test sonrasý en yüksek skorun tutulmasýný saðlayan fonksiyon
void skoryazdirmazor(char isim1[20],int skor);//zor test sonrasý en yüksek skorun tutulmasýný saðlayan fonksiyon
void kolay();//zorluk seviyesi seçtikten sonra gidilen kolay sorular fonksiyonu
void orta();//zorluk seviyesi seçtikten sonra gidilen orta sorular fonksiyonu
void zor();//zorluk seviyesi seçtikten sonra gidilen zor sorular fonksiyonu
void zorlukseviyesi();//menü 2 den sonra zorluk seçmenizi saðlayan fonksiyon
void credit();//emeði geçenler kýsmý
void gorunenskorzor();//ilk menüde 2ye bastýðýmýz zaman tutmuþ olduðumuz zor seviyede yüksek skoru gösteren fonksiyon
void gorunenskorkolay();//ilk menüde 2ye bastýðýmýz zaman tutmuþ olduðumuz kolay seviyede yüksek skoru gösteren fonksiyon
void gorunenskororta();//ilk menüde 2ye bastýðýmýz zaman tutmuþ olduðumuz orta seviyede yüksek skoru gösteren fonksiyon

//sorularýn cevabýný alýrken kullanmýþ olduðumuz (toupper(getch())=='A') kodlarýndaki toupper kýsmý harfin büyüklük küçüklük durumunu ihmal eden kod
//getchar kullanmak yerine getch kullanma amacýmýz harfi girdikten sonra 'enter' gerektirmemesi


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

void gerisayim(){ //geri sayýmlarýn bir arada çalýþmasýný saðlamak amaçlý
	gerisayim3();
	gerisayim2();
	gerisayim1();
}

void menu(){ //oyuna girdiðimizde karþýmýza ilk çýkan menü
    system("cls");
    printf("\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\tGenel Kültür Quiz\n\n");
    printf("\n\t\t\t\t--------------------------------------------------");
    printf("\n\t\t\t\t\t Baþlamak için '1' tuþuna basýn.\n");
    printf("\n\t\t\t\t\t Skor tablosu için '2' tuþuna basýn\n");
    printf("\n\t\t\t\t\t Yardým için '3' tuþuna basýn.\n");
    printf("\n\t\t\t\t\t Çýkmak için '4' tuþuna basýn.");
    printf("\n\t\t\t\t--------------------------------------------------\n\n\t\t\t\t");
    menu2();
}

void yardim(){ //ana menüde 3 e bastýðýmýzda gittiðimiz yardým fonksiyonu
	system("cls");
	printf("\n\n\n\t\t\t-----------------------------------------------------------------------\n");
	printf("\n\n\t\t\t   Bu oyun oynamak için çok kolay. Size bazý genel kültür, tarih, dizi");
	printf("\n\n\t\t\t    sorularý sorulacak ve doðru cevap, sunulan dört seçenek arasýndan");
	printf("\n\n\t\t\t    seçilecektir. Skorunuz oyunun sonunda hesaplanacaktýr ve ekranda");
	printf("\n\n\t\t\tgörünecektir. Aldýðýnýz puan verdiðiniz cevabýn doðruluðuna baðlý olarak");
	printf("\n\n\t\t\tdeðiþiklik gösterecektir. Eðer skorunuz, en yüksek skorsa kaydedilecektir.");
	printf("\n\n\t\t\t\t\t\t    ÝYÝ ÞANSLAR :)\n\n");
	printf("\t\t\t-----------------------------------------------------------------------\n\n");
	Sleep(1000);
	printf("\n\n\t\t\t\t   Anamenüye dönmek için herhangi bir tuþa basýnýz.\n\n\t\t\t\t\t\t\t   ");
	getch();
	menu();
}

void menu2(){ //ilk menüdeki seçeneklerden birini seçmemizi saðlayan menü
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
			printf("     Anamenüye dönmek için herhangi bir tuþa basýnýz.");
			getch();//system("pause") ayný
			menu();
			break;
		case 3:
			yardim();
			break;
		case 4:
			break;
		default:
			printf("\n\t\t\t\t\tBilinmeyen tuþ. Yeniden deneyiniz.");
			Sleep (1000);
			menu();
			break;
	}
	
}

void baslangic(){ //menü 2 den sonra kullanýcýdan isim alan ve sonrasýnda da zorlukseviyesi fonksiyonunu çalýþtýran fonksiyon
    system("cls");
    printf("\n\n\n\n\n\n\n\n");
    printf("\n\n\t\t\t\t-----------------------------------------------------");
    printf("\n\n\t\t\t\t\t\tLütfen Adýnýzý Giriniz.\n\n");
    printf("\t\t\t\t-----------------------------------------------------\n\n\t\t\t\t\t\t\t");
    scanf("%s",&isim);
    soruarttir=0;
	zorlukseviyesi();
}

void zorlukseviyesi(){
	system("cls");
	printf("\n\n\n\n\n\n\n\n");
	printf("\n\n\t\t\t\t\t\tZorluk Seviyesi Seçiniz:\n\n\t\t\t\t\tK-Kolay\n\n\t\t\t\t\tO-Orta\n\n\t\t\t\t\tZ-Zor\n\n\t\t\t\t\tA-Anamenü\n");
	printf("\n\t\t\t\t\t\t\t");
	char zorluk;
	zorluk=getch();
	switch(zorluk){
	case 'k':
		printf("\n\n\n\t\t\t\t\t");
		printf("***KOLAY SEVÝYE BAÞLATILIYOR***");
		Sleep(1000);
		printf("\n\n\t\t\t\t\t");
		printf("***********BAÞARILAR***********");
		Sleep(1000);
		gerisayim();
		kolay();
		break;
	case 'o':
		printf("\n\n\n\t\t\t\t\t");
		printf("***ORTA SEVÝYE BAÞLATILIYOR***");
		Sleep(1000);
		printf("\n\n\t\t\t\t\t");
		printf("**********BAÞARILAR***********");
		Sleep(1000);
		gerisayim();
		orta();
		break;
	case 'z':
		printf("\n\n\n\t\t\t\t\t");
		printf("***ZOR SEVÝYE BAÞLATILIYOR***");
		Sleep(1000);
		printf("\n\n\t\t\t\t\t");
		printf("**********BAÞARILAR**********");
		Sleep(1000);
		gerisayim();
		zor();
		break;
	case 'a':
		menu();
		break;
	default:
		printf("\n\n\t\t\t\t\tYanlýþ Tuþa Bastýnýz!!!\n");
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
			printf("\n\n%d-Hangi hayvanlarýn damýzlýk erkek olanlarýnýn adlarý burçlara verilmiþtir?",sorusoru);
			printf("\n\nA)Balýk ve Yengeç\t\t\tB)Koyun ve Sýðýr\n\nC)Aslan ve Akrep\t\t\tD)Zürafa ve Gergedan\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Koyun ve Sýðýr\n\n\n\n\n\n");
			}
			getch();
			break;
		case 2:
			system("cls");
			printf("\n\n%d-Kýsa olan þeyler hangisinin ömrüne benzetilir?",sorusoru);
			printf("\n\nA)Kelebek\t\t\tB)Kaplumbaða\n\nC)Çýngýraklý yýlan\t\tD)Çamur zýpzýpý\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
		 	}
			else{
        		printf("\n\nYanlýþ!!! Doðru cevap A)Kelebek\n\n\n\n\n\n");
			}
			getch();
			break;
		case 3:
			system("cls");
			printf("\n\n%d-Bir yere kalýcý olarak yerleþmeyen insan topluluklarý için kullanýlan ifade hangisidir?",sorusoru);
			printf("\n\nA)Dururbekler\t\t\tB)Konargöçer\n\nC)Ýnerbiner\t\t\tD)Gelirgider\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Konargöçer\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 4:
			system("cls");
			printf("\n\n%d-'Leviathan' adlý eseriyle bilinen 17. Yüzyýl düþünürü kimdir??",sorusoru);
			printf("\n\nA)Jean-Jacques Rousseau\t\t\tB)Karl Marx\n\nC)Adam Smith\t\t\t\tD)Thomas Hobbes\n\n");
			if (toupper(getch())=='D'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Thomas Hobbes\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 5:
			system("cls");
			printf("\n\n%d-3 ayda çýkan bir dergi 60. sayýsýný çýkarýyorsa kaç senedir yayýmlanýyordur?",sorusoru);
			printf("\n\nA)10\t\t\tB)12\n\nC)15\t\t\tD)20\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)15\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 6:
			system("cls");
			printf("\n\n%d-'Çulluk' nedir?",sorusoru);
			printf("\n\nA)Bir tür bohça\t\t\t\tB)Göçmen bir kuþ\n\nC)Bir dikiþ yöntemi\t\t\tD)Yumurtalý bir yemek\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Göçmen bir kuþ\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 7:
			system("cls");
			printf("\n\n%d-Bir dedeyle torununun baþýndan geçen fantastik maceralarý konu edinen, \nbilim kurgu ve komedi türündeki çizgi dizi hangisidir?",sorusoru);
			printf("\n\nA)The Simpsons\t\t\t\tB)Family Guy\n\nC)Rick and Morty\t\t\tD)Sünger Bob\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Rick and Morty\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 8:
			system("cls");
			printf("\n\n%d-Elementleri öðrenmeye çalýþan bir öðrenci hangisini kullanýr?",sorusoru);
			printf("\n\nA)Yaðlý boya tablo\t\t\tB)Çarpým tablosu\n\nC)Periyodik tablo\t\t\tD)Süper Lig puan tablosu\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Periyodik tablo\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 9:
			system("cls");
			printf("\n\n%d-Hangisi 'desteklemek' anlamýnda kullanýlan ifadedir?",sorusoru);
			printf("\n\nA)Sehpa tutmak\t\t\tB)Koltuk çýkmak\n\nC)Masa açmak\t\t\tD)Karyola katmak\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Koltuk çýkmak\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 10:
			system("cls");
			printf("\n\n%d-'Ortanca kardeþ' olan birinin kaç kardeþi vardýr?",sorusoru);
			printf("\n\nA)1\t\t\tB)2\n\nC)3\t\t\tD)5\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)2\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 11:
			system("cls");
			printf("\n\n%d-Türkçe sözlüklerde yer alan 'Þvester' kelimesi ne anlama gelir?",sorusoru);
			printf("\n\nA)Süveter\t\t\tB)Kýz kardeþ\n\nC)Vestiyer\t\t\tD)Erkek kardeþ\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Kýz kardeþ\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 12:
			system("cls");
			printf("\n\n%d-Hangisi, 1994 yapýmý 'Vampirle Görüþme' filminde baþroldeki 3 karizmatik vampiri \ncanlandýran aktörlerden biri deðildir?",sorusoru);
			printf("\n\nA)Tom Cruise\t\t\tB)Brad Pitt\n\nC)Johnny Depp\t\t\tD)Antonio Banderas\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Johnny Depp\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 13:
			system("cls");
			printf("\n\n%d-Araç ruhsatlarý genellikle nereye konur?",sorusoru);
			printf("\n\nA)Þoför koltuðunun güneþliðine\t\t\tB)Bagaja\n\nC)Kaput içine\t\t\t\t\tD)Yedek lastiðin altýna\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap A)Þoför koltuðunun güneþliðine\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 14:
			system("cls");
			printf("\n\n%d-Hangisi Klasik Batý Müziði bestecisidir?",sorusoru);
			printf("\n\nA)Immanuel Kant\t\t\t\tB)Arthur Schopenhauer\n\nC)Frederic Chopin\t\t\tD)Soren Kierkegaard\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
       		 	printf("\n\nYanlýþ!!! Doðru cevap C)Frederic Chopin\n\n\n\n\n\n");
       		}
    		getch();
			break;
		case 15:
			system("cls");
			printf("\n\n%d-Hangisi, Dünya Kupasý'ný hem futbolcu hem de teknik direktörken kazanan üç kiþiden biri deðildir?",sorusoru);
			printf("\n\nA)Didier Deschamps\t\t\tB)Franz Beckenbauer\n\nC)Mario Zagallo\t\t\t\tD)Carlos Alberto Parreira\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Carlos Alberto Parreira\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 16:
			system("cls");
			printf("\n\n%d-Londra merkezli Southbank Centre'ýn 2014 yýlýnda seçtiði 'son 50 yýlýn en güzel 50 aþk þiiri' \narasýnda yer alan 'Severmiþim Meðer' kimin þiirdir?",sorusoru);
			printf("\n\nA)Atilla Ýlhan\t\t\tB)Cemal Süreyya\n\nC)Nazým Hikmet\t\t\tD)Özdemir Asaf\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
       			printf("\n\nYanlýþ!!! Doðru cevap C)Nazým Hikmet\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 17:
			system("cls");
			printf("\n\n%d-'Daily Planet' muhabiri Clark Kent, telefon kulübesine girip, kýlýk deðiþtirdikten sonra hangisi olarak dýþarý çýkar?",sorusoru);
			printf("\n\nA)Batman\t\t\tB)He-Man\n\nC)Süpermen\t\t\tD)Kaptan Maðara Adamý\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Süpermen\n\n\n\n\n\n");
        	}
    		getch();
			break;
		case 18:
			system("cls");
			printf("\n\n%d-Daðýstan, Tataristan ve Çeçenistan hangisine baðlý cumhuriyetlerdir?",sorusoru);
			printf("\n\nA)Çin\t\t\tB)Rusya\n\nC)Ýran\t\t\tD)Moðolistan\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Rusya\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 19:
			system("cls");
			printf("\n\n%d-'3 Idiots', 'PK', 'Dangal' ve geçtiðimiz günlerde vizyona giren 'Hindistan Eþkýyalarý' \nfilmlerinde baþrol oynayan Hint aktör, yönetmen ve yapýmcý kimdir?",sorusoru);
			printf("\n\nA)Raaj Kumar\t\t\tB)Shah Rukh Khan\n\nC)Raj Kapoor\t\t\tD)Aamir Khan\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Aamir Khan\n\n\n\n\n\n");
        	}	
    		getch();
			break;
		case 20:
			system("cls");
			printf("\n\n%d-2009'da Nijerya'da gerçekleþen bir silahlý soyguna karýþtýðý þüphesiyle tutuklanan ve soruþturma \ntamamlanana kadar gözaltýnda tutulan hayvanýn türü nedir?",sorusoru);
			printf("\n\nA)Keçi\t\t\tB)At\n\nC)Yýlan\t\t\tD)Fil\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}	
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap A)Keçi\n\n\n\n\n\n");
        	}	
    		getch();
			break;
		case 21:
			system("cls");
			printf("\n\n%d-'Bostan' kelimesinin Farsça'daki kökeninin anlamý nedir?",sorusoru);
			printf("\n\nA)Güzel koku\t\t\tB)Yeþil vadi\n\nC)Yumuþak toprak\t\tD)Acý patlýcan\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap A)Güzel koku\n\n\n\n\n\n");
        	}	
    		getch();
			break;
		case 22:
			system("cls");
			printf("\n\n%d-Kalahari, Atakama, Gobi ve Taklamakan hangi coðrafi oluþuma örneklerdir?",sorusoru);
			printf("\n\nA)Sýradað\t\t\tB)Çöl\n\nC)Þelale\t\t\tD)Volkanik göl\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}	
  			else{
       			printf("\n\nYanlýþ!!! Doðru cevap B)Çöl\n\n\n\n\n\n");
       		}	
    		getch();
			break;
		case 23:
			system("cls");
			printf("\n\n%d-Hangisi 22 sezondur yayýmlanmakta olan 'South Park' adlý dizinin baþkarekterinden biri deðildir?",sorusoru);
			printf("\n\nA)Eric Cartman\t\t\tB)Kyle Broflovski\n\nC)Stan Marsh\t\t\tD)BoJack Horseman\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)BoJack Horseman\n\n\n\n\n\n");
        	}	
    		getch();
			break;	
		case 24:
			system("cls");
			printf("\n\n%d-Tek bir þirkette en uzun süre çalýþma rekoru ne kadardýr?",sorusoru);
			printf("\n\nA)65 yýl 75 gün\t\t\tB)70 yýl 75 gün\n\nC)75 yýl 75 gün\t\t\tD)80 yýl 75 gün\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)80 yýl 75 gün\n\n\n\n\n\n");
        	}
    		getch();
			break;	
		case 25:
			system("cls");
			printf("\n\n%d-Hangi ünlü filmin senaryosu birçok büyük yapým þirketi tarafýndan, \nbazýlarýnda birden çok olmak üzere, 40'tan fazla kez reddedilmiþtir?",sorusoru);
			printf("\n\nA)Matrix\t\t\t\t\tB)Geleceðe Dönüþ\n\nC)Harry Potter ve Felsefe Taþý\t\t\tD)Terminatör\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Geleceðe Dönüþ\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 26:
			system("cls");
			printf("\n\n%d-'Tersi çýkar' genellikle hangisi için yapýlan bir yorumdur?",sorusoru);
			printf("\n\nA)Þarký sözleri\t\t\tB)Tarih kitaplarý\n\nC)Rüyalar\t\t\tD)Bilimsel deneyler\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Rüyalar\n\n\n\n\n\n");
			}
   			getch();	
			break;
		case 27:
			system("cls");
			printf("\n\n%d-Yýlbaþýnda hangi ülkeye giderseniz, yeni yýla yaz mevsiminde girersiniz?",sorusoru);
			printf("\n\nA)Ýrlanda\t\t\tB)Kanada\n\nC)Rusya\t\t\tD)Brezilya\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Brezilya\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 28:
			system("cls");
			printf("\n\n%d-Çin'de düzenlenen Dünya Kulüpler Þampiyonasý finalinde, rakibini 3-0 yenerek \n3. kez dünya þampiyonu olan kadýn voleybol takýmý hangisidir?",sorusoru);
			printf("\n\nA)Fenerbahçe\t\t\tB)Vakýfbank\n\nC)Galatasaray\t\t\tD)Eczacýbaþý\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
       			printf("\n\nYanlýþ!!! Doðru cevap B)Vakýfbank\n\n\n\n\n\n");
       		}
    		getch();
			break;
		case 29:
			system("cls");
			printf("\n\n%d-Hollanda'da 1 yaþýndayken kaybolan ve 17 yýl sonra bulunup sahibine kavuþan 'Lolipop' adlý hayvan hangisidir?",sorusoru);
			printf("\n\nA)Papaðan\t\t\tB)Köpek\n\nC)Kaplumbaða\t\t\tD)Kedi\n\n");
			if (toupper(getch())=='D'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}	
  			else
       			{printf("\n\nYanlýþ!!! Doðru cevap D)Kedi\n\n\n\n\n\n");}
    		getch();
			break;	
		case 30:
			system("cls");
			printf("\n\n%d-Yumruk attýðý kötü adamlarýn yüzünde kurukafa izi býrakan çizgi roman kahramaný hangisidir?",sorusoru);
			printf("\n\nA)Zorro\t\t\t\tB)Zagor\n\nC)Örümcek Adam\t\t\tD)Kýzýlmaske\n\n");
			if (toupper(getch())=='D'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap D)Kýzýlmaske\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 31:
			system("cls");
			printf("\n\n%d-'Uyuyan Güzel', 'Fýndýkkýran' ve 'Kuðu Gölü' baleleri hangi bestecinin eserleridir?",sorusoru);
			printf("\n\nA)Wagner\t\t\tB)Salieri\n\nC)Handel\t\t\tD)Çaykovski\n\n");
			if (toupper(getch())=='D'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap D)Çaykovski\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 32:
			system("cls");
			printf("\n\n%d-2006'da, dünyanýn en uzun insaný Xi Shun, kollarýný kullanarak hangi türden \niki hayvanýn midesinden plastik maddeler çýkarmýþtýr?",sorusoru);
			printf("\n\nA)Aslan\t\t\t\tB)Yunus\n\nC)Timsah\t\t\tD)Piton\n\n");
			if (toupper(getch())=='B'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap B)Yunus\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 33:
			system("cls");
			printf("\n\n%d-Zeki Müren'in 'Biraz Fernandel, biraz Belmondo' diye tanýmladýðý kiþi hangisidir?",sorusoru);
			printf("\n\nA)Þener Þen\t\t\tB)Cüneyt Arkýn\n\nC)Kemal Sunal\t\t\tD)Tarýk Akan\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap C)Kemal Sunal\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 34:
			system("cls");
			printf("\n\n%d-Hangisi, bazý futbol takýmlarýnýn, taraftarlarý için kullandýklarý bir ifadedir?",sorusoru);
			printf("\n\nA)12. Adam\t\t\tB)Yardýmcý eleman\n\nC)Canlý destek\t\t\tD)Yedek kuvvet\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap A)12. Adam\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 35:
			system("cls");
			printf("\n\n%d-Bir Gün Kaç Saniyedir?",sorusoru);
			printf("\n\nA)86000\t\t\tB)88600\n\nC)86400\t\t\tD)84800\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap C)88400\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 36:
			system("cls");
			printf("\n\n%d-Trafikte hangi araçlarýn arkasýnda 'Dolu' ya da 'Boþ' yazar?",sorusoru);
			printf("\n\nA)Akaryakýt tankeri\t\t\tB)Öðrenci servisi\n\nC)Harfiyat kamyonu\t\t\tD)Yolcu otobüsü\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap A)Akaryakýt tankeri\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 37:
			system("cls");
			printf("\n\n%d-Gövdesi sarý veya kirli sarý; yelesi, kuyruðu ve bacaðýnýn alt kýsmýndaki kýllarý \nkoyu renkte olan atlar içi kullanýlan ifade hangisidir?",sorusoru);
			printf("\n\nA)Doru\t\t\tB)Kula\n\nC)Yaðýz\t\t\tD)Seki\n\n");
			if (toupper(getch())=='B'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap B)Kula \n\n\n\n\n\n");
			}
    		getch();
			break;
		case 38:
			system("cls");
			printf("\n\n%d-Hangi meyvenin 'Vaþington' adýyla satýlan bir çeþidi vardýr?",sorusoru);
			printf("\n\nA)Nar\t\t\t\tB)Elma\n\nC)Portakal\t\t\tD)Ananas\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap C)Portakal\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 39:
			system("cls");
			printf("\n\n%d-Klasik bir çengel bulmacada, bir kutucukta en fazla kaç farklý soru sorulur?",sorusoru);
			printf("\n\nA)1\t\t\tB)2\n\nC)3\t\t\tD)4\n\n");
			if (toupper(getch())=='B'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap B)2");
			}
    		getch();
			break;
		case 40:
			system("cls");
			printf("\n\n%d-Genellikle güneþten korunmak için bir yerin üzerine gerilen, bez veya naylondan yapýlmýþ örtüye ne ad verilir?",sorusoru);
			printf("\n\nA)Tente\t\t\t\tB)Marley\n\nC)Lambri\t\t\tD)Laminant\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap A)Tente\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 41:
			system("cls");
			printf("\n\n%d-'Bezekçi' hangisinin diðer adýdýr?",sorusoru);
			printf("\n\nA)Hattat\t\t\tB)Sarraf\n\nC)Nakkaþ\t\t\tD)Hallaç\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Nakkaþ\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 42:
			system("cls");
			printf("\n\n%d-333'le hangi sayýnýn toplamý 1000 olur?",sorusoru);
			printf("\n\nA)667\t\t\tB)677\n\nC)767\t\t\tD)777\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap A)667\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 43:
			system("cls");
			printf("\n\n%d-Köpeðiniz bir torba mamayý 3 ayda yiyorsa torbasý 75 lira olan mamaya yýllýk ne kadar ödersiniz?",sorusoru);
			printf("\n\nA)250 lira\t\t\tB)300 lira\n\nC)350 lira\t\t\tD)450 lira\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)300 lira\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 44:
			system("cls");
			printf("\n\n%d-Bir Birleþmiþ Milletler kurumu olan 'UNESCO' nun adýnýn açýlýmýnda hangisi yoktur?",sorusoru);
			printf("\n\nA)Eðitim\t\t\tB)Çocuk\n\nC)Kültür\t\t\tD)Bilim\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Çocuk\n\n\n\n\n\n");
			}
    		getch();
			break;		
		case 45:
			system("cls");
			printf("\n\n%d-'Bir varmýþ bir yokmuþ' diyerek anlatýlmaya baþlanan genellikle hangisi olur?",sorusoru);
			printf("\n\nA)Masal\t\t\t\t\tB)Özgeçmiþ\n\nC)Akademin Sunum\t\t\tD)Bilimsel Makale\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap A)Masal\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 46:
			system("cls");
			printf("\n\n%d-Hangi kelime 'kalýnca bükülmüþ ipek iplik' anlamýna gelir?",sorusoru);
			printf("\n\nA)Ýbrik\t\t\tB)Ýlmik\n\nC)Meþin\t\t\tD)Ýbriþim\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Ýbriþim\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 47:
			system("cls");
			printf("\n\n%d-'Pizzaya en yakýþtýrdýðým malzeme ançüezdir' cümlesinde adý geçen 'ançüez' hangisinden yapýlan bir ezme çeþididir?",sorusoru);
			printf("\n\nA)Mantar\t\t\tB)Tavuk\n\nC)Balýk\t\t\t\tD)Mýsýr\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Balýk\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 48:
			system("cls");
			printf("\n\n%d-Yarýþma programlarýnda birbiriyle yarýþan kiþiler, kendilerini tanýttýktan sonra nezaket icabý kime baþarýlar diler?",sorusoru);
			printf("\n\nA)Kameralara\t\t\t\tB)Makyöze\n\nC)Diðer yarýþmacýlara\t\t\tD)Prodüksiyon amirine\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Diðer yarýþmacýlara\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 49:
			system("cls");
			printf("\n\n%d-Kolu ya da bacaðý alçýya alýnan kiþiye arkadaþlarý genellikle hangisini yaparlar?",sorusoru);
			printf("\n\nA)Omuzda taþýrlar\t\t\tB)Alçýsýný imzalarlar\n\nC)Havaya atýp tutarlar\t\t\tD)Saçlarýný boyarlar\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Alçýsýný imzalarlar\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 50:
			system("cls");
			printf("\n\n%d-Gazeteyi iþ bulmak amacýyla satýn alan kiþi, ilk olarak muhtemelen hangisine bakacaktýr?",sorusoru);
			printf("\n\nA)Ýnsan kaynaklarý eki\t\t\tB)Spor eki\n\nC)Magazin eki\t\t\tD)Moda eki\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap A)Ýnsan kaynaklarý eki\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 51:
			system("cls");
			printf("\n\n%d-Hangisi bir çeþit cekettir?",sorusoru);
			printf("\n\nA)Kloþ\t\t\tB)Jüpon\n\nC)Babet\t\t\tD)Blazer\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Blazer\n\n\n\n\n\n");
			}
    		getch();	
			break;
		default:
			Sleep(200);
		}//case bitiþ
	}//for bitiþ
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
			printf("\n\n%d-Hem futbol hem de basketbolda milli takýmda oynayan sporcumuz?",sorusoru);
			printf("\n\nA)Hidayet TÜRKOÐLU\t\t\tB)Can BARTU\n\nC)Þenol GÜNEÞ\t\t\t\tD)Sergen YALÇIN\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Can BARTU\n\n\n\n\n\n");
			}
   			getch();	
			break;
		case 2:
			system("cls");
			printf("\n\n%d-Erkeði doðum yapabilen tek hayvan?",sorusoru);
			printf("\n\nA)Salyangoz\t\t\tB)Denizanasý\n\nC)Denizatý\t\t\tD)Kaplumbaða\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Denizatý\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 3:
			system("cls");
			printf("\n\n%d-Dünyada insan ölümüne en çok neden olan hayvan?",sorusoru);
			printf("\n\nA)Kurt\t\t\tB)Ayý\n\nC)Kene\t\t\tD)Sivrisinek\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
       			printf("\n\nYanlýþ!!! Doðru cevap D)Sivrisinek\n\n\n\n\n\n");
       		}
    		getch();
			break;
		case 4:
			system("cls");
			printf("\n\n%d-Ülkemizde en çok bulunan aðaç türü?",sorusoru);
			printf("\n\nA)Meþe\t\t\tB)Söðüt\n\nC)Çýnar\t\t\tD)Ladin\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}	
  			else
       			{printf("\n\nYanlýþ!!! Doðru cevap A)Meþe\n\n\n\n\n\n");}
    		getch();
			break;	
		case 5:
			system("cls");
			printf("\n\n%d-Pirelerden bulaþan ve geçmiþte birçok insaný topluca öldüren bulaþýcý hastalýk?",sorusoru);
			printf("\n\nA)Ebola\t\t\tB)Korona\n\nC)Veba\t\t\tD)HIV\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap C)Veba\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 6:
			system("cls");
			printf("\n\n%d-Tsunami Felaketinde En Fazla Zarar Gören Güney Asya Ülkesi Aþaðýdakilerden Hangisidir?",sorusoru);
			printf("\n\nA)Endonezya\t\t\tB)Srilanka\n\nC)Tayland\t\t\tD)Hindistan\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap A)Endonezya\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 7:
			system("cls");
			printf("\n\n%d-2003 Yýlýnda Euro Vizyon Þarký Yarýþmasýnda Ülkemizi Temsil Eden ve Yarýþmada Birinci Gelen Sanatçýmýz Kimdir?",sorusoru);
			printf("\n\nA)Grup Athena\t\t\tB)Sertap Erener\n\nC)Þebnem Paker\t\t\tD)Manga\n\n");
			if (toupper(getch())=='B'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap B)Sertap Erener\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 8:
			system("cls");
			printf("\n\n%d-Mustafa Kemal Atatürk’ün Nüfusa Kayýtlý Olduðu Ýl Hangisidir?",sorusoru);
			printf("\n\nA)Bursa\t\t\tB)Ankara\n\nC)Ýstanbul\t\tD)Gaziantep\n\n");
			if (toupper(getch())=='D'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap D)Gaziantep\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 9:
			system("cls");
			printf("\n\n%d-Aþaðýdakilerden Hangisi Dünya Saðlýk Örgütünün Kýsaltýlmýþ Ýsmidir?",sorusoru);
			printf("\n\nA)UHW\t\t\tB)UNICEF\n\nC)WHO\t\t\tD)NATO\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap C)WHO\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 10:
			system("cls");
			printf("\n\n%d-Bir Gün Kaç Saniyedir?",sorusoru);
			printf("\n\nA)86000\t\t\tB)88600\n\nC)86400\t\t\tD)84800\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap C)88400\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 11:
			system("cls");
			printf("\n\n%d-Bir Sebepten Dolayý Tek Kulaðýna Küpe Takan Osmanlý Padiþahý Kimdir?",sorusoru);
			printf("\n\nA)Kanuni Sultan Süleyman\t\t\tB)Yavuz Sultan Selim\n\nC)Orhan Bey\t\t\t\t\tD)Fatih Sultan Selim\n\n");
			if (toupper(getch())=='B'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap B)Yavuz Sultan Selim\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 12:
			system("cls");
			printf("\n\n%d-Aspirinin Hammaddesi Nedir?",sorusoru);
			printf("\n\nA)Söðüt\t\t\tB)Köknar\n\nC)Kavak\t\t\tD)Meþe\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap A)Söðüt \n\n\n\n\n\n");
			}
    		getch();
			break;
		case 13:
			system("cls");
			printf("\n\n%d-Hangisi Ýskandinav ülkesi deðildir?",sorusoru);
			printf("\n\nA)Danimarka\t\t\tB)Ýsveç\n\nC)Norveç\t\t\tD)Finlandiya\n\n");
			if (toupper(getch())=='D'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap D)Finlandiya\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 14:
			system("cls");
			printf("\n\n%d-Hangisi bir renk ismi deðildir?",sorusoru);
			printf("\n\nA)Yanan konyak alevi\t\t\tB)Sarhoþ depo pembesi\n\nC)Hýzlý maymun kuyruðu\t\t\tD)Drake'in boynu\n\n");
			if (toupper(getch())=='C'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap C)Hýzlý maymun kuyruðu\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 15:
			system("cls");
			printf("\n\n%d-Bir dönem katýldýklarý güzellik yarýþmalarýnda taç giymeye hak kazanan bu \ngüzellerden hangisinin tacý geri 'alýnmamýþtýr'?",sorusoru);
			printf("\n\nA)Aydan Þener\t\t\tB)Hülya Avþar\n\nC)Itýr Esen\t\t\tD)Sibel Turnagöl\n\n");
			if (toupper(getch())=='A'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
   			}
  			else{
	  			printf("\n\nYanlýþ!!! Doðru cevap A)Aydan Þener\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 16:
			system("cls");
			printf("\n\n%d-Mustafa Kemal Atatürk resmi kayýtlara göre toplam kaç kitap okumuþtur?",sorusoru);
			printf("\n\nA)1997\t\t\tB)2997\n\nC)3997\t\t\tD)4997\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)3997\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 17:
			system("cls");
			printf("\n\n%d-PUBG Mobile'ýn oynanan ilk haritasý hangisidir?",sorusoru);
			printf("\n\nA)Sanhok\t\t\tB)Miramar\n\nC)Vikendi\t\t\tD)Erangel\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Erangel\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 18:
			system("cls");
			printf("\n\n%d-FIFA 19'un kapak fotoðrafýnda hangi oyuncu vardýr?",sorusoru);
			printf("\n\nA)Kylian Mbappe\t\t\tB)Eden Hazard\n\nC)Cristiano Ronaldo\t\tD)Sabri Sarýoðlu\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Cristiano Ronaldo\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 19:
			system("cls");
			printf("\n\n%d-Süleyman Çakýr Kurtlar Vadisi'nde kaçýncý bölümde ölmüþtür?",sorusoru);
			printf("\n\nA)42\t\t\tB)43\n\nC)44\t\t\tD)45\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)45\n\n\n\n\n\n");
			}
    		getch();
			break;		
		case 20:
			system("cls");
			printf("\n\n%d-Ali, Kuzey Güney dizisinde kaçýncý bölümde ölmüþtür?",sorusoru);
			printf("\n\nA)40\t\t\tB)42\n\nC)45\t\t\tD)50\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap A)40\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 21:
			system("cls");
			printf("\n\n%d-Pisa Kulesi hangi yöne doðru eðilmektedir?",sorusoru);
			printf("\n\nA)Kuzey\t\t\tB)Güney\n\nC)Doðu\t\t\tD)Batý\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Güney\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 22:
			system("cls");
			printf("\n\n%d-Gulyabani hangi filmde yer almaktaydý?",sorusoru);
			printf("\n\nA)Tosun Paþa\t\t\tB)Süt Kardeþler\n\nC)Þabanoðlu Þaban\t\tD)Hababam Sýnýfý\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Süt Kardeþler\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 23:
			system("cls");
			printf("\n\n%d-Hangisi pesto sos yapmak için kullanýlýr?",sorusoru);
			printf("\n\nA)Fesleðen\t\t\tB)Nane\n\nC)Kekik\t\t\t\tD)Roka\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap A)Fesleðen\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 24:
			system("cls");
			printf("\n\n%d-Hangi kelimenin ilk iki harfi, bulmacalarda sýkça sorulan 'bir nota' sorusunun cevabý olamaz?",sorusoru);
			printf("\n\nA)Fasikül\t\t\tB)Dobra\n\nC)Sicim\t\t\t\tD)Melek\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Melek\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 25:
			system("cls");
			printf("\n\n%d-Bulunulan ortamýn durulup sakinleþtiðini söylemek için hangi ifade kullanýlýr?",sorusoru);
			printf("\n\nA)Etraf kahveperon\t\t\tB)Ortam çayotogar\n\nC)Çevre ayrandurak\t\t\tD)Ortalýk sütliman\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Ortalýk sütliman\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 26:
			system("cls");
			printf("\n\n%d-Hangi sporun adýna –cu eki gelirse, sözlükte yer alan ve o sporu \nyapan sporcuyu tanýmlayan bir kelime ortaya çýkmaz?",sorusoru);
			printf("\n\nA)Hentbol\t\t\tB)Voleybol\n\nC)Boks\t\t\t\tD)Judo\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Boks\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 27:
			system("cls");
			printf("\n\n%d-Hangi Arap ülkesi Arap Yarýmadasý sýnýrlarý içinde yer almaz?",sorusoru);
			printf("\n\nA)Umman\t\t\tB)Yemen\n\nC)Katar\t\t\tD)Libya\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Libya\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 28:
			system("cls");
			printf("\n\n%d-Hangisi, UNESCO Ýnsanlýðýn Somut Olmayan Kültürel Mirasý Temsili Listesi'ne \ngeçtiðimiz aylarda oy birliðiyle kabul edilmiþtir?",sorusoru);
			printf("\n\nA)Dede Korkut\t\t\tB)Nasreddin Hoca\n\nC)Keloðlan\t\t\tD)Karagöz\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap A)Dede Korkut\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 29:
			system("cls");
			printf("\n\n%d-Tüm canlý kuþ türleri arasýnda kendi vücuduna oranla en büyük yumurtayý yapan kuþ hangisidir?",sorusoru);
			printf("\n\nA)Flamingo\t\t\tB)Deve Kuþu\n\nC)Kivi\t\t\t\tD)Pelikan\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Kivi\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 30:
			system("cls");
			printf("\n\n%d-Hangisi, diðerleriyle eþ anlamlýdýr?",sorusoru);
			printf("\n\nA)Çarpýk çurpuk\t\t\tB)Eciþ bücüþ\n\nC)Kelli felli\t\t\tD)Eðri büðrü\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Kelli felli\n\n\n\n\n\n");
			}
    		getch();	
			break;
		default:
			Sleep(200);
		}//case bitiþ
	}//for bitiþ
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
			printf("\n\n%d-Çernobil kazasýnýn yaþandýðý ülke?",sorusoru);
			printf("\n\nA)Ukrayna\t\t\tB)Rusya\n\nC)Çin\t\t\t\tD)Estonya\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap A)Ukrayna\n\n\n\n\n\n");
			}
			getch();
			break;
		case 2:
			system("cls");
			printf("\n\n%d-A4 kaðýdýnýn mm olarak standart boyutlarý?",sorusoru);
			printf("\n\nA)148x210\t\t\tB)210x297\n\nC)297x420\t\t\tD)420x594\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
   				soruarttir+=10;
		 	}
			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)210x297\n\n\n\n\n\n");
			}
			getch();
			break;
		case 3:
			system("cls");
			printf("\n\n%d-Matbaa ve kaðýt kullanan ve kütüphane kuran ilk Türk devleti?",sorusoru);
			printf("\n\nA)Hazarlar\t\t\tB)Göktürkler\n\nC)Uygurlar\t\t\tD)Karahanlýlar\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Uygurlar\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 4:
			system("cls");
			printf("\n\n%d-Osmanlý dönemindeki ilk resmi gazete?",sorusoru);
			printf("\n\nA)Tasvir-i Efkar\t\t\tB)Takvim-i Vekayi\n\nC)Tercüman-ý Ahval\t\t\tD)Tercüman-ý Hakikat\n\n");
			if (toupper(getch())=='B'){
				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Takvim-i Vekayi\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 5:
			system("cls");
			printf("\n\n%d-100TL lik banknotta kimin resmi vardýr?",sorusoru);
			printf("\n\nA)Fatma Aliye\t\t\tB)Yunus Emre\n\nC)Cahit Arf\t\t\tD)Itri\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Itri\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 6:
			system("cls");
			printf("\n\n%d-Eriyen Saatler adlý tablo kime aittir?",sorusoru);
			printf("\n\nA)Pablo Picasso\t\t\tB)Leanardo Da-Vinci\n\nC)Vincent Van Gogh\t\tD)Salvador Dali\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Salvador Dali\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 7:
			system("cls");
			printf("\n\n%d-Jean Valjean hangi romanýn baþkahramanýdýr?",sorusoru);
			printf("\n\nA)Dönüþüm\t\t\t\tB)Sefiller\n\nC)Yüzyýllýk Yalnýzlýk\t\t\tD)Gazap Üzümleri\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Sefiller\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 8:
			system("cls");
			printf("\n\n%d-Gezegenlerden farklý olarak doðudan batýya doðru dönen tek gezegen?",sorusoru);
			printf("\n\nA)Dünya\t\t\tB)Satürn\n\nC)Venüs\t\t\tD)Uranüs\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Venüs\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 9:
			system("cls");
			printf("\n\n%d-Cumhurbaþkanlýðý forsunda kaç adet yýldýz vardýr?",sorusoru);
			printf("\n\nA)14\t\t\tB)16\n\nC)18\t\t\tD)Yýldýz yoktur\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)16\n\n\n\n\n\n");
			}
    		getch();	
			break;	
		case 10:
			system("cls");
			printf("\n\n%d-Ankaranýn baþkent olduðu tarih?",sorusoru);
			printf("\n\nA)1919\t\t\tB)1920\n\nC)1922\t\t\tD)1923\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)1923\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 11:
			system("cls");
			printf("\n\n%d-Gökkuþaðýnýn tam ortasýndaki renk?",sorusoru);
			printf("\n\nA)Sarý\t\t\tB)Yeþil\n\nC)Mor\t\t\tD)Mavi\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Yeþil\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 12:
			system("cls");
			printf("\n\n%d-Osmanlý Devletine çeyiz yoluyla geçen Türk beyliði?",sorusoru);
			printf("\n\nA)Menteþeoðullarý\t\t\tB)Karamanoðullarý\n\nC)Germiyanoðullarý\t\t\tD)Karesioðullarý\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Germiyanoðullarý\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 13:
			system("cls");
			printf("\n\n%d-Hangi ülkenin birden fazla baþkenti vardýr?",sorusoru);
			printf("\n\nA)ABD\t\t\tB)Güney Afrika\n\nC)Cezayir\t\tD)Tunus\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Güney Afrika\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 14:
			system("cls");
			printf("\n\n%d-Roma rakamlarýnda hangi sayý yoktur?",sorusoru);
			printf("\n\nA)0\t\t\tB)1000\n\nC)10000\t\t\tD)1000000\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
       		 	printf("\n\nYanlýþ!!! Doðru cevap A)0\n\n\n\n\n\n");
       		}
    		getch();
			break;
		case 15:
			system("cls");
			printf("\n\n%d-Çubuklara geçirilmiþ küçük bayraklarla iþaretlenmiþ bir parkurda,\n belli kurallara göre ve zikzaklar çizerek yapýlan kayak yarýþý hangisidir?",sorusoru);
			printf("\n\nA)Skeleton\t\t\tB)Pentatlon\n\nC)Slalom\t\t\tD)Maraton\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Slalom\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 16:
			system("cls");
			printf("\n\n%d-Tarih boyunca Ýngiltere tahtýna hangi adda bir kral çýkmamýþtýr?",sorusoru);
			printf("\n\nA)Arthur\t\t\tB)Richard\n\nC)Henry\t\t\t\tD)George\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
       			printf("\n\nYanlýþ!!! Doðru cevap A)Arthur\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 17:
			system("cls");
			printf("\n\n%d-Türkiye'de zeytin, üzüm, haþhaþ, tütün, ve incirin en fazla yetiþtirildiði bölge hangisidir?",sorusoru);
			printf("\n\nA)Ýç Anadolu\t\t\tB)Akdeniz\n\nC)Ege\t\t\t\tD)Karadeniz\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Ege\n\n\n\n\n\n");
        	}
    		getch();
			break;
		case 18:
			system("cls");
			printf("\n\n%d-Peter Jackson'ýn yönettiði 'The Hobbit' serisinin son filminin adý nedir?",sorusoru);
			printf("\n\nA)Beklenmedik Yolculuk\t\t\tB)Smaug'un Çorak Topraklarý\n\nC)Beþ Ordunun Savaþý\t\t\tD)Kralýn Dönüþü\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Beþ Ordunun Savaþý\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 19:
			system("cls");
			printf("\n\n%d-Kurtuluþ Savaþý'nda cephede Mustafa Kemal'in yanýnda onbaþý rütbesiyle \ngörev alan, 'Mor Salkýmlý Ev' romanýnýn yazarý kimdir?",sorusoru);
			printf("\n\nA)Yakup Kadri Karaosmanoðlu\t\t\tB)Halide Edip Adývar\n\nC)Reþat Nuri Güntekin\t\t\t\tD)Nezihe Meriç\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Halide Edip Adývar\n\n\n\n\n\n");
        	}	
    		getch();
			break;
		case 20:
			system("cls");
			printf("\n\n%d-Hangisi için notere gidilir?",sorusoru);
			printf("\n\nA)Ýkametgah belgesi almak\t\t\tB)Vekalet çýkarmak\n\nC)Temiz kaðýdý almak\t\t\t\tD)Pasaport yenilemek\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}	
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Vekalet çýkarmak\n\n\n\n\n\n");
        	}	
    		getch();
			break;
		case 21:
			system("cls");
			printf("\n\n%d-Patates cipsi paketleri, içinde cipslerin taze kalmasý için genellikle hangi gazla doldurulur?",sorusoru);
			printf("\n\nA)Oksijen\t\t\tB)Hidrojen\n\nC)Helyum\t\t\tD)Azot\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Azot\n\n\n\n\n\n");
        	}	
    		getch();
			break;
		case 22:
			system("cls");
			printf("\n\n%d-Gökyüzünün en parlak yýldýzý?",sorusoru);
			printf("\n\nA)Antares\t\t\tB)Vega\n\nC)Sirius\t\t\tD)Rigel\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}	
  			else{
       			printf("\n\nYanlýþ!!! Doðru cevap C)SÝRÝUS\n\n\n\n\n\n");
       		}	
    		getch();
			break;
		case 23:
			system("cls");
			printf("\n\n%d-Ülkemizde tasarlanan ve üretilen ilk otomobil 'DEVRÝM' hangi þehrimizde üretilmiþtir?",sorusoru);
			printf("\n\nA)Ankara\t\t\tB)Eskiþehir\n\nC)Kayseri\t\t\tD)Çorum\n\n");
			if (toupper(getch())=='B'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap B)Eskiþehir\n\n\n\n\n\n");
        	}	
    		getch();
			break;	
		case 24:
			system("cls");
			printf("\n\n%d-Türkiye'nin ilk tropikal meyvesi?",sorusoru);
			printf("\n\nA)Ejder Meyvesi\t\t\tB)Avokado\n\nC)Ananas\t\t\tD)Yaban Mersini\n\n");
			if (toupper(getch())=='A'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap A)Ejder Meyvesi\n\n\n\n\n\n");
        	}
    		getch();
			break;	
		case 25:
			system("cls");
			printf("\n\n%d-Dünyada en çok konuþulan dil?",sorusoru);
			printf("\n\nA)Ýngilizce\t\t\tB)Rusça\n\nC)Portekizce\t\t\tD)Çince\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Çince\n\n\n\n\n\n");
			}
    		getch();
			break;
		case 26:
			system("cls");
			printf("\n\n%d-'Küreme' hangisiyle yapýlýr?",sorusoru);
			printf("\n\nA)Küre\t\t\tB)Kürdan\n\nC)Kürk\t\t\tD)Kürek\n\n");
			if (toupper(getch())=='D'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap D)Kürek\n\n\n\n\n\n");
			}
    		getch();	
			break;
		case 27:
			system("cls");
			printf("\n\n%d-'Beyaz', 'kepekli', 'tam buðday' gibi ön adlarý olan yiyecek hangisidir?",sorusoru);
			printf("\n\nA)Sütlaç\t\t\tB)Kumpir\n\nC)Ekmek\t\t\t\tD)Yaprak sarma\n\n");
			if (toupper(getch())=='C'){
   				printf("\n\n\nTEBRÝKLER %s !!!\n\n\n\n\n\n",isim);
				soruarttir+=10;
			}
  			else{
        		printf("\n\nYanlýþ!!! Doðru cevap C)Ekmek\n\n\n\n\n\n");
			}
    		getch();	
			break;
		}//case bitiþ
	}//for bitiþ
	soruarttir*=2;
	printf("Toplam Skorunuz %d.\n",soruarttir);
	getch();
	skoryazdirmakolay(isim,soruarttir);
	cikis();
}//fonk

void skoryazdirmakolay(char isim1[20],int skor){ //kolay test sonrasý en yüksek skorun tutulmasýný saðlayan fonksiyon
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
 	printf("\n\n\t\t\t Kolay seviyede, %s adlý oyuncunun en yüksek skoru %.2f",isim3,skor);
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
 	printf("\n\n\t\t\t Orta seviyede, %s adlý oyuncunun en yüksek skoru %.2f",isim4,skor2);
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
 	printf("\n\n\t\t\t Zor seviyede, %s adlý oyuncunun en yüksek skoru %.2f",isim5,skor3);
 	printf("\n\n\t\t ");
	fclose(skortablosu3);
}

void cikis(){ //oyun sonunda credit fonksiyonunu çalýþtýran ve sonrasýnda da çýkýþ deðiþkeni alan fonksiyon
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
	printf("\t\t\t****************************EMEÐÝ GEÇENLER********************************\n");
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
	printf("\t\t\t**********Selin ÇABUK********Gökçe ÇOBAN********Mehmet Ali TONGA**********\n");
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
	printf("\t\t\t******Ana Menüye Dönmek Ýçin 'M'ye, Çýkýþ Yapmak Ýçin 'Q'ya Basýnýz.******");
}

int main() {
	setlocale(LC_ALL, "Turkish"); //TÜRKÇE KARAKTERLERÝ KULLANMAK ÝÇÝN
	menu();
}
