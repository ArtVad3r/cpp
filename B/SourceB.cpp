#include "Automobil.h"

int main()
{
	char miesto_autobaz[30], znacka_typ_auta[30];
	int Rok, Cislo, Cena;
	int Pocet;
	int i = 0, j = 0;
	double sum = 0;

	Automobil objekty[5];

	cout << "Vlozte pocet (max. 3):  ";
	cin >> Pocet;

	if ((Pocet > 3) || (Pocet == 0))
		cout << "Zly pocet" << endl;

	else
	{
		while (i < Pocet)
		{
			i++;
			cout << endl << "vlozte Miesto " << i << ". auta      : ";
			cin >> miesto_autobaz;
			cout << "vlozte Znacku " << i << ". auta : ";
			cin >> znacka_typ_auta;
			cout << "vlozte Rok " << i << ". auta : ";
			cin >> Rok;
			cout << "vlozte Cislo " << i << ". auta : ";
			cin >> Cislo;
			cout << "vlozte Cenu " << i << ". auta : ";
			cin >> Cena;


			objekty[i].SetMiesto(miesto_autobaz);
			objekty[i].SetZnacka(znacka_typ_auta);
			objekty[i].SetRok(Rok);
			objekty[i].SetCislo(Cislo);
			objekty[i].SetCena(Cena);

		}

		i++;
		objekty[i].SetMiesto((char*)"Trnava");
		objekty[i].SetZnacka((char*)"Nissan_Primera");
		objekty[i].SetRok(2006);
		objekty[i].SetCislo(10020);
		objekty[i].SetCena(3300);

		sum += objekty[i].GetCena(); // do sum pripocitame cenu posledneho auta Nissan Primera

		cout << endl << endl;

		cout << "programom vytvoreny a inicializovany objekt auta pomocou parametrickeho konstruktora triedy 'Automobil': " << endl;
		cout << "Miesto autobazara s pred. autom: " << objekty[i].GetMiesto() << endl;
		cout << "Znacka a typ auta : " << objekty[i].GetZnacka() << endl;
		cout << "Rok vyroby auta    : " << objekty[i].GetRok() << endl;
		cout << "predajne cislo auta  : " << objekty[i].GetCislo() << endl;
		cout << "predajna cena auta [Eur]   : " << objekty[i].GetCena() << endl;
		cout << endl << "_______________________________________________________________" << endl;

		cout << "hodnoty instan. premennych objektov triedy 'Automobil' (aut), vlozene pouzivatelom programu: " << endl;
		for (i = 1; i < Pocet + 1; i++)
		{
			cout << "Miesto autobazara s pred. autom: " << objekty[i].GetMiesto() << endl;
			cout << "Znacka a typ auta: " << objekty[i].GetZnacka() << endl;
			cout << "Rok vyroby auta   : " << objekty[i].GetRok() << endl;
			cout << "predajne cislo auta  : " << objekty[i].GetCislo() << endl;
			cout << "predajna cena auta [Eur]   : " << objekty[i].GetCena() << endl;
			cout << endl << "_______________________________________________________________" << endl;

			sum += objekty[i].GetCena(); // do sum pripocitavame postupne cenu vozidiel zadanych uzivatelom
		}

	}

	cout << "Priemerna predajna cena uvedenych 4-roch aut je: " << (sum / (Pocet + 1)) << endl;

	return 0;
}


________________________________________________________




#include "cccaus.h"

int main(){
    char msto_autobaz[30], znck_typ_auta[30];
    int Rok, Cislo, Cena;
    int Pocet;
    int i = 0, j = 0;
    double sum = 0;

    cccaus objekty[5];
    cout << "Vlozte pocet (max. 3):  ";
    cin >> Pocet;
    if ((Pocet > 3) || (Pocet == 0))
          cout << "Zly pocet" << endl;

    else{
        while (i < Pocet){
           i++;
           cout << endl << "vlozte Miesto " << i << ". auta      : ";
           cin >> msto_autobaz;
           cout << "vlozte Znacku " << i << ". auta : ";
           cin >> znck_typ_auta;
           cout << "vlozte Rok " << i << ". auta : ";
           cin >> Rok;
           cout << "vlozte Cislo " << i << ". auta : ";
           cin >> Cislo;
           cout << "vlozte Cenu " << i << ". auta : ";
           cin >> Cena;

           objekty[i].SetPlc(msto_autobaz);
           objekty[i].SetSgn(znck_typ_auta);
           objekty[i].SetYr(Rok);
           objekty[i].SetNmb(Cislo);
           objekty[i].SetPrce(Cena);

        }

       i++;
       objekty[i].SetPlc((char*)"Trnava");
       objekty[i].SetSgn((char*)"Nissan_Primera");
       objekty[i].SetYr(2006);
       objekty[i].SetNmb(10020);
       objekty[i].SetPrce(3300);

       sum += objekty[i].GetPrce();
       cout << endl << endl;

       cout << "programom vytvoreny a inicializovany objekt auta pomocou parametrickeho konstruktora triedy 'cccaus': " << endl;
       cout << "Miesto autobazara s pred. autom: " << objekty[i].GetPlc() << endl;
       cout << "Znacka a typ auta : " << objekty[i].GetSgn() << endl;
       cout << "Rok vyroby auta    : " << objekty[i].GetYr() << endl;
       cout << "predajne cislo auta  : " << objekty[i].GetNmb() << endl;
       cout << "predajna cena auta [Eur]   : " << objekty[i].GetPrce() << endl;
       cout << endl << "_______________________________________________________________" << endl;
       cout << "hodnoty instan. premennych objektov triedy 'cccaus' (aut), vlozene pouzivatelom programu: " << endl;
        for (i = 1; i < Pocet + 1; i++){
           cout << "Miesto autobazara s pred. autom: " << objekty[i].GetPlc() << endl;
           cout << "Znacka a typ auta: " << objekty[i].GetSgn() << endl;
           cout << "Rok vyroby auta   : " << objekty[i].GetYr() << endl;
           cout << "predajne cislo auta  : " << objekty[i].GetNmb() << endl;
           cout << "predajna cena auta [Eur]   : " << objekty[i].GetPrce() << endl;
           cout << endl << "_______________________________________________________________" << endl;

           sum += objekty[i].GetPrce();
        }
    }
    cout << "Priemerna predajna cena uvedenych 4-roch aut je: " << (sum / (Pocet + 1)) << endl;
    return 0;
}
