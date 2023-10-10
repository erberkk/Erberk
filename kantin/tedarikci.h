#ifndef TEDARIKCI_H
#define TEDARIKCI_H
#include <iostream>
#include <string>
using namespace std;

class Adres {		
    private:
        string sokak;
        string sehir;
        string ulke;

    public:
        explicit Adres(string sokak = " ", string sehir = " ", string ulke = " ") {
            this->sokak = sokak;
            this->sehir = sehir;
            this->ulke = ulke;
        }

        void setSokak(string sokak) {
            this->sokak = sokak;
        }

        void setSehir(string sehir) {
            this->sehir = sehir;
        }

        void setUlke(string ulke) {
            this->ulke = ulke;
        }

        string getSokak() const {
            return sokak;
        }

        string getSehir() const {
            return sehir;
        }

        string getUlke() const {
            return ulke;
        }

        void adresBilgiEkrani();
};

class Tedarikci
{
	private:
		int tedarikciID;
		string tedarikciIsim;
		string tedarikciNO;//telefon numarasi
		string tedarikciMail;
		Adres tedarikciAdres;
		 
	public:
		explicit Tedarikci(int tedarikciID=0, string tedarikciIsim=" ", string tedarikciNO=" ", string tedarikciMail=" ", Adres tedarikciAdres = Adres())
		{
			this->tedarikciAdres = tedarikciAdres;
			settedarikciID(tedarikciID);
			settedarikciIsim(tedarikciIsim);
			settedarikciNO(tedarikciNO);
			settedarikciMail(tedarikciMail);
			
		}
		~Tedarikci();	
		
		void settedarikciID(int id);
		void settedarikciIsim(string isim);
		void settedarikciNO(string no);
		void settedarikciMail(string mail);
		
		int gettedarikciID()const;
		string gettedarikciIsim()const;	
		string gettedarikciNO()const;
		string gettedarikciMail()const;
		
		void tedarikciBilgi();	
		void tedarikciEkle();
		void tedarikciSil();
		void tedarikciDuzenle();
};
#endif
