#include <iostream>
using namespace std;
int main()
{
	cout << "Nhap x=";
	float x;
	cin >> x;
	cout << "Nhap n=";
	int n;
	cin >> n;
	float s = x;
	int t = x;
	int i = 3;
	while (i <=2 * n + 1)
	{
		t = t * x * x;
		s = s + t;
		i = i + 2;
	}
	cout << "s=" << s;
	return 0;
}