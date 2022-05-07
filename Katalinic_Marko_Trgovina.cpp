// MD5:pyn/BRgoLGjx4AF4ZWnztg==// Verifikator 5.05// Program:Trgovina// Opis zadatka:Bilježenje Trgovaèhih raèuna// Autor:Marko Kataliniæ// Poèetno vrijeme:6.4.2022. 20:56:40// Završno vrijeme:6.4.2022. 23:27:33// Identifikatori:trgovina,br_racuna,blagajnik,sifra_proizvoda,proizvod,main,cijena,izbor,sifra,racun[300],unos,racun[],&sifra,blagajnik_ime,blagajnik_prez,ispis,i,ispravak,pretrazivanje,Broj_racuna,ime,prezime,stavka,spremanje,mapa,suma// IP:fe80::97f:501b:493c:c6f3%6 ( 944 )// #:#include <iostream>,#include <fstream>,#include <string>,// Uspješnih/neuspješnih prevoðenja:38/13#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct trgovina {
  int br_racuna;
  string blagajnik_ime;
  string blagajnik_prez;
  int sifra_proizvoda;
  string proizvod;
  float cijena;
};

int sifra=0;
trgovina racun [300];
float suma=0;

void unos (trgovina racun [], int &sifra) {
  if (sifra==0) {
    cout<<"Nema spremljenih racuna"<<endl;
  }
  sifra+=1;
  cout<<"Upiste broj racuna: "; cin>>racun[sifra].br_racuna;
  cout<<"Upisite ime blagajnika/ce: "; cin>>racun[sifra].blagajnik_ime;
  cout<<"Upisite prezime blagajnika/ce: "; cin>>racun[sifra].blagajnik_prez;
  cout<<"Upisite ime proizvoda: "; cin>>racun[sifra].proizvod;
  cout<<"Upisite sifru proizvoda: "; cin>>racun[sifra].sifra_proizvoda;
  cout<<"Upisite cijenu proizvoda: "; cin>>racun[sifra].cijena;
  cout<<endl;
}

void ispis (trgovina racun[], int sifra) {
  if (sifra==0) {
    cout<<"Nema spremljenih racuna"<<endl;
  }
  for (int i=1; i<=sifra; i++) {
    cout<<i<<"  "<<racun[i].br_racuna<<"  "<<racun[i].blagajnik_ime<<"  "<<racun[i].blagajnik_prez<<"  "<<racun[i].proizvod<<"  "<<racun[i].sifra_proizvoda<<"  "<<racun[i].cijena<<endl;
    suma+=racun[i].cijena;
  }
  cout<<"Ukupna cijena iznosi: "<<suma<<" kuna"<<endl;
  cout<<endl;
}
  
void ispravak (trgovina racun[], int sifra) {
  for (int i=1; i<=sifra; i++) {
    cout<<i<<"  "<<racun[i].br_racuna<<"  "<<racun[i].blagajnik_ime<<"  "<<racun[i].blagajnik_prez<<"  "<<racun[i].proizvod<<"  "<<racun[i].sifra_proizvoda<<"  "<<racun[i].cijena<<endl;
  }
  int unos;
  cout<<"Upisite sifru: "; cin>>unos;
  if (unos<1 || unos>sifra) {
    cout<<"Nepostojeca sifra"<<endl;
  }
  else {
    cout<<"Upiste broj racuna: "; cin>>racun[unos].br_racuna;
    cout<<"Upisite ime blagajnika/ce: "; cin>>racun[unos].blagajnik_ime;
    cout<<"Upisite prezime blagajnika/ce: "; cin>>racun[unos].blagajnik_prez;
    cout<<"Upisite ime proizvoda: "; cin>>racun[unos].proizvod;
    cout<<"Upisite sifru proizvoda: "; cin>>racun[unos].sifra_proizvoda;
    cout<<"Upisite cijenu proizvoda: "; cin>>racun[unos].cijena;
  }
  cout<<endl;
}

void pretrazivanje (trgovina racun[], int sifra) {
  if (sifra==0) {
    cout<<"Nema spremljenih racuna"<<endl;
  }
  for (int i=1; i<=sifra; i++) {
    cout<<i<<"  "<<racun[i].br_racuna<<"  "<<racun[i].blagajnik_ime<<"  "<<racun[i].blagajnik_prez<<"  "<<racun[i].proizvod<<"  "<<racun[i].sifra_proizvoda<<"  "<<racun[i].cijena<<endl;
 }
 int Broj_racuna, stavka;
 string ime, prezime, proizvod;
 cout<<endl;
 do {
 cout<<"IZBORNIK"<<endl;
 cout<<"--------------------"<<endl;
 cout<<"1. Broj racuna"<<endl;
 cout<<"2. Ime blagajnika/ce"<<endl;
 cout<<"3. Prezime blagajnika/ce"<<endl;
 cout<<"4. Proizvod"<<endl;
 
 cout<<"Izaberite sto vas zanima: "; cin>>stavka;
 cout<<endl;
 }
 while (stavka<0 && stavka>5);
 
 switch (stavka){
   case 1:
     cout<<"Upisite broj racuna: "; cin>>Broj_racuna;
     for (int i=1; i<=sifra; i++) {
     if (Broj_racuna==racun[i].br_racuna)
     cout<<i<<"  "<<racun[i].br_racuna<<"  "<<racun[i].blagajnik_ime<<"  "<<racun[i].blagajnik_prez<<"  "<<racun[i].proizvod<<"  "<<racun[i].sifra_proizvoda<<"  "<<racun[i].cijena<<endl;
     else if (Broj_racuna!=racun[sifra].br_racuna)
     cout<<"Broj racuna ne postoji"<<endl;
     }
   break;
   case 2:
     cout<<"Upisite ime blagajnika/ce: "; cin>>ime;
     for (int i=1; i<=sifra; i++) {
     if (ime==racun[i].blagajnik_ime)
     cout<<i<<"  "<<racun[i].br_racuna<<"  "<<racun[i].blagajnik_ime<<"  "<<racun[i].blagajnik_prez<<"  "<<racun[i].proizvod<<"  "<<racun[i].sifra_proizvoda<<"  "<<racun[i].cijena<<endl;
     else if (ime!=racun[sifra].blagajnik_ime)
     cout<<"Ne postoji ime blagajnika/ce"<<endl;
     }
   break;
   case 3:
     cout<<"Upiste prezime blagajnika/ce: "; cin>>prezime;
     for (int i=1; i<=sifra; i++) {
     if (prezime==racun[i].blagajnik_prez)
     cout<<i<<"  "<<racun[i].br_racuna<<"  "<<racun[i].blagajnik_ime<<"  "<<racun[i].blagajnik_prez<<"  "<<racun[i].proizvod<<"  "<<racun[i].sifra_proizvoda<<"  "<<racun[i].cijena<<endl;
     else if (prezime!=racun[sifra].blagajnik_prez)
     cout<<"Ne postoji prezime blagajnika/ce"<<endl;
     }
   break;
   case 4:
     cout<<"Upisite ime proizvoda: "; cin>>proizvod;
     for (int i=1; i<=sifra; i++) {
     if (proizvod==racun[i].proizvod)
     cout<<i<<"  "<<racun[i].br_racuna<<"  "<<racun[i].blagajnik_ime<<"  "<<racun[i].blagajnik_prez<<"  "<<racun[i].proizvod<<"  "<<racun[i].sifra_proizvoda<<"  "<<racun[i].cijena<<endl;
     else if (proizvod!=racun[sifra].proizvod)
     cout<<"Ne postoji trazeni proizvod"<<endl;
     }
   break;
 }
}

int spremanje (trgovina racun[], int sifra) {
  fstream mapa ("datoteka.txt");
  if (!mapa) {
    cout<<"Greska u otvaranju datoteke"<<endl;
    return -1;
  }
  for (int i=1; i<=sifra; i++) {
    mapa<<i<<racun[i].br_racuna<<racun[i].blagajnik_ime<<racun[i].blagajnik_prez<<racun[i].proizvod<<racun[i].proizvod<<racun[i].cijena<<endl;
  }
  mapa.close();
}

int main(){
  int izbor;
  do {
    cout<<"IZBORNIK"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"1. Stvaranje racuna"<<endl;
    cout<<"2. Ispis napravljenih racuna"<<endl;
    cout<<"3. Ispravak napravljenih racuna"<<endl;
    cout<<"4. Pretrazivanje stavka racuna"<<endl;
    cout<<"5. Spremanje racuna u datoteku"<<endl;
    cout<<"0. Izlaz iz programa"<<endl;
    
    cout<<endl;
    
    cout<<"Unesite vas izbor: "; cin>>izbor;
    
    cout<<endl;
    
    switch (izbor) {
      case 1:
        unos (racun, sifra);
      break;
      
      case 2:
        ispis (racun, sifra);
      break;
      
      case 3:
        ispravak (racun, sifra);
      break;
      
      case 4:
        pretrazivanje (racun, sifra);
      break;
      
      case 5:
        spremanje (racun, sifra);
      break;
    }
  }
  while (izbor!=0);
  
	system("PAUSE");
	return 0;
}
  
  
