#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<pair<int, int>> a(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i].first;
		a[i].second = i;
	}

	sort(a.begin(), a.end());	// �迭 A ���� �ð� ���⵵ : O(nlogn)
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		// ���� �� index - ���� �� index�� ����� �� �� �ִ��� ã�� ����
		if (max < a[i].second - i)
		{
			max = a[i].second - i;
		}
	}
	cout << max + 1;
}