#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap x = ";
	int x;
	cin >> x;

	cout << "Nhap n = ";
	int n;
	cin >> n;

	int s = 1;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + (i + 1) * t;
		i = i + 1;
	}

	cout << "s = " << s;

	return 0;
}
