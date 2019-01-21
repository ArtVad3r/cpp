#include <iostream>
using namespace std;

float derL(float **pts, int a){
    double h;
    float pom;

    h = pts[1][0]-pts[0][0];
    pom = -3*pts[a][1]+4*pts[a+1][1]-pts[a+2][1];

    return pom/(2*h);
}

int main()
{
    int i;
    char A;

    cin >> i;
    float ** hod = new float*[i];

    for (int i=0; i<i; i++)
    {
        hod[i] = new float[2];
        cin >> hod[i][0] >> hod[i][1];
    }

    cin >> A;
    if (A == 'A')
        cout << '\n' << derL(hod, 0) << '\n';

    return 0;
}
