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
	//	// T = (N % 10) * 10	// T�� 10�� �ڸ���
	//	// (N / 10) + (N % 10)	// N�� 10�� �ڸ����� 1�� �ڸ����� ����
	//	// T = ((N / 10) + (N % 10)) % 10	// ���� ���� 1�� �ڸ����� T�� 1�� �ڸ����� ��
	//	// (T�� 10�� �ڸ���)			(T�� 1�� �ڸ���)
	//	// -----------------   --------------------------
	//	// T = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10	

	//	N = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10;
	//	
	//	count++;

	//} while (n != N);

	//cout << count;

	int n;
	int ans = 0;
	cin >> n;

	for (int i = 5; i <= n; i*=5)
	{
		ans += n / i;
	}
	cout << ans;
}