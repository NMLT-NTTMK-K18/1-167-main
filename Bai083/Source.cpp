#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Nhap x = ";
	float x;
	cin >> x;

	cout << "Nhap n = ";
	int n;
	cin >> n;

	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + sin(t);
		i = i + 1;
	}

	cout << "s = " << s;

	return 0;
}
