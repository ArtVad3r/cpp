#include<time.h>
#include<iostream>
using namespace std;

/*int vyhladavanie(int m, int n, long *cisla)
{
	int zaciatok = 1;
	int koniec = 20;
	int pivot;
	pivot = (zaciatok + koniec) / 2;                       // Find Mid Location of Array

	while (zaciatok <= koniec && cisla[pivot] != n)      // Compare Item and Value of Mid
	{
		if (cisla[pivot] < n)
			zaciatok = pivot + 1;
		else
			koniec = pivot - 1;

		pivot = (zaciatok + koniec) / 2;
	}*/


int NajdiCisloB(int x, int pole[], int dlzka)
{
	int zaciatok = 1;
	int koniec = 20;
	int pivot;
	pivot = (zaciatok + koniec) / 2;                       // Find Mid Location of Array

	while (zaciatok <= koniec && pole[pivot] != x)      // Compare Item and Value of Mid
	{
		if (pole[pivot] < x)
			zaciatok = pivot + 1;
		else
			koniec = pivot - 1;

		pivot = (zaciatok + koniec) / 2;
	}



	if (pole[pivot] == x)
	{
		cout << "\nNasla sa zhoda na indexe : " << pivot << endl;
	}
	else
	{
		cout << "Nenasla sa zhoda" << endl;
	}


	return pivot;
}


int main()
{
	int i, x, dlzka;
	int pole[101]/*, *hladane*/;
	//int zaciatok, koniec, pivot;

	cout << "Vlozte velkost pola: ";
	cin >> dlzka;


	srand((unsigned)time(NULL));


	pole[0] = (long)rand() % 80;

	for (i = 1; i <= dlzka; i++)
		pole[i] = pole[i - 1] + rand() % 80;

	for (i = 1; i <= dlzka; i++)
		cout << "stat_pole [" << i - 1 << "]  :  " << pole[i - 1] << endl;

	cout << "vlozte hladane cislo: ";
	cin >> x;

	int index;
	index = NajdiCisloB(x, pole, dlzka);

	return 0;
}
