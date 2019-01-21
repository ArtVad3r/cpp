#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
struct Student {
    string name;
    string sname;
    int RC;
    int pts;
    string whereabouts;
    int distance;
};
int year(int rc) {
    int yy = (rc / 10000);
    if (yy < 17) return yy + 2000;
    else return yy + 1900;
}
int day(int rc){
    return rc % 100;
}
int month(int rc) {
    int mm = ((rc % 10000) / 100);
    if (mm > 12) return mm - 50;
    else return mm;
}
int PorovnajStudentov(Student *ss, Student *sp) {
    if (ss->pts < sp->pts) return 1;
    if (ss->pts > sp->pts) return 0;
    if (ss->distance < sp->distance) return 1;
    if (ss->distance > sp->distance) return 0;
    int r1 = year(ss->RC);
    int r2 = year(sp->RC);
    if (r1 < r2) return 1;
    if (r1 > r2) return 0;
    int m1 = month(ss->RC);
    int m2 = month(sp->RC);
    if (m1 < m2) return 1;
    if (m1 > m2) return 0;
    int d1 = day(ss->RC);
    int d2 = day(sp->RC);
    if (d1 < d2) return 1;
    if (d1 > d2) return 0;
    return 0;

}
void SS(Student **A, int ammount) {
    int m = ammount;
    while (m /= 2)
        for (int d = ammount - m, i = 0; i < d; i++)
            for (int j = i; (j >= 0) && (PorovnajStudentov(A[j], A[j + m])); j -= m)
                swap(A[j], A[j + m]);
}
int Iwoman(int c) {
    return (c % 10000 > 5000);
}
void ExDate(int c) {
    cout << c % 100 << ". " << (c / 100) % 50 << ". " << year(c);
}

void vStud(Student *s) {
    cout << s->sname << " " << s->name << "\t";
    cout << "(" << s->pts << ")" << " ";
    cout << s->RC << ", ";
    if (Iwoman(s->RC))
        cout << "z" << ", ";
    else
        cout << "m" << ", ";
    ExDate(s->RC);
    cout << "\t" << s->whereabouts << "\t";
    cout << "(" << s->distance << ")" << " ";
    cout << endl;
}
void vypis_studentov(Student **st, int amm) {
    for (int i = 0; i < amm; i++)
        vStud(st[i]);
}
int main() {
    Student** studenti = new Student*[100];
    string mm, pp, byd;
    int i, pts, vzd;
    int count = 0;
    ifstream in;
    in.open("studenti.txt");
    if (!in)
    {
        cout << "Subor sa nepodarilo otvorit";
        return 0;
    }
    for (; in >> mm >> pp >> i >> pts >> byd >> vzd; count++) {
        studenti[count] = new Student();
        studenti[count]->name = mm;
        studenti[count]->sname = pp;
        studenti[count]->RC = i;
        studenti[count]->pts = pts;
        studenti[count]->whereabouts = byd;
        studenti[count]->distance = vzd;
    }
    cout << " neusporiadany zoznam " << count << " studentov zo suboru 'studenti.txt'" << endl;
    vypis_studentov(studenti, count);
    SS(studenti, count);
    cout << endl;
    cout << "USPORIADANY zozn. " << count << " studentov zo sub 'studenti.txt' funkciou 'ShellSort'" << endl;
    vypis_studentov(studenti, count);
    cout << endl;
    cout << "-----------------------------------------" << endl;
    cout << "vlozte pohlavie hladanych studentov (zean(z)/muz(m))\t\t\t:";
    char pohlavie;

    cin >> pohlavie;
    if (pohlavie == 'z' || pohlavie == 'm') {
        cout << "vlozte maximalny pocet bodov na ubytovanie hladanych studentov\t\t:";
        int maxb, minv;
        cin >> maxb;
        cout << "vlozte minimalnu vzdialenost bydliska od skoly hladanych studentov\t:";
        cin >> minv;
        cout << endl;
        Student** najdeni = new Student*[count];
        int pocetNajdenych = 0;
        for (int i = 0; i < count; i++) {
            if ((studenti[i]->pts <= maxb) && (studenti[i]->distance >= minv)) {
                if (pohlavie == 'z' && Iwoman(studenti[i]->RC))
                    najdeni[pocetNajdenych++] = studenti[i];
                if (pohlavie == 'm' && !Iwoman(studenti[i]->RC))
                    najdeni[pocetNajdenych++] = studenti[i];
            }
        }
        vypis_studentov(najdeni, pocetNajdenych);
        cout << endl << "pocet najdenych studentov s pohlavim '" << pohlavie << "', maximalnymi bodmi za ubytovanie '" << maxb << "'";
        cout << endl << "a s minimalnou vzdialenostou bydliska od skoly '" << minv << "': " << pocetNajdenych << endl;
        delete[] najdeni;
    }
    for (int i = 0; i < count; i++)
        delete studenti[i];
    delete[] studenti;
}
