#include <iostream>
using namespace std;
int main()
{
	cout << "Nhap n=";
	int n;
	cin >> n;
	int tich = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv%2!=0)
		   tich = tich * dv;
		t = t / 10;

	}
	cout << "tich cac chu so le cua so nguyen duong " << n << " la:" << tich;
	return 0;
}
