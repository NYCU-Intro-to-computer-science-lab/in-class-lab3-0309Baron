// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
using namespace std;


bool isPrime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0)return false;
        break;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for(int i=2;i<=n/2;i++){
        if(isPrime(i) && isPrime(n-i)){
            cout << i << " " << n-i << endl;
            break;
        }
    }

    
    return 0;
}
