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

	/*int count;
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
	}*/

	/*int num, maxvalueIndex;
	int maxvalue = -1;

	for (int i = 0; i < 9; i++)
	{
		cin >> num;

		if (num > maxvalue)
		{
			maxvalue = num;
			maxvalueIndex = i + 1;
		}
	}

	cout << maxvalue << "\n" << maxvalueIndex;*/

	/*int arr[9][9];
	int max = 0, row = 0, col = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				row = i;
				col = j;
			}
		}
	}

	cout << max << "\n" << row + 1 << " " << col + 1 << "\n";*/

	int n;
	cin >> n;

	int row = n / 2 + 1;
	int col = n - row + 2;
	int result = row * col;

	cout << result << "\n";
}