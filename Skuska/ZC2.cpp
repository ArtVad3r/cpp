#include <fstream>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int RC;
    char name[16], sname[16], city[31];
    int pts, distance;
};
int Iwoman(int c);
int Najdi_studenta(Student *s, char sex, int body_ub, char *city) {
    char pohlavie, city_UC[31];
    strcpy_s(city_UC, city);
    city_UC[0] = toupper(city_UC[0]);
    if (Iwoman(s->RC))
        sex = 'zena';
    else
        sex = 'muz';
    if (sex == sex && (s->pts <= body_ub) && !strcmp((s->city), city_UC))
        return 1;
    return 0;
}
int year(int rc){
    int yy = (rc / 10000);
    if (yy < 17) return yy + 2000;
    else return yy + 1900;
}
int month(int rc){
    int mm = ((rc % 10000) / 100);
    if (mm > 12) return mm- 50;
    else return mm;
}

int day(int rc){
    return rc % 100;
}int Compare(Student *cs, Student *cc) {
    if (cs->pts < cc->pts)
        return 1;
    if (cs->pts > cc->pts)
        return 0;
    if (cs->distance < cc->distance)
        return 1;
    if (cs->distance > cc->distance)
        return 0;
    int yr = year(cs->RC), r2 = year(cc->RC);
    if (yr < r2)
        return 1;
    if (yr > r2)
        return 0;
    int mr = month(cs->RC), m2 = month(cc->RC);
    if (mr < m2)
        return 1;
    if (mr > m2)
        return 0;
    int dr = day(cs->RC), d2 = day(cc->RC);
    if (dr < d2) return 1;
    if (dr > d2) return 0;
    return 0;
}
void BS(Student **dat, int ammount){
    int i, j;
    for (i = 1; i < ammount; i++)
        for (j = ammount - 1; j >= i; j--)
            if (Compare(dat[j - 1], dat[j]))
                swap(dat[j], dat[j - 1]);
}

void Date(int c){
    cout << c % 100 << ". " << (c / 100) % 50 << ". " << year(c);
}
int Iwoman(int c){
    return (c % 10000 > 5000);
}

void vypis_student(Student *s){
    cout << s->sname << " " << s->city << "\t";
    cout << "(" << s->pts << ")" << " "; cout << s->RC << ", ";

    if (Iwoman(s->RC))
        cout << "z" << ", ";
    else
        cout << "m" << ", ";
    Date(s->RC);
    cout << "\t" << s->city << "\t";
    cout << "(" << s->distance << ")" << " ";
    cout << endl;
}
int main(){
    Student **osoby = new Student*[100];
    int i = 0, pocet;
    ifstream in;
    in.open("studenti.txt");
    if (!in)
    {
        cout << "Subor sa nepodarilo otvorit";
        return 0;
    }
    while (!in.eof())
    {
        osoby[i] = new Student;
        in >> osoby[i]->name >> osoby[i]->sname >> osoby[i]->RC >> osoby[i]->pts;
    for (i = 0; i < pocet; i++)
        vypis_student(osoby[i]);

    cout << "\n  USPORIADANY zozn. " << pocet << " studentov zo sub 'studenti.txt' funkciou 'BubbleSort'" << endl;

        BS(osoby, pocet);
    for (i = 0; i<pocet; i++)
        vypis_student(osoby[i]);
    cout << endl;
    char sexzad;
    int bodyzad;
    char cityzad[30];
    cout << "---------------------------------------------------------" << endl;
    cout << "vlozte pohlavie hladanych studentov (zena / muz)\t\t: ";
    cin >> sexzad;
    cout << "vlozte maximalny pocet bodov na ubytovanie hladanych studentov\t: ";
    cin >> bodyzad;
    cout << "mesto bydliska hladanych studentov\t\t:";
    cin >> cityzad;
    cout << endl;
    int najdenych = 0;
    for (i = 0; i < pocet; i++){
        if (Najdi_studenta(osoby[i], sexzad, bodyzad, cityzad) == 1){
            najdenych++;
            vypis_student(osoby[i]);
        }}
    cout << endl;
    if (najdenych == 0)
        cout << "Hladany student sa nenasiel." << endl;
    else {
        cout << "Pocet najdenych studentov s pohlavim '" << sexzad << "', maximalnymi bodmi za ubytovanie '" << bodyzad << "'" << endl;
        cout << "a s bydliskom '" << cityzad << "': " << najdenych << endl;
    }
    cin >> i;
    return 0;
}}
