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

	sort(a.begin(), a.end());	// 배열 A 정렬 시간 복잡도 : O(nlogn)
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		// 정렬 전 index - 정렬 후 index를 계산한 값 중 최댓값을 찾아 저장
		if (max < a[i].second - i)
		{
			max = a[i].second - i;
		}
	}
	cout << max + 1;
}