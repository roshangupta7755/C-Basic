#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number : ";
	cin >> n;
	int a[n];
	cout << "Enter " << n << " " << "elements: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] * a[i] << " ";
	}

	return 0;
}
