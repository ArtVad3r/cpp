#include <iostream>
#include <string.h>
using namespace std;

class Automobil
{
private:
	char miesto_autobaz[30];
	char znacka_typ_auta[30];
	int rok_vyroby_auta;
	int predaj_cis_auta;
	long int cena_auta;
public:
	Automobil() {}
	Automobil(char *miesto, char *znacka, int rok, int cislo, long int  cena);

	char *GetMiesto(); //ziskame hodnoty parametrov
	char *GetZnacka();
	int GetRok();
	int GetCislo();
	long int  GetCena();

	void SetMiesto(char *Place);
	void SetZnacka(char *Brand);
	void SetRok(int Year);
	void SetCislo(int Number);
	void SetCena(long int  Price);
};


__________________________________



#include <iostream>
#include <string.h>
using namespace std;

class cccaus{
private:
    char msto_autobaz[30];
    char znck_typ_auta[30];
    int rok_vrby_auta;
    int prdj_cis_auta;
    long int cna_auta;
public:
    cccaus() {}
    cccaus(char *miesto, char *znacka, int rok, int cislo, long int  cena);

    char *GetPlc();
    char *GetSgn();
    int GetYr();
    int GetNmb();
    long int GetPrce();

    void SetPlc(char *Place);
    void SetSgn(char *Brand);
    void SetYr(int Year);
    void SetNmb(int Number);
    void SetPrce(long int  Price);
};
