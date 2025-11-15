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
	int s1 = 0, s2 = 0, s;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			s1 = s1 + a[i];
		}
		else
		{
			s2 = s2 + a[i];
		}
	}
	s = s1 - s2;
	cout << "oddSum-evenSum = " << s << " ";
	return 0;
}
