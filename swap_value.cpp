#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	int b = 2;
	cout << "Enter Value for a: "; cin >> a;
	cout << "Enter Value for b: "; cin >> b;
	
	cout << "\nbefore swap: " << a << " and " << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "\nAfter swap: " << a << " and " << b;
	return 0;
}