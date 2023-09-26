#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int ahh;
	int att = 1;
	int at = 1;
	int i = 2;

	while (i <= n)
	{
		ahh = at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << "ahh = " << ahh;
	return 0;
}