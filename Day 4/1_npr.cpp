#include <iostream>
using namespace std;

int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++)
        f *= i;
    return f;
}

int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    int nPr = fact(n) / ( fact(n - r));

    cout << "nPr = " << nPr << endl;
    return 0;
}
