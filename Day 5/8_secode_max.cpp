#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    int max1, max2;

    if (a[0] > a[1]) {
        max1 = a[0];
        max2 = a[1];
    } else {
        max1 = a[1];
        max2 = a[0];
    } 
    for (int i = 2; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2 && a[i] != max1)
        {
            max2 = a[i];
        }
    }

    cout << "Second Max array element = " << max2;

    return 0;
}
