#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a ASCII value: ";
	cin >> x;
	char ch = (char)x;  //typecasting
	cout <<ch;
	return 0;
}