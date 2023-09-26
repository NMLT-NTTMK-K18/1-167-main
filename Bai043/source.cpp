#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap n=";
	int n;
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + (float)1 / (i * (i + 1)*(i+2));
		i = i + 1;
	}
	cout << "s=" << s;
	return 0;
}