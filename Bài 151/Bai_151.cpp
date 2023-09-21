#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int flag = 1;
	int t = n;
	int du;

	while (t > 1)
	{
		du = t % 2;
		if (du != 0)
			flag = 0;
		t = t / 2;
	}

	if (flag == 1)
		cout << "La dang";
	else
		cout << "Ko la dang";

	return 0;
}