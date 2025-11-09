#include <iostream>
using namespace std;

void swap(int& x , int& y){
	int temp = x;
	x = y;
	y = temp;
}
 
int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
	cout<<n <<" "<< r <<endl; 
    swap( n , r);
	cout<<n <<" "<< r ; 
    return 0;
}
