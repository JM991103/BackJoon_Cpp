#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//int n;
	//cin >> n;
	//vector<int> a(n, 0);

	//for (int i = 0; i < n; i++)
	//{
	//	cin >> a[i];
	//}
	//sort(a.begin(), a.end());

	//int result = 0;

	//for (int k = 0; k < n; k++)
	//{
	//	long find = a[k];
	//	int i = 0;
	//	int j = n - 1;

	//	while (i < j)	// 투 포인터 알고리즘
	//	{
	//		if (a[i] + a[j] == find)	// 서로 다른 두 수의 합인지 체크
	//		{
	//			if (i != k && j != k)
	//			{
	//				result++;
	//				break;
	//			}
	//			else if (i == k)
	//			{
	//				i++;
	//			}
	//			else if (j == k)
	//			{
	//				j--;
	//			}
	//		}
	//		else if (a[i] + a[j] < find) 
	//		{
	//			i++;
	//		}
	//		else
	//		{
	//			j--;
	//		}			
	//	}
	//}
	//cout << result << endl;

	//int n;
	//cin >> n;
	//vector<int> a(n, 0);

	//for (int i = 0; i < n; i++)
	//{
	//	cin >> a[i];
	//}
	//sort(a.begin(), a.end());

	//int result = 0;

	//for (int k = 0; k < n; k++)
	//{
	//	long find = a[k];
	//	int i = 0;
	//	int j = n - 1;

	//	while (i < j)
	//	{
	//		if (a[i] + a[j] == find)
	//		{
	//			if (i != k && j != k)
	//			{
	//				result++;
	//				break;
	//			}
	//			else if(i == k)
	//			{
	//				i++;
	//			}
	//			else if(j == k)
	//			{
	//				j--;
	//			}
	//		}
	//		else if(a[i] + a[j] < find)
	//		{
	//			i++;
	//		}
	//		else
	//		{
	//			j--;
	//		}
	//	}
	//}
	//cout << result << endl;

	/*long long n, m;
	cin >> n >> m;
	cout << abs(n - m);*/

	string str;

	while (true)
	{
		getline(cin, str);
		if (str == "")
		{
			break;
		}
		cout << str << endl;
	}

}
