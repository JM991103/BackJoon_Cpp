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

	/*int n;
	cin >> n;

	int row = n / 2 + 1;
	int col = n - row + 2;
	int result = row * col;

	cout << result << "\n";*/

	//int n;
	//int x = 2;

	//cin >> n;

	//while (n--)
	//{
	//	x += (x - 1); // 변의 길이를 구함
	//}

	//x *= x;	// 전체 점의 개수를 구함

	//cout << x << "\n";

	/*int n, m;

	cin >> n >> m;

	cout << n * (m - 1) + 1 << endl;

	return 0;*/

	/*int a, b, n;
	int anum = 0, bnum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		if (a > b)
		{
			anum++;
		}
		else if(b > a)
		{
			bnum++;
		}
		else
		{
			continue;
		}
	}

	cout << anum << " " << bnum << "\n";*/

	/*int price, num;
	cin >> price;

	for (int i = 0; i < 9; i++)
	{
		cin >> num;
		price -= num;
	}

	cout << price << "\n";*/

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string k;
		cin >> k;

		if (k[k.length() - 1] % 2 == 0)
		{
			cout << "even" << "\n";
		}
		else
		{
			cout << "odd" << "\n";
		}
	}
}