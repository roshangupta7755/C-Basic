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
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
		{
		min = a[i];
		}
	}
	cout << "Min array element = " <<min << " ";
	return 0;
}
