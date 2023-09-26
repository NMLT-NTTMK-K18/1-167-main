#include <iostream>
using namespace std;
int main()
{
	cout << "nhap n=";
	int n;
	cin >> n;
	int lc = n % 10;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	cout << "lc=" << lc;
	return 0;
}