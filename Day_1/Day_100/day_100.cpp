#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	/*int n, f;

	cin >> n >> f;

	n -= n % 100;	

	for (int i = n; ; i++) 
	{
		if (i % f == 0)
		{
			if (i % 100 < 10)
			{
				cout << "0";
			}

			cout << i % 100;

			break;
		}

	}*/

	int count;
	cin >> count;

	for (int i = 1; i <= count; i++) 
	{
		for (int j = 1; j <= count - i; j++) 
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++) 
		{
			cout << "*";
		}

		cout << "\n";
	}
}