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
	//	reverse(vec[i].begin(), vec[i].end());	// 문자열을 reverse함수로 뒤집는다.
	//	cout << vec[i] << "\n";
	//}

	/*int t;
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
	}*/

	/*int n, m;
	long long pSum[301][301];
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> pSum[i][j];
			pSum[i][j] += pSum[i][j - 1] + pSum[i - 1][j] - pSum[i - 1][j - 1];
		}
	}

	int k;
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		cout << pSum[c][d] - pSum[a - 1][d] - pSum[c][b - 1] + pSum[a - 1][b - 1] << "\n";
	}*/

	/*int n, s;
	while (cin >> n >> s)
	{
		cout << s / (n + 1) << "\n";
	}*/

	/*int n, m;
	int a, b, c, d, q, r;
	cin >> n >> m;
	a = 100 - n;
	b = 100 - m;
	c = 100 - (a + b);
	d = a * b;
	q = d / 100;
	r = d % 100;

	cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << ' ' << "\n";
	cout << c + q << ' ' << r << "\n";*/

	string n;
	cin >> n;

	if (n == "SONGDO")
	{
		cout << "HIGHSCHOOL";
	}
	else if (n == "CODE")
	{
		cout << "MASTER";
	}
	else if (n == "2023")
	{
		cout << "0611";
	}
	else if (n == "ALGORITHM")
	{
		cout << "CONTEST";
	}
}