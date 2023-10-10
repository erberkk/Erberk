#ifndef EKRAN_H
#define EKRAN_H
#include <iostream>
#include <string>
using namespace std;

class Ekran
{
	public:
		void girisEkrani();
		
		void urunEkrani();
		
		void tedarikciEkrani();
		
		void urunleriGoruntuleEkrani();
		
		void urunEkleEkrani();
		
		void urunSilEkrani();
		
		void urunDuzenleEkrani();
		
		void tedarikciGoruntuleEkrani();
		
		void tedarikciEkleEkrani();
		
		void tedarikciSilEkrani();
		
		void tedarikciDuzenleEkrani();
		
		void adresBilgiEkrani();
		
		int girisEkraniTercih(int tercih);
		int urunEkraniTercih(int tercih);
};
#endif

