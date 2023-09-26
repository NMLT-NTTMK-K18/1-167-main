#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x=";
	cin >> x;
	int n;
	cout << "Nhap n=";
	cin >> n;
	float t = x;
	int i = 1;
	while (i <= n)
	{
		t = t * (x + i);
		i = i + 1;
	}
	cout << "t=" << t;
	return 0;
}
