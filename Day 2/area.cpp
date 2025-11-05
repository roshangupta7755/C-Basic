// Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter
#include <iostream>
using namespace std;
int main()
{
	int l;
	cout << "Enter length value: ";
	cin >> l;
	int h;
	cout << "Enter breadth value: ";
	cin >> h;
	int a = l * h;
	int p = 2 * (l + h);
	if (a > p)
	{
		cout << "Area is greater than perimeter";
	}
	else
	{
		cout << "Perimeter is greater than area";
	}

	return 0;
}