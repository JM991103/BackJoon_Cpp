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

	/*int k[3];

	cin >> k[0];
	cin >> k[1];
	cin >> k[2];

	sort(k, k + 3);

	cout << max(k[2] - k[1], k[1] - k[0]) - 1 << "\n";*/

	/*int n;
	int arr[51];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);
	int ans = arr[0] * arr[n - 1];

	cout << ans;*/

	/*int n;
	cin >> n;

	cout << "1" << "\n" << "0";*/

	//int n, N;
	//int count = 0;
	//cin >> n;

	//N = n;

	//do
	//{
	//	// T = (N % 10) * 10	// T의 10의 자리수
	//	// (N / 10) + (N % 10)	// N의 10의 자리수와 1의 자리수를 더함
	//	// T = ((N / 10) + (N % 10)) % 10	// 더한 값의 1의 자리수가 T의 1의 자리수가 됨
	//	// (T의 10의 자리수)			(T의 1의 자리수)
	//	// -----------------   --------------------------
	//	// T = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10	

	//	N = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10;
	//	
	//	count++;

	//} while (n != N);

	//cout << count;

	/*int n;
	int ans = 0;
	cin >> n;

	for (int i = 5; i <= n; i*=5)
	{
		ans += n / i;
	}
	cout << ans;*/

	//int n;				// 입력받을 단어의 갯수
	//string word;		// 입력받은 단어
	//int count = 0;		// 그룹 단어가 아니라면 카운트

	//cin >> n;
	//for (int i = 0; i < n; i++)
	//{
	//	cin >> word;

	//	// 단어에서 알파벳 문자의 출현유무를 나타내는 배열 (출현없으면 flase)
	//	bool alphabet[26] = { false };
	//	alphabet[(int)(word[0]) - 97] = true;	// 첫번째 단어값을 true로 변경

	//	for (int i = 1; i < word.length(); i++)
	//	{
	//		// 1. i번째 문자가 i-1번째 문자와 같으면 연속이므로 넘어간다.
	//		if (word[i] == word[i - 1])
	//		{
	//			continue;
	//		}

	//		// 2. i번째 문자가 i-1번째 문자와 같지 않고, (연속하지 않고)
	//		// 해당 배열값이 true라면 (이미 나왔던 문자라면)
	//		else if (word[i] != word[i - 1] && alphabet[(int)(word[i]) - 97] == true)
	//		{
	//			count++;	// 그룹단어가 아니므로 카운트
	//			break;
	//		}

	//		// 3. 위의 두 경우에 해당하지 않는 경우
	//		// 처음 등장한 문자인 경우
	//		else
	//		{
	//			alphabet[(int)(word[i]) - 97] = true;
	//		}
	//	}
	//}

	//// 그룹 단어의 개수 = 전체단어의 개수 - 그룹 단어가 아닌 단어 개수
	//cout << n - count;

	/*long long s;
	cin >> s;

	long long sum = 0, num = 1;
	int cnt = 0;

	while (1)
	{
		sum += num;
		cnt++;
		if (sum > s)
		{
			cnt--;
			break;
		}
		num++;
	}

	cout << cnt;*/

	/*int month, date;
	cin >> month >> date;

	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int totalday = 0;

	totalday += date;
	for (int i = 0; i < month - 1; i++)
	{
		totalday += days[i];
	}

	switch (totalday % 7)
	{
	case 0:
		cout << "SUN";
		break;
	case 1:
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	}*/

	int n;
	cin >> n;
	int i = 0;
	
	while (n > i)
	{
		n -= i;
		i++;
	}

	if (i % 2 == 1)
	{
		cout << i + 1 - n << "/" << n << endl;
	}
	else
	{
		cout << n << "/" << i + 1 - n << endl;
	}
}