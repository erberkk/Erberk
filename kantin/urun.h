#ifndef URUN_H
#define URUN_H
#include <iostream>
#include <string>
using namespace std;

class Urun
{
	friend ostream &operator << (ostream& os, const Urun& urun); //output overloading
    friend istream &operator >> (istream& os, Urun& urun); //input overloading
    
    friend void UrunID(Urun urun1);    //friend fonksiyonlari
	friend void UrunIsim(Urun urun1);
	friend void UrunAdet(Urun urun1);
	friend void UrunFiyat(Urun urun1);
	
	    
	private:
		int urunID;
		string urunIsim;
		int urunAdet;
		double urunFiyat;
		static int toplamUrunSayisi; //static
		
		
	public:
		explicit Urun(int urunID=0, string urunIsim=" ", int urunAdet=0, double urunFiyat=0.0);	
		~Urun();
		
		void seturunID(int id);
		void seturunIsim(string isim);
		void seturunAdet(int adet);
		void seturunFiyat(double fiyat); //function overloading
		void seturunFiyat(int fiyat);
		
		int geturunID()const;
		string geturunIsim()const;
		int geturunAdet()const;
		double geturunFiyat();
		
		void urunBilgi();	
		void urunEkle();
		void urunSil();
		void urunDuzenle();	
		
		string gun;
		string ay;
		string yil;
		
        Urun &operator+=(int adetArttir); //operator overloading
        Urun operator++(); //operator overloading
        
        void urunAdetArttir(int ArtisMiktari=1); 
        
        
        
};
#endif
