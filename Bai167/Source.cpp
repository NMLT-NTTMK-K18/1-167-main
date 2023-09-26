#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int s = 0;
	int k = 0;

	if (s + k + 1 < n)
	{
		k = k + 1;
		s = s + k;
	}

	cout << "k = " << k;

	return 0;
}