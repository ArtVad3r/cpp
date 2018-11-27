#include<time.h>
#include<iostream>
using namespace std;
int FindB(int x, int field[], int length){
    int start = 1;
    int END = 20;
    int pivot;
    pivot = (start + END) / 2;

    while (start <= END && field[pivot] != x){
        if (field[pivot] < x)
            start = pivot + 1;
        else
            END = pivot - 1;
        pivot = (start + END) / 2;
    }
    if (field[pivot] == x){
        cout << "\nZhoda na indexe najdena : " << pivot << endl;
    }
    else{
        cout << "Zhoda nenajdena" << endl;
    }
    return pivot;
}

int main(){
    int i, x, length;
    int field[101];
    cout << "Zadajte velkost pola: ";
    cin >> length;

    srand((unsigned)time(NULL));

    field[0] = (long)rand() % 80;
    for (i = 1; i <= length; i++)
        field[i] = field[i-1] + rand()%80;

    for (i = 1; i <= length; i++)
        cout << "stat_field [" << i-1 << "] : " << field[i-1] << endl;

    cout << "Zadajte hladane cislo: ";
    cin >> x;
    int index;
    index = FindB(x, field, length);

    return 0;
}
