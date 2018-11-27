#include "Zoo.h"

int main()
{
	char miesto_zoo[30], zviera[30];
	int Cislo;
	long int Hodnota, sum=0;
	int Pocet;
	int i = 0, j = 0;

	Zoo objekty[5];

	cout << "Vlozte pocet vkladanych zvierat (max. 3):  ";
	cin >> Pocet;

	if ((Pocet > 3) || (Pocet == 0))
		cout << "Zly pocet" << endl;

	else
	{
		while (i < Pocet)
		{
			i++;
			cout << endl << "vlozte miesto ZOO, kde zviera zije      : ";
			cin >> miesto_zoo;
			cout << "vlozte druh zvierata : ";
			cin >> zviera;
			cout << "vlozte cislo zvierata : ";
			cin >> Cislo;
			cout << "vlozte spolocensku hodnotu zvierata [Eur] : ";
			cin >> Hodnota;


			objekty[i].SetMiesto(miesto_zoo);
			objekty[i].SetZviera(zviera);
			objekty[i].SetCislo(Cislo);
			objekty[i].SetHodnota(Hodnota);

		}

		i++;
		objekty[i].SetMiesto((char*)"Bojnice");
		objekty[i].SetZviera((char*)"slon");
		objekty[i].SetCislo(1002);
		objekty[i].SetHodnota(11000);

		sum += objekty[i].GetHodnota();

		cout << "Zadane v programe: " << endl;
		cout << "Miesto : " << objekty[i].GetMiesto() << endl;
		cout << "Znacka : " << objekty[i].GetZviera() << endl;
		cout << "Cislo  : " << objekty[i].GetCislo() << endl;
		cout << "Cena   : " << objekty[i].GetHodnota() << endl;
		cout << endl << "_______________________________________________________________" << endl;


		cout << endl << endl;
		cout << "Zadane uzivatelom: " << endl;
		for (i = 1; i < Pocet + 1; i++)
		{
			cout << "miesto zoo : " << objekty[i].GetMiesto() << endl;
			cout << "zviera   : " << objekty[i].GetZviera() << endl;
			cout << "cislo zvierata  : " << objekty[i].GetCislo() << endl;
			cout << "spoloc. hodnota zvierata [Eur]   : " << objekty[i].GetHodnota() << endl;
			cout << endl << "_______________________________________________________________" << endl;
			sum += objekty[i].GetHodnota();
		}

		cout << "celkova spolocenska hodnota uvedenych 4-och zvierat [Eur] :" << sum;

		
	}

	return 0;
}




_________________________________________________________





#include "STT.h"

int main(){
    char place_STT[30], anim[30];
    int NMBRI;
    long int VAL, sum=0;
    int Multit;
    int a = 0, j = 0;

    STT objekty[5];

    cout << "Zadajte pocet vkladanych zvierat (max. 3):  ";
    cin >> Multit;

    if ((Multit > 3) || (Multit == 0))
        cout << "ERROR - Zadajte znovu!" << endl;

    else{
        while (a < Multit){
            a++;
           cout << endl << "Zadajte miesto v ktorom zviera zije : ";
           cin >> place_STT;
           cout << "Zadajte druh zvierata : ";
           cin >> anim;
           cout << "Zadajte cislo zvierata : ";
           cin >> NMBRI;
           cout << "Zadajte spol hodnotu zvierata [v Eurach] : ";
           cin >> VAL;

           objekty[a].SetPlace(place_STT);
           objekty[a].SetAnimal(anim);
           objekty[a].SetNumber(NMBRI);
           objekty[a].SetValue(VAL);
        }

        a++;
        objekty[a].SetPlace((char*)"Bojnice");
        objekty[a].SetAnimal((char*)"slon");
        objekty[a].SetNumber(1002);
        objekty[a].SetValue(11000);

        sum += objekty[a].GetValue();

        cout << "Zadane v programe: " << endl;
        cout << "Miesto : " << objekty[a].GetPlace() << endl;
        cout << "Znacka : " << objekty[a].GetAnimal() << endl;
        cout << "Cislo  : " << objekty[a].GetNumber() << endl;
        cout << "Cena   : " << objekty[a].GetValue() << endl;
        cout << endl << "______________________________________________________" << endl;


        cout << endl << endl;
        cout << "Zadane uzivatelom: " << endl;
        for (a = 1; a < Multit + 1; a++){
            cout << "miesto zoo : " << objekty[a].GetPlace() << endl;
            cout << "zviera   : " << objekty[a].GetAnimal() << endl;
            cout << "cislo zvierata  : " << objekty[a].GetNumber() << endl;
            cout << "spoloc. hodnota zvierata [Eur]   : " << objekty[a].GetValue() << endl;
            cout << endl << "_________________________________________________" << endl;
            sum += objekty[a].GetValue();
        }
        cout << "celkova spolocenska hodnota uvedenych 4-och zvierat [Eur] :" << sum;
    }
    return 0;
}
