#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int ahh;
	int bhh;
	int at = 2;
	int bt = 1;
	int i = 2;

	while (i <= n)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << "ahh = " << ahh << " va bhh = " << bhh;
	return 0;
}