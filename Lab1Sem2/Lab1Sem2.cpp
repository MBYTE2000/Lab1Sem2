#include <iostream>
#include <stdio.h>

using namespace std;

double fun(double x, int n)
{
	if (n == 1) return x;
	return x*fun(x, n - 1);
}

int main()
{
	double x = 0;
	cin >> x;
	double y = 0;
	int n = 0;
	cin >> n;
	
	if (n%2 == 0)
	{
		y = pow(x, n / 2.) * pow(x, n / 2);
	}
	else
	{
		y = fun(x , n);
	}

	cout << "\n\n" << y << endl;
	return 0;
}