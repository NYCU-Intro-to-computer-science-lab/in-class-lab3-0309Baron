#include <iostream>
using namespace std;

int fib(int n){
    if(n==1) return 1;
    if(n==2) return 1;
    return fib(n-1) + fib(n-2);
}

void printIndent(int depth){
    for(int i=0;i<depth;i++) cout << "|--";
}

void get(int depth,int n){
    printIndent(depth);
    cout << "GET fib(" << n << ") = " << fib(n) << endl;
}

void search(int depth,int n){
    printIndent(depth);
    cout << "SEARCH fib(" << n << ")" << endl;
    if(n > 2){
        search(depth+1, n-1);
        search(depth+1, n-2);
    }

    get(depth, n);
}

void all(int n){
    if(n <= 0) return;
    search(0, n);
}

int main() {
    int n;
    cin >> n;
    all(n);
    cout << fib(n) << endl;
    return 0;
}
