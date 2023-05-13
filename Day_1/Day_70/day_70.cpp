#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//int n, score = 0, res[100], bonus = 0;
	//cin >> n;

	//for (int i = 1; i <= n; i++) {
	//	cin >> res[i];
	//	if (res[i] == 1) // 정답이면, 1점 추가
	//	{ 
	//		score++;
	//		if (res[i - 1] == 1) // 정답이면서, 이전 문제도 정답이면, 가산점에 1점 추가
	//		{ 
	//			bonus++;
	//			score += bonus; // 총 점수에 가산점을 더함.
	//		}
	//		else 
	//		{
	//			bonus = 0;
	//		}
	//	}
	//}
	//cout << score;

	/*int ans[10000] = { 10000 }, n, k, cnt = 0, p = 0;

	cin >> n >> k;

	for (int i = 1; i < 10000; i++)
	{
		if (i > n)
		{
			break;
		}
		if (n % i == 0)
		{
			cnt++;
			ans[p++] = i;
		}
	}

	if (cnt < k)
	{
		cout << "0";
	}
	else
	{
		cout << ans[k - 1];
	}*/

	/*int t;
	cin >> t;

	while (t--)
	{
		int n;

		cin >> n;

		string stringN = to_string(n);

		string stringSquare = to_string(n * n);

		if (stringSquare.find(stringN) == stringSquare.size() - stringN.size())
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}*/

	/*int k, n, m;
	cin >> k >> n >> m;
	if (k * n > m)
	{
		cout << k * n - m << "\n";
	}
	else
	{
		cout << 0 << "\n";
	}*/

	/*string name;

	cin >> name;

	if (name == "NLCS")
	{
		cout << "North London Collegiate School";
	}
	else if (name == "BHA")
	{
		cout << "Branksome Hall Asia";
	}
	else if (name == "KIS")
	{
		cout << "Korea International School";
	}
	else if (name == "SJA")
	{
		cout << "St. Johnsbury Academy";
	}	*/

	/*int n, m;
	int a, b;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
	}
	cout << "비와이";*/

	/*int n;
	cin >> n;

	if (n % 8 >= 1 && n % 8 <= 5) {
		cout << n % 8;
	}
	else if (n % 8 == 6) {
		cout << "4\n";
	}
	else if (n % 8 == 7) {
		cout << "3\n";
	}
	else if (n % 8 == 0) {
		cout << "2\n";
	}*/

	//int a, b;
	//cin >> a >> b;

	//int n[1000];
	//int cnt = 0;

	//for (int i = 1; cnt < 1000; i++) 
	//{
	//	for (int j = 0; j < i; j++) 
	//	{
	//		n[cnt++] = i; //cnt는 for문과 상관없이 이 줄이 끝나면 1씩 증가
	//		if (cnt == 1000) //n배열을 다 채우면 break;
	//			
	//		break;
	//	}
	//}

	//int sum = 0;

	//for (int i = a - 1; i <= b - 1; i++) //a번째는 n[a-1]값이고, b번째는 n[b-1]값 이므로
	//{ 
	//	sum += n[i];
	//}
	//cout << sum << endl;

	int n;
	cin >> n;

	for (int t = 0; t < n; t++)
	{
		int N;
		cin >> N;

		long long sum = 0;

		for (int i = 0; i < N; i++)
		{
			long long candyCnt;
			cin >> candyCnt;

			sum = (sum + candyCnt) % N;
		}

		cout << (sum % N ? "NO\n" : "YES\n");
	}
}