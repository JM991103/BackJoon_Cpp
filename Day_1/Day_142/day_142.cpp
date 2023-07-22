#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

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

	int test, test1;
	cin >> test >> test1;

	string str;

	vector<string> vec;

	for (int i = 0; i < test; i++)
	{
		cin >> str;
		vec.push_back(str);
	}

	for (int i = 0; i < test; i++)
	{
		reverse(vec[i].begin(), vec[i].end());	// 문자열을 reverse함수로 뒤집는다.
		cout << vec[i] << "\n";
	}
}