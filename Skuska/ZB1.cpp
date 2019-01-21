#include <iostream>
using namespace std;

float derivaciaP(float **body, int a){
    double h=body[1][0]-body[0][0];
    float der = 3*body[a][1]-4*body[a-1][1]+body[a-2][1];
    return der/(2*h);
}

int main()
{
    int i;
    char x;

    cin >> i;

    float ** values = new float*[i];

    for (int a=0; a<i; a++){
        values[a] = new float[2];
        cin >> values[a][0] >> values[a][1];
    }
    cin >> x;

    if (x=='R')
        cout << '\n' <<derivaciaP(values, i-1) << '\n';
    return 0;
}
