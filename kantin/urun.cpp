#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include "urun.h"
#include "ekran.h"
using namespace std;
Urun :: Urun(int urunID, string urunIsim, int urunAdet, double urunFiyat)
{
	seturunID(urunID);
	seturunIsim(urunIsim);
	seturunAdet(urunAdet);
	seturunFiyat(urunFiyat);
	toplamUrunSayisi++;
}

int Urun::toplamUrunSayisi = 0;

Urun :: ~Urun()
{
    toplamUrunSayisi--;
}

void Urun::urunAdetArttir(int ArtisMiktari)
{
    int Miktar;
    Miktar=geturunAdet();
    Miktar+=ArtisMiktari;
    seturunAdet(Miktar);
}

Urun &Urun :: operator+=(int adetArttir)
{
    urunAdetArttir(adetArttir);     
	return *this;
}

Urun Urun :: operator++()
{     
	urunAdetArttir();     
	return *this;   
}

void Urun :: seturunID(int id) {
	
	if(urunID >= 0)
    {
    	urunID = id;
	}
	else
	{
		throw invalid_argument("Gecersiz Deger Girdiniz(ID).");
	}
}

void Urun :: seturunIsim(string isim) {
    urunIsim = isim;
}

void Urun :: seturunAdet(int adet) {
	
	if(urunAdet >= 0)
	{
		urunAdet = adet;
	}
	else
	{
		throw invalid_argument("Gecersiz Deger Girdiniz(ADET).");
	}
    
}

void Urun :: seturunFiyat(double fiyat) {
	
	if(urunFiyat >= 0)
	{
		urunFiyat = fiyat;
	}
	else
	{
		throw invalid_argument("Gecersiz Deger Girdiniz(FIYAT).");
	}
    
}

void Urun :: seturunFiyat(int fiyat) {
	
	if(urunFiyat >= 0)
	{
		urunFiyat = fiyat;
	}
	else
	{
		throw invalid_argument("Gecersiz Deger Girdiniz(FIYAT).");
	}
}

int Urun :: geturunID() const {
    return urunID;
}

string Urun :: geturunIsim() const {
    return urunIsim;
}

int Urun :: geturunAdet() const {
    return urunAdet;
}

double Urun :: geturunFiyat() {
	return urunFiyat;
}

void UrunID(Urun urun1)
{
	cout << "Urun ID: " << urun1.geturunID();
}

void UrunIsim(Urun urun1)
{
	cout << "Urun Ismi: " << urun1.geturunIsim();		
}

void UrunAdet(Urun urun1)
{
	cout << "Urun Adeti: " << urun1.geturunAdet();
}

void UrunFiyat(Urun urun1)
{
	cout << "Urun Fiyati: " << urun1.geturunFiyat();
}

void Urun :: urunBilgi() {
	cout << "-------------------------------" << endl;
    cout << "Urun ID: " << urunID << endl;
    cout << "Urun Isim: " << urunIsim << endl;
    cout << "Urun Adet: " << urunAdet << endl;
    cout << "Urun Fiyati: " << urunFiyat << " TL"<< endl;
}

void Urun :: urunEkle()
{

	int id, adet;
    string isim;
    double fiyat;

    cout << "Urun ID giriniz: ";
    cin >> id;
    seturunID(id);

    cout << "Urun Isim giriniz: ";
    cin >> isim;
    seturunIsim(isim);
    
    cout << "Urun Adet giriniz: ";
    cin >> adet;
    seturunAdet(adet);
    
    cout << "Urun Fiyatini giriniz: ";
    cin >> fiyat;
    seturunFiyat(fiyat);
}

void Urun :: urunSil()
{
	cout << "Silmek istediginiz urunun ID numarasini giriniz: " << endl;
	
	
	cout << "Urun basariyla silindi." << endl;
}

void Urun :: urunDuzenle()
{
	

    int secim;
    cout << "Duzenlemek istediginiz ozelligi secin: " << endl;
    cout << "1. Urun ID" << endl;
    cout << "2. Urun Isim" << endl;
    cout << "3. Urun Adet" << endl;
    cout << "4. Urun Fiyat" << endl;
    cin >> secim;

    switch (secim)
    {
        case 1:
        {
            int id;
            cout << "Yeni Urun ID giriniz: ";
            cin >> id;
            seturunID(id);
            break;
        }
        case 2:
        {
            string isim;
            cout << "Yeni Urun Isim giriniz: ";
            cin >> isim;
            seturunIsim(isim);
            break;
        }
        case 3:
        {
            int adet;
            cout << "Yeni Urun Adet giriniz: ";
            cin >> adet;
            seturunAdet(adet);
            break;
        }
        case 4:
        {
            double fiyat;
            cout << "Yeni Urun Fiyat giriniz: ";
            cin >> fiyat;
            seturunFiyat(fiyat);
            break;
        }
        default:
        {
            cout << "Gecersiz secim!" << endl;
            break;
        }
    }
}

ostream &operator<<(ostream& os, const Urun& urun)
{
	os << urun.gun << "/" << urun.ay << "/" << urun.yil << endl;
	return os;
}

istream &operator >>(istream& os, Urun& urun)
{
	os.ignore();
	os >> setw(2) >> urun.gun;
	os.ignore();
	os >> setw(2) >> urun.ay;
	os.ignore();
	os >> setw(4) >> urun.yil;
	
	return os;
}
        
