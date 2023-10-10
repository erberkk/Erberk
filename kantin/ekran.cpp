#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "ekran.h"
#include "urun.h"
#include "tedarikci.h"
using namespace std;

Urun u;
Urun u1;
Urun u2;
Urun u3;
Urun u4;
Urun u5;

Tedarikci t;
Tedarikci t1;
Tedarikci t2;
Tedarikci t3;
Tedarikci t4;
Tedarikci t5;

Adres a1;
Adres a2;

void Ekran :: girisEkrani()
{
	int tercih;
	cout << "				      Kantin Yonetim Sistemine Hosgeldiniz :)" << endl;
	cout << " " << endl;
	cout << "Lutfen yapmak istediginiz islemi seciniz: " << endl;
	cout<<"|1- Urun Ekrani		 "<< endl;
	cout<<"|2- Tedarikci Ekrani " << endl;
	cout<<"|3- Cikis 			" << endl;
	cout << " " << endl;

	cin>> tercih;
system("cls");
	girisEkraniTercih(tercih);
} 

int Ekran :: girisEkraniTercih(int tercih){
    switch(tercih){
        case 1:
        	urunEkrani();
        break;
        
        case 2:
        	tedarikciEkrani();
        break;

        case 3:
        	return 0;
        break;
        
        default:
        	girisEkrani();
        break;
	}
}

void Ekran :: urunEkrani()
{
	int tercih;
	cout<<"				      Urun Ekranina Hosgeldiniz"<<endl;
	cout<<" "<<endl;
	cout << "Lutfen yapmak istediginiz islemi seciniz: " << endl;
	cout<<"|1- Urunleri Goruntule"<<endl;
	cout<<"|2- Urun Ekle"<<endl;
	cout<<"|3- Urun Sil"<<endl;
	cout<<"|4- Urun Duzenle"<<endl;
	cout<<"|5- Giris Erkanina Don"<<endl;
	cout << " " << endl;
	cin>> tercih;
system("cls");
	switch (tercih){
 	   case 1:
 	      	urunleriGoruntuleEkrani();
  	  break;
     
  	  case 2:
  	  		urunEkleEkrani();
   	   break;
    
    	case 3:
  	  		urunSilEkrani();
  	    break;
    
    	case 4:
        	urunDuzenleEkrani();
    	break;
    
    	case 5:
    		girisEkrani();
    	break;

		default:
			girisEkrani();
		break;	
    }
}

void Ekran :: tedarikciEkrani()
{
	int tercih;
	cout<<"				      Tedarikci Ekranina Hosgeldiniz"<<endl;
	cout<<" "<<endl;
	cout << "Lutfen yapmak istediginiz islemi seciniz: " << endl;
	cout<<"|1- Tedarikcileri Goruntule"<<endl;
	cout<<"|2- Tedarikci Ekle"<<endl;
	cout<<"|3- Tedarikci Sil"<<endl;
	cout<<"|4- Tedarikci Duzenle"<<endl;
	cout<<"|5- Tedarikci Adres Biglileri"<<endl;
	cout<<"|6- Giris Erkanina Don"<<endl;
	cout << " " << endl;
	cin>> tercih;
system("cls");
	switch (tercih){
    	case 1:
  	     	tedarikciGoruntuleEkrani();
 	    	break;
 	    
  	    case 2:
 	   	    tedarikciEkleEkrani();
 	    	break;
    
  	    case 3:
    		tedarikciSilEkrani();
 	    	break;
    
 	   case 4:
 	       tedarikciDuzenleEkrani();
 	   		break;
    
  	    case 5:
  	  		adresBilgiEkrani();
  	  		break;
		case 6:
			girisEkrani();
			break;
		default:
			girisEkrani();
			break;	
    }
}

void Ekran :: urunleriGoruntuleEkrani()
{	
	
	ifstream dosyaOku("urunlerD.txt");
	string satir = "";    
	if ( dosyaOku.is_open() )
	{ 
	     
	while (getline(dosyaOku, satir))
	
	{       
	
	cout << satir << endl;   
	  
	}      
	
	dosyaOku.close();   
	
	}
   
}
	
	
		
void Ekran :: urunEkleEkrani()
{
	ofstream dosyaYaz;
	dosyaYaz.open("urunlerD.txt", ios::app); // ios::app dosyanin sonuna ekleme yapmak icin

    if (!dosyaYaz.is_open()) {
        cerr << "Dosya acilamadi!(ofstream)" << endl;
        
        return;
    }
    
    ifstream dosya;
	dosya.open("urunlerD.txt");
	
    if (!dosya.is_open()) {
        cerr << "Dosya acilamadi!(ifstream)" << endl;
        return;
    }

    string satir;
    int id;
	string isim;
	int adet;
    double fiyat;
    
    cout << "Yeni Urun Icin ID: " <<endl;
    cin >> id;
    cout << "Yeni Urun Icin Isim: "<<endl;
    cin.ignore();
    getline(cin,isim);
    cout <<"Yeni Urun Icin Adet: "<<endl;
    cin.ignore();
    cin >> adet;
    cout<<"Yeni Urun Icin Fiyat: "<<endl;
    cin.ignore();
    cin>>fiyat;
    
    stringstream ss3(satir);
    u.seturunID(id);
    u.seturunIsim(isim);
    u.seturunAdet(adet);
    u.seturunFiyat(fiyat);
    ss3 << u.geturunID() << u.geturunIsim() << u.geturunAdet() << u.geturunFiyat();
    dosyaYaz << u.geturunID() << "				" << u.geturunIsim() << "				" << u.geturunAdet() << "				" << u.geturunFiyat() << endl;
        
    while (getline(dosya, satir)) {
    	  
        stringstream ss1(satir);
        
        u1.seturunID(1);
        u1.seturunIsim("Cikolata");
        u1.seturunAdet(100);
        u1.seturunFiyat(12.50); 
        
        ss1 << u1.geturunID() << u1.geturunIsim() << u1.geturunAdet() << u1.geturunFiyat();
        
        stringstream ss2(satir);
        
        u2.seturunID(2);
        u2.seturunIsim("Kek");
        u2.seturunAdet(200);
        u2.seturunFiyat(5.50); 
        
        ss2 << u2.geturunID() << u2.geturunIsim() << u2.geturunAdet() << u2.geturunFiyat();
        
        
        dosyaYaz << endl;
		dosyaYaz << u1.geturunID() << "				" << u1.geturunIsim() << "				" << u1.geturunAdet() << "				" << u1.geturunFiyat() << endl;
		dosyaYaz << u2.geturunID() << "				" << u2.geturunIsim() << "				" << u2.geturunAdet() << "				" << u2.geturunFiyat() << endl;
		
		
        dosyaYaz.close(); 
	}
	
    dosya.close();
    
    girisEkrani();
}
	
	
	
		
void Ekran :: urunSilEkrani()

{
    ifstream dosyaOku("urunlerD.txt");
    if (!dosyaOku.is_open()) {
        cerr << "Dosya acilamadi!(ifstream)" << endl;
        return;
    }

    ofstream dosyaYaz("temp.txt");

    if (!dosyaYaz.is_open()) {
        cerr << "Dosya acilamadi!(ofstream)" << endl;
        return;
    }

    int silinecekID;
    cout << "Silinecek urunun ID'sini girin: ";
    cin >> silinecekID;

    string satir;
    bool silindi = false;

    while (getline(dosyaOku, satir)) {
        stringstream ss(satir);
        int id;
        ss >> id;

        if (id == silinecekID) {
            
            silindi = true;
            continue;
        }

        dosyaYaz << satir << endl;
    }

    dosyaOku.close();
    dosyaYaz.close();

    if (silindi) {
        remove("urunlerD.txt");      
        rename("temp.txt", "urunlerD.txt"); 
        cout << "Urun silindi." << endl;
    } else {
        remove("temp.txt"); 
        cout << "Urun bulunamadi." << endl;
    }

    girisEkrani();
}


		
void Ekran :: urunDuzenleEkrani()
{
    ifstream dosyaOku("urunlerD.txt");
    if (!dosyaOku.is_open()) {
        cerr << "Dosya acilamadi!(ifstream)" << endl;
        return;
    }

    ofstream dosyaYaz("temp.txt");
    if (!dosyaYaz.is_open()) {
        cerr << "Dosya acilamadi!(ofstream)" << endl;
        return;
    }

    int duzenlenecekID;
    cout << "Duzenlenecek urunun ID'sini girin: ";
    cin >> duzenlenecekID;

    string satir;
    bool duzenlendi = false;

    while (getline(dosyaOku, satir)) {
        stringstream ss(satir);
        int id;
        ss >> id;

        if (id == duzenlenecekID) {
            int adet;
            double fiyat;
            string isim;

            cout << "Yeni Isim: ";
            cin.ignore();
            getline(cin, isim);
            cout << "Yeni Adet: ";
            cin >> adet;
            cout << "Yeni Fiyat: ";
            cin >> fiyat;

            
            dosyaYaz << id << "				" << isim << "				" << adet << "				" << fiyat << endl;
            duzenlendi = true;
        } else {
            
            dosyaYaz << satir << endl;
        }
    }

    dosyaOku.close();
    dosyaYaz.close();

    if (duzenlendi) {
        remove("urunlerD.txt");       
        rename("temp.txt", "urunlerD.txt"); 
        cout << "Urun duzenlendi." << endl;
    } else {
        remove("temp.txt"); 
        cout << "Urun bulunamadi." << endl;
    }

    girisEkrani();
}



void Ekran :: tedarikciGoruntuleEkrani()
{
	ifstream dosyaOku2("tedarikciD.txt");
	string satir = "";    
	if ( dosyaOku2.is_open() )
	{ 
	     
	while (getline(dosyaOku2, satir))
	
	{       
	
	cout << satir << endl;   
	  
	}      
	
	dosyaOku2.close();   
	
	}
}
		
void Ekran :: tedarikciEkleEkrani()
{
	ofstream dosyaYaz2;
	dosyaYaz2.open("tedarikciD.txt", ios::app); // ios::app dosyanin sonuna ekleme yapmak icin

    if (!dosyaYaz2.is_open()) {
        cerr << "Dosya acilamadi!(ofstream)" << endl;
        
        return;
    }
    
    ifstream dosya2;
	dosya2.open("tedarikciD.txt");
	
    if (!dosya2.is_open()) {
        cerr << "Dosya acilamadi!(ifstream)" << endl;
        return;
    }

    string satir2;
    int id;
	string isim;
	string no;
    string mail;
    
    
    cout << "Yeni Tedarikci Icin ID: " <<endl;
    cin >> id;
    cout << "Yeni Tedarikci Icin Isim: "<<endl;
    cin.ignore();
    getline(cin,isim);
    cout << "Yeni Tedarikci Icin Telefon Numarasi: "<<endl;
    cin.ignore();
    getline(cin,no);
    cout<< "Yeni Tedarikci Icin Mail Adresi: "<<endl;
    cin.ignore();
    getline(cin,mail);
    
    stringstream ss3(satir2);
    t.settedarikciID(id);
    t.settedarikciIsim(isim);
    t.settedarikciNO(no);
    t.settedarikciMail(mail);
    ss3 << t.gettedarikciID() << t.gettedarikciIsim() << t.gettedarikciNO() << t.gettedarikciMail();
    dosyaYaz2 << t.gettedarikciID() << "				" << t.gettedarikciIsim() << "				" << t.gettedarikciNO() << "				" << t.gettedarikciMail() << endl;
        
    while (getline(dosya2, satir2)) {
    	  
        stringstream ss1(satir2);
        
        t1.settedarikciID(1);
    	t1.settedarikciIsim("Ulker");
    	t1.settedarikciNO("555 123 512");
    	t1.settedarikciMail("ulker@gmail.com"); 
        
        ss1 << t1.gettedarikciID() << t1.gettedarikciIsim() << t1.gettedarikciNO() << t1.gettedarikciMail();
        
        stringstream ss2(satir2);
        
        t2.settedarikciID(2);
    	t2.settedarikciIsim("ETI");
    	t2.settedarikciNO("525 613 831");
    	t2.settedarikciMail("eti@gmail.com"); 
        
        ss2 << t2.gettedarikciID() << t2.gettedarikciIsim() << t2.gettedarikciNO() << t2.gettedarikciMail();
        
        
        dosyaYaz2 << endl;
		dosyaYaz2 << t1.gettedarikciID() << "				" << t1.gettedarikciIsim() << "				" << t1.gettedarikciNO() << "				" << t1.gettedarikciMail() << endl;
		dosyaYaz2 << t2.gettedarikciID() << "				" << t2.gettedarikciIsim() << "				" << t2.gettedarikciNO() << "				" << t2.gettedarikciMail() << endl;
		
		
        dosyaYaz2.close(); 
	}
	
    dosya2.close();
    
    girisEkrani();
}
		
void Ekran :: tedarikciSilEkrani()
{
	ifstream dosyaOku2("tedarikciD.txt");
    if (!dosyaOku2.is_open()) {
        cerr << "Dosya acilamadi!(ifstream)" << endl;
        return;
    }

    ofstream dosyaYaz2("temp2.txt"); 

    if (!dosyaYaz2.is_open()) {
        cerr << "Dosya acilamadi!(ofstream)" << endl;
        return;
    }

    int silinecekID;
    cout << "Silinecek urunun ID'sini girin: ";
    cin >> silinecekID;

    string satir2;
    bool silindi = false;

    while (getline(dosyaOku2, satir2)) {
        stringstream ss(satir2);
        int id;
        ss >> id;

        if (id == silinecekID) {
            
            silindi = true;
            continue;
        }

        dosyaYaz2 << satir2 << endl;
    }

    dosyaOku2.close();
    dosyaYaz2.close();

    if (silindi) {
        remove("tedarikciD.txt");       
        rename("temp2.txt", "urunlerD.txt"); 
        cout << "Urun silindi." << endl;
    } else {
        remove("temp2.txt"); 
        cout << "Urun bulunamadi." << endl;
    }

    girisEkrani();
}
		
void Ekran :: tedarikciDuzenleEkrani()
{
	ifstream dosyaOku2("tedarikciD.txt");
    if (!dosyaOku2.is_open()) {
        cerr << "Dosya acilamadi!(ifstream)" << endl;
        return;
    }

    ofstream dosyaYaz2("temp2.txt"); 
    if (!dosyaYaz2.is_open()) {
        cerr << "Dosya acilamadi!(ofstream)" << endl;
        return;
    }

    int duzenlenecekID;
    cout << "Duzenlenecek Tedarikcinin ID'sini girin: ";
    cin >> duzenlenecekID;

    string satir2;
    bool duzenlendi = false;

    while (getline(dosyaOku2, satir2)) {
        stringstream ss(satir2);
        int id;
        ss >> id;

        if (id == duzenlenecekID) {
            string isim;
			string no;
    		string mail;

            
            cout << "Yeni Isim: ";
            cin.ignore();
            getline(cin, isim);
            cout << "Yeni Telefon Numarasi: ";
            cin.ignore();
            getline(cin,no);
            cout << "Yeni Mail Adresi: ";
            cin.ignore();
            getline(cin,mail);

            
            dosyaYaz2 << id << "				" << isim << "				" << no << "				" << mail << endl;
            duzenlendi = true;
        } else {
            
            dosyaYaz2 << satir2 << endl;
        }
    }

    dosyaOku2.close();
    dosyaYaz2.close();

    if (duzenlendi) {
        remove("urunlerD.txt");       
        rename("temp2.txt", "urunlerD.txt"); 
        cout << "Urun duzenlendi." << endl;
    } else {
        remove("temp2.txt"); 
        cout << "Urun bulunamadi." << endl;
    }

    girisEkrani();
}

void Ekran :: adresBilgiEkrani() 
{
	
	a1.setSokak("Cumhuriyet Sokak");
	a1.setSehir("Istanbul");
	a1.setUlke("Turkiye");
	
	a2.setSokak("Kale Sokak");
	a2.setSehir("Manisa");
	a2.setUlke("Turkiye");
	
	cout << "Adres Bilgisi:" << endl;
	cout << "-------------------------------------" << endl;
	cout << "Tedarikci: " << t1.gettedarikciIsim() << endl;
    cout << "Sokak: " << a1.getSokak() << endl;
    cout << "Sehir: " << a1.getSehir() << endl;
    cout << "Ulke: " << a1.getUlke() << endl;
    cout << "-------------------------------------" << endl;
    cout << "Tedarikci: " << t2.gettedarikciIsim() << endl;
    cout << "Sokak: " << a2.getSokak() << endl;
    cout << "Sehir: " << a2.getSehir() << endl;
    cout << "Ulke: " << a2.getUlke() << endl;
    
}
