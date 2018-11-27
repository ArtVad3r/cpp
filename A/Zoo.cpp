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



________________________________________________________



#include "STT.h"

STT::STT(char *place, char *animal, int number, int value){
    strcpy(STT::place_STT, place);
    strcpy(STT::animal, animal);
    STT::nmb_animals = number;
    STT::vlue_animals = value;
}

void STT::SetPlace(char *Plc){
    strcpy(place_STT, Plc);
}

char *STT::GetPlace(){
    /*char *pom;
    pom = new char[20];
    strcpy(pom, place_STT);
    return pom;*/
    return place_STT;
}

void STT::SetAnimal(char *Anml){
    strcpy(animal, Anml);
}
char *STT::GetAnimal(){
    /*char *pom;
    pom = new char[20];
    strcpy(pom, zviera);
    return pom;*/
    return animal;
}

void STT::SetNumber(int Nmbr){
    nmb_animals = Nmbr;
}
int STT::GetNumber(){
    return nmb_animals;
}
void STT::SetValue(int Vlue){
    vlue_animals = Vlue;
}
int STT::GetValue(){
    return vlue_animals;
}
