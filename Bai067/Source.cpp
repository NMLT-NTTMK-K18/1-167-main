#include <iostream>
using namespace std;

int main()
{
	cout << "nhap n = ";
	int n;
	cin >> n;

	int flag = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 1;
		t = t / 10;
	}

	if (flag == 1)
		cout << "TT so le";
	else
		cout << "khong TT so le";

	return 0;
}