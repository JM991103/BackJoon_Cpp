#include <iostream>
using namespace std;

int main()
{
	//int n = 0;
	//int a[1000];
	//cin >> n;

	//for (int i = 0; i < n; i++)
	//{
	//	cin >> a[i];
	//}

	//long sum = 0;
	//long max = 0;

	//for (int i = 0; i < n; i++)
	//{
	//	if (a[i] > max)
	//	{
	//		max = a[i];
	//	}
	//	sum = sum + a[i];
	//}

	//// �� ���� ���õ� ������ ��� ���� �� ���õ� �������� ��ȯ�� ������ ��������
	//double result = sum * 100.0 / max / n;
	//cout << result << "\n";


	//long long a, b, c;

	//cin >> a >> b >> c;
	//cout << a + b + c;


	//int dan = 0;

	//cin >> dan;

	//for (int i = 1; i < 10; i++)
	//{
	//	cout << dan << " * " << i << " = " << dan * i << endl;
	//}

	//int n = 0;
	//int a[1000];
	//long max = 0;
	//long sum = 0;
	//cin >> n;
	//
	//for (int i = 0; i < n; i++)
	//{
	//	cin >> a[i];
	//}

	//for (int i = 0; i < n; i++)
	//{
	//	if (a[i] > max)
	//	{
	//		max = a[i];
	//	}
	//	sum += a[i];
	//}

	//double result = sum * 100.0 / max / n;
	//cout << result << endl;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int suNo = 0;
	int quizNo = 0;
	int s[100001] = {};

	cin >> suNo >> quizNo;

	for (int i = 1; i <= suNo; i++)
	{
		int temp;
		cin >> temp;
		s[i] = s[i - 1] + temp;	
		// s[i-1] + temp�� ���� ���� s[1]���� ä�� �ֱ�
		// 5 4 3 2 1 ����
		// 0 5 9 12 14 15
	}

	for (int i = 0; i < quizNo; i++)
	{
		int start, end;
		cin >> start >> end;
		cout << s[end] - s[start - 1] << "\n";
		// �Է� ���� ��(1, 3) : S[3] - S[0] = 12 - 0 = 12
	}


	return 0;
}