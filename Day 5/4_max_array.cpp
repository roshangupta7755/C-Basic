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
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	cout << "Max array element = " << max << " ";
	return 0;
}
