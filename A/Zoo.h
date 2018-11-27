#include <iostream>
#include <string.h>
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


________________________________________________


#include <iostream>
#include <string.h>

using namespace std;
class STT{

private:
    char place_STT[30];
    char animal[30];
    int nmb_animals;
    long int vlue_animals;
public:
   STT() {}
   STT(char *place, char *animal, int number, int value);

   char *GetPlace();
   char *GetAnimal();
   int GetNumber();
   int GetValue();
   void SetPlace(char *Plc);
   void SetAnimal(char *Anml);
   void SetNumber(int Nmbr);
   void SetValue(int Vlue);


};
