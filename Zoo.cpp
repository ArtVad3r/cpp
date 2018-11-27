#include "Zoo.h"

Zoo::Zoo(char *miesto, char *zviera, int cislo, int hodnota)
{
	strcpy(Zoo::miesto_zoo, miesto);
	strcpy(Zoo::zviera, zviera);
	Zoo::cis_zvierata = cislo;
	Zoo::hodn_zvierata = hodnota;
}

void Zoo::SetMiesto(char *Place)
{
	strcpy(miesto_zoo, Place);
}

char *Zoo::GetMiesto()
{
	/*char *pom;
	pom = new char[20];
	strcpy(pom, miesto_zoo);
	return pom;*/
	return miesto_zoo;
}

void Zoo::SetZviera(char *Animal)
{
	strcpy(zviera, Animal);
}
char *Zoo::GetZviera()
{
	/*char *pom;
	pom = new char[20];
	strcpy(pom, zviera);
	return pom;*/
	return zviera;
}

void Zoo::SetCislo(int Number)
{
	cis_zvierata = Number;
}
int Zoo::GetCislo()
{
	return cis_zvierata;
}

void Zoo::SetHodnota(int Value)
{
	hodn_zvierata = Value;
}
int Zoo::GetHodnota()
{
	return hodn_zvierata;
}

