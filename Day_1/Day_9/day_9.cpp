#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//int n, m;
	//cin >> n >> m;
	//vector<int> a(n, 0);

	//for (int i = 0; i < n; i++)
	//{
	//	cin >> a[i];
	//}
	//sort(a.begin(), a.end());

	//int count = 0;
	//int i = 0;
	//int j = n - 1;

	//while (i < j)	// 투 포인터 이동 원칙에 따라 포인터를 이동하여 처리
	//{
	//	if (a[i] + a[j] < m)
	//	{
	//		i++;
	//	}
	//	else if(a[i] + a[j] > m)
	//	{
	//		j--;
	//	}
	//	else
	//	{
	//		count++;
	//		i++;
	//		j--;
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

	int i = 0;
	int j = n - 1;
	int count = 0;

	while (i < j)
	{
		if (a[i] + a[j] < m)
		{
			i++;
		}
		else if (a[i] + a[j] > m)
		{
			j--;
		}
		else
		{
			count++;
			i++;
			j--;
		}
	}
	cout << count << endl;

	return 0;
}