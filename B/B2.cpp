#include<time.h>
#define VYMEN(a, b) { long tmp = a; a = b; b = tmp; }
#include<iostream>
using namespace std;

int FindNumb(int x, int field[], int length){
    int i = 0;
    while (i < length && field[i] != x)
        i++;
    if (i < length)
        return i;
    else
        return -1;
}

int main(){
    int x, length;
    int stat_field[100];
    int v = 0;

    cout << "vlozte velkost prehladavanej casti pola \"stat_field\" max (100): ";
    cin >> length;
    srand((unsigned)time(NULL));

    for (v = 0; v < length; v++)
        stat_field[v] = (double)rand() / (RAND_MAX + 1) * 80 + 1;

    cout << length << " vygenerovanych prvkov pola \"stat_field\"" << endl;
    for (v = 0; v < length; v++)
    cout << "stat_field[" << v << "] = " << stat_field[v] << endl;
    cout << endl;
    cout << "vlozte hladane cislo v zobrazenej casti pola \"stat_field\":" << endl;
    cin >> x;

    int index;
    index = FindNumb(x, stat_field, length);
    if (index > -1){
        cout << "Index prvku pola \"stat_field\" obsahujuci hladane (najdene linearnym vyhladavanim) cislo: " << x << " je : " << index << endl;
    }
    else{
        cout << "Hladane cislo: " << x << " sa nenachadza v poli \"stat_field\"" << endl;
    }

    return 0;
}
