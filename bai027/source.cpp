#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap n=";
	int n;
	cin >> n;
	int s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + i;
		i = i + 1;
	}
	cout << "s=" << s;
	return 0;

}