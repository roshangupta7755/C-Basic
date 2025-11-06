#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= x; j++) {
            if (i == (x + 1) / 2 || j == (x + 1) / 2)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
