#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//int n;
	//cin >> n;
	//int count = 1;
	//int start_index = 1;
	//int end_index = 1;
	//int sum = 1;

	//while (end_index != n)
	//{
	//	if (sum == n)		// ���� ã���� ��
	//	{
	//		count++;
	//		end_index++;
	//		sum = sum + end_index;
	//	}
	//	else if (sum > n)	// ���� ���� �亸�� Ŭ ��
	//	{
	//		sum = sum - start_index;
	//		start_index++;
	//	}
	//	else				// ���� ���� �亸�� ���� ��
	//	{
	//		end_index++;
	//		sum = sum + end_index;
	//	}
	//}
	//cout << count << "\n";

	int n, m;
	cin >> n >> m;
	vector<int> a(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	int count = 0;
	int i = 0;
	int j = n - 1;

	return 0;
}