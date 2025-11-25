#include <iostream>
#include <cmath>

using namespace std;


void towerhanoi (int n, char A, char B, char C) {
    if (n == 0) return;
    towerhanoi(n-1, A, C, B);
    cout << "Move ring " << n << " from " << A << " to " << C << endl;
    towerhanoi(n-1, B, A, C);
}

int main(){
    int a;
    towerhanoi(a, '1', '2', '3');
    return 0;
}
