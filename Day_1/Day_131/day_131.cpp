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

	/*int n;
	int ans = 0;
	cin >> n;

	for (int i = 5; i <= n; i*=5)
	{
		ans += n / i;
	}
	cout << ans;*/

	int n;				// �Է¹��� �ܾ��� ����
	string word;		// �Է¹��� �ܾ�
	int count = 0;		// �׷� �ܾ �ƴ϶�� ī��Ʈ

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> word;

		// �ܾ�� ���ĺ� ������ ���������� ��Ÿ���� �迭 (���������� flase)
		bool alphabet[26] = { false };
		alphabet[(int)(word[0]) - 97] = true;	// ù��° �ܾ�� true�� ����

		for (int i = 1; i < word.length(); i++)
		{
			// 1. i��° ���ڰ� i-1��° ���ڿ� ������ �����̹Ƿ� �Ѿ��.
			if (word[i] == word[i - 1])
			{
				continue;
			}

			// 2. i��° ���ڰ� i-1��° ���ڿ� ���� �ʰ�, (�������� �ʰ�)
			// �ش� �迭���� true��� (�̹� ���Դ� ���ڶ��)
			else if (word[i] != word[i - 1] && alphabet[(int)(word[i]) - 97] == true)
			{
				count++;	// �׷�ܾ �ƴϹǷ� ī��Ʈ
				break;
			}

			// 3. ���� �� ��쿡 �ش����� �ʴ� ���
			// ó�� ������ ������ ���
			else
			{
				alphabet[(int)(word[i]) - 97] = true;
			}
		}
	}

	// �׷� �ܾ��� ���� = ��ü�ܾ��� ���� - �׷� �ܾ �ƴ� �ܾ� ����
	cout << n - count;
}