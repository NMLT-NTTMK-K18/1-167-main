#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int t = 1;
	int i = 0;

	while (i <= n)
	{
		t = t * 2;
		cout << t << " ";
		i = i + 1;
	}

	return 0;
}