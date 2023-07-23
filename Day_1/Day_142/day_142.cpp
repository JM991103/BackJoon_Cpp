#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int divide(int x, int y)
{
	if (x % y == 0)
		return y;
	else
		return divide(y, x % y);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	/*int answer = 0;
	char pan[8][9];

	for (int i = 0; i < 8; i++)
	{
		cin >> pan[i];
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = i % 2; j < 8; j += 2)
		{
			if (pan[i][j] == 'F')
			{
				answer++;
			}
		}
	}

	cout << answer;*/

	/*long x, y;
	cin >> x >> y;
	cout << x * y / 2;*/

	/*int n, a, b, c;
	cin >> n;

	while (n--)
	{
		cin >> a >> b >> c;
		cout << min(a, min(b, c)) << "\n";
	}*/

	//int test, test1;
	//cin >> test >> test1;

	//string str;

	//vector<string> vec;

	//for (int i = 0; i < test; i++)
	//{
	//	cin >> str;
	//	vec.push_back(str);
	//}

	//for (int i = 0; i < test; i++)
	//{
	//	reverse(vec[i].begin(), vec[i].end());	// ���ڿ��� reverse�Լ��� �����´�.
	//	cout << vec[i] << "\n";
	//}

	int t;
	int a, b;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;

		if (a >= b)
		{
			cout << a * b / divide(a, b) << "\n";
		}
		else
		{
			cout << a * b / divide(b, a) << "\n";
		}
	}
}