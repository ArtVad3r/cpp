#include "Automobil.h"

Automobil::Automobil(char *miesto, char *znacka, int rok, int cislo, long int  cena)
{
	strcpy(Automobil::miesto_autobaz, miesto);
	strcpy(Automobil::znacka_typ_auta, znacka);
	Automobil::rok_vyroby_auta = rok;
	Automobil::predaj_cis_auta = cislo;
	Automobil::cena_auta = cena;
}

void Automobil::SetMiesto(char *Place)
{
	strcpy(miesto_autobaz, Place);
}
char *Automobil::GetMiesto()
{
	return miesto_autobaz;
}

void Automobil::SetZnacka(char *Brand)
{
	strcpy(znacka_typ_auta, Brand);
}
char *Automobil::GetZnacka()
{
	return znacka_typ_auta;
}

void Automobil::SetRok(int Year)
{
	rok_vyroby_auta = Year;
}
int Automobil::GetRok()
{
	return rok_vyroby_auta;
}

void Automobil::SetCislo(int Number)
{
	predaj_cis_auta = Number;
}
int Automobil::GetCislo()
{
	return predaj_cis_auta;
}

void Automobil::SetCena(long int Price)
{
	cena_auta = Price;
}
long int  Automobil::GetCena()
{
	return cena_auta;
}



___________________________________





#include "cccaus.h"

cccaus::cccaus(char *miesto, char *znacka, int rok, int cislo, long int  cena){
	strcpy(cccaus::msto_autobaz, miesto);
	strcpy(cccaus::znck_typ_auta, znacka);
    cccaus::rok_vrby_auta = rok;
    cccaus::prdj_cis_auta = cislo;
    cccaus::cna_auta = cena;
}



void cccaus::SetPlc(char *Place){
	strcpy(msto_autobaz, Place);
}
char *cccaus::GetPlc(){
	return msto_autobaz;
}



void cccaus::SetSgn(char *Brand){
	strcpy(znck_typ_auta, Brand);
}
char *cccaus::GetSgn(){
	return znck_typ_auta;
}

void cccaus::SetYr(int Year){
    rok_vrby_auta = Year;
}
int cccaus::GetYr(){
	return rok_vrby_auta;
}

void cccaus::SetNmb(int Number){
    prdj_cis_auta = Number;
}
int cccaus::GetNmb(){
	return prdj_cis_auta;
}

void cccaus::SetPrce(long int Price){
    cna_auta = Price;
}
long int  cccaus::GetPrce(){
	return cna_auta;
}
