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
	//	if (sum == n)		// 답을 찾았을 때
	//	{
	//		count++;
	//		end_index++;
	//		sum = sum + end_index;
	//	}
	//	else if (sum > n)	// 현재 합이 답보다 클 때
	//	{
	//		sum = sum - start_index;
	//		start_index++;
	//	}
	//	else				// 현재 합이 답보다 작을 때
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