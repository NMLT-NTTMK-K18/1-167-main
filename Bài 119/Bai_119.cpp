#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float ahh;
	float at = 2;
	int i = 2;

	while (i <= n)
	{
		ahh = (at * at + 2) / (2 * at);
		i = i + 1;
		at = ahh;
	}
	cout << "ahh = " << ahh;
	return 0;
}