#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		i = i + 1;
	}

	cout << "t = " << t;

	return 0;
}