#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter a number: ";
	cin >> x;
	int a = 1;
	 
	for (int i = 1; i <= x; i++){
		for (int j = 1; j <= i; j++)
		{
			if ((i+j)%2==0)
			{
				cout<<1<<" ";
			}
			else
			{
				cout<<0<<" ";
			}
			
			
		}
		cout<<endl;
	}

	return 0;
}