#include <iostream>
using namespace std;

class Zoo
{
private:
	char miesto_zoo[30];
	char zviera[30];
	int cis_zvierata;
	long int hodn_zvierata;
public:
	Zoo() {}
	Zoo(char *miesto, char *zviera, int cislo, int hodnota);


	char *GetMiesto();
	char *GetZviera();
	int GetCislo();
	int GetHodnota();

	void SetMiesto(char *Place);
	void SetZviera(char *Animal);
	void SetCislo(int Number);
	void SetHodnota(int Value);
};
