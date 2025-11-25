#include <iostream>
#include <cmath>
#include <string>
using namespace std;


void towerhanoi (int n, char A, char B, char C) {
    if (n == 0) return;
    towerhanoi(n-1, A, C, B);
    cout << "Move ring " << n << " from " << A << " to " << C << endl;
    towerhanoi(n-1, B, A, C);
}

int main(){
    int a,e,f,g;
    cin >> a;
    e=1;
    f=2;
    g=3;
    char b='0'+e;
    char c='0'+f;
    char d='0'+g;
    towerhanoi(a, b, c, d);
    return 0;
}
