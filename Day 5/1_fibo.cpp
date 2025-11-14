#include <iostream>
using namespace std;

int fibo(int x ) {
    if (x == 2 || x == 1)
        return 1;
    return fibo(x- 1) + fibo(x- 2);
}

int main() {
    int a ;
    cout << "Enter n: ";
    cin >> a;
     
    cout << fibo(a);
    return 0;
}
