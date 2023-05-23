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

	/*int n, tmp1, tmp2;

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
	}*/

	/*int a, b, total = 0, big = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> a >> b;

		total += -a + b;

		if (total > big)
		{
			big = total;
		}
	}

	cout << big;*/

	/*string k;

	int n;

	cin >> n;

	cin.ignore();

	while (n--)
	{
		getline(cin, k);

		if ('a' <= k[0] && k[0] <= 'z')
		{
			k[0] -= 32;
		}

		cout << k << '\n';
	}*/

	/*double a, b, c;
	cin >> a >> b >> c;
	if (a + b == c)
	{
		cout << a << '+' << b << '=' << c;
	}
	else if (a - b == c)
	{
		cout << a << '-' << b << '=' << c;
	}
	else if (a * b == c)
	{
		cout << a << '*' << b << '=' << c;
	}
	else if (a / b == c)
	{
		cout << a << '/' << b << '=' << c;
	}
	else if (a == b + c)
	{
		cout << a << '=' << b << '+' << c;
	}
	else if (a == b - c)
	{
		cout << a << '=' << b << '-' << c;
	}
	else if (a == b * c)
	{
		cout << a << '=' << b << '*' << c;
	}
	else if (a == b / c)
	{
		cout << a << '=' << b << '/' << c;
	}*/

	/*int t, paymoney;
	cin >> t;

	while (t--) {

		int Q = 0, D = 0, N = 0, P = 0;

		cin >> paymoney;

		while (paymoney) {
			if (paymoney >= 25)
			{
				Q++;
				paymoney -= 25;
			}
			else if (paymoney >= 10)
			{
				D++;
				paymoney -= 10;
			}
			else if (paymoney >= 5)
			{
				N++;
				paymoney -= 5;
			}
			else
			{
				P++;
				paymoney -= 1;
			}
		}
		cout << Q << " " << D << " " << N << " " << P << "\n";
	}*/

	/*string str1, str2;
	cin >> str1 >> str2;

	int cnt = 0;
	int cnt1 = 0;

	for (int i = 0; i < str1.length(); i++)
	{
		if (str1[i] == 'a')
		{
			cnt++;
		}
	}

	for (int i = 0; i < str2.length(); i++)
	{
		if (str2[i] == 'a')
		{
			cnt1++;
		}
	}

	if (cnt >= cnt1 || str1.length() == str2.length())
	{
		cout << "go";
	}
	else {
		cout << "no";
	}*/

	/*cout << "고려대학교" << endl;*/

	//int num, sum = 0;

	//while (true)
	//{
	//	cin >> num;

	//	if (num == -1)
	//	{
	//		break;
	//	}

	//	sum += num;
	//}

	//cout << sum;

	/*char c;

	cin >> c;

	if (c == 'N' || c == 'n')
	{
		cout << "Naver D2";
	}
	else
	{
		cout << "Naver Whale";
	}*/

	int s, k, h;
	cin >> s >> k >> h;

	if (s + k + h >= 100)
	{
		cout << "OK";
	}
	else 
	{
		if (s < k && s < h)
		{
			cout << "Soongsil";
		}
		else if (k < s && k < h)
		{
			cout << "Korea";
		}
		else if (h < s && h < k)
		{
			cout << "Hanyang";
		}
	}
	return 0;

}