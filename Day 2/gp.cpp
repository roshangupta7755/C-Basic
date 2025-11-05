#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter a number: ";
	cin >> x;
	int n;
	cout << "Enter ,How many time you want: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		x *= 3;
		cout << x << " \n";
	}

	return 0;
}