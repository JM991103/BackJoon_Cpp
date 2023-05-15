#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	/*ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k, d, a;
	char trash;

	cin >> k >> trash >> d >> trash >> a;

	if (k + a < d || d == 0)
	{
		cout << "hasu";
	}
	else
	{
		cout << "gosu";
	}*/

	int n, tmp1, tmp2;

	while (1)
	{
		cin >> n;

		if (n == 0)
		{
			break;
		}

		while (n >= 10)
		{
			tmp1 = n, tmp2 = 0;

			while (tmp1 > 0)
			{
				tmp2 += tmp1 % 10;
				tmp1 /= 10;
			}

			n = tmp2;
		}

		cout << n << '\n';
	}
}