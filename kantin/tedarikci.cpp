#include <iostream>
#include <string>
#include "tedarikci.h"


Tedarikci :: ~Tedarikci()
{
	//destructor
}
void Tedarikci :: settedarikciID(int id)
{
    tedarikciID = id;
}

void Tedarikci :: settedarikciIsim(string isim)
{
    tedarikciIsim = isim;
}

void Tedarikci :: settedarikciNO(string no)
{
	tedarikciNO = no;
}

void Tedarikci :: settedarikciMail(string mail)
{
	tedarikciMail = mail;
}
int Tedarikci :: gettedarikciID() const
{
    return tedarikciID;
}

string Tedarikci :: gettedarikciIsim() const
{
    return tedarikciIsim;
}

string Tedarikci :: gettedarikciNO() const
{
	return tedarikciNO;
}

string Tedarikci :: gettedarikciMail() const
{
	return tedarikciMail;
}
void Tedarikci :: tedarikciBilgi()
{
	cout << "-------------------------------" << endl;
    cout << "Tedarikci ID: " << tedarikciID << endl;
    cout << "Tedarikci Isim: " << tedarikciIsim << endl;
    cout << "Tedarikci NO: " << tedarikciNO << endl;
    cout << "Tedarikci Mail: " << tedarikciMail << endl;
}

void tedarikciEkle()
{
	cout << "Eklemek istediginiz tedarikcinin ID numarasini giriniz: " << endl;
	
	cout << "Eklemek istediginiz tedarikcinin ismini giriniz: " << endl;
	
	cout << "Eklemek istediginiz tedarikcinin adet miktarini giriniz: " << endl;
	
	cout << "Eklemek istediginiz tedarikcinin fiyatini giriniz: " << endl;
	
	
	cout << "Tedarikci basariyla olusturuldu." << endl;
}
void tedarikciSil()
{
	cout << "Silmek istediginiz tedarikcinin ID numarasini giriniz: " << endl;
	
	
	cout << "Tedarikci basariyla silindi." << endl;
}
void tedarikciDuzenle()
{
	cout << "Duzenlemek istediginiz tedarikcinin yeni ID numarasini giriniz: " << endl;
	
	cout << "Duzenlemek istediginiz tedarikcinin yeni ismini giriniz: " << endl;
	
	cout << "Duzenlemek istediginiz tedarikcinin yeni adet miktarini giriniz: " << endl;
	
	cout << "Duzenlemek istediginiz tedarikcinin yeni fiyatini giriniz: " << endl;
	
	
	cout << "Tedarikci basariyla duzenlendi." << endl;
}


