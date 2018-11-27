#include<time.h>
#define VYMEN(a, b) { long tmp = a; a = b; b = tmp; }
#include<iostream>
using namespace std;

/*int NajdiCisloL(int velkost_pola, int hladane_cislo, long *pole)
{
	for (int i = 0; i < velkost_pola; i++)
	{
		if (pole[i] == hladane_cislo)
		{
			return i;
		}
	}

	return -1;
}
*/

int NajdiCisloL(int x, int pole[], int dlzka)
{
	int i = 0;
	while (i < dlzka && pole[i] != x)
		i++;
	if (i < dlzka)
		return i;
	else
		return -1;
}


int main()
{
	int x, dlzka;

	int stat_pole[100];
	int i = 0;

	cout << "vlozte velkost prehladavanej casti pola \"stat_pole\" max (100): ";
	cin >> dlzka;

	srand((unsigned)time(NULL));

	for (i = 0; i < dlzka; i++)
		stat_pole[i] = (double)rand() / (RAND_MAX + 1) * 80 + 1; //tato cast vygerenuje nahodne cisla do pola

	cout << dlzka << " vygenerovanych prvkov pola \"stat_pole\"" << endl;
	for (i = 0; i < dlzka; i++)
		cout << "stat_pole[" << i << "] = " << stat_pole[i] << endl;

	cout << endl;

	cout << "vlozte hladane cislo v zobrazenej casti pola \"stat_pole\":" << endl;
	cin >> x;

	int index;
	index = NajdiCisloL(x, stat_pole, dlzka); 
	//index = stat_pole[i];
	if (index > -1)
	{
		cout << "Index prvku pola \"stat_pole\" obsahujuci hladane (najdene linearnym vyhladavanim) cislo: " << x << " je : " << index << endl;
	}
	else
	{
		cout << "Hladane cislo: " << x << " sa nenachadza v poli \"stat_pole\"" << endl;
	}

	return 0;
}



//TREBA DOROBIT KED JE VIAC ZHODNYCH CISEL
