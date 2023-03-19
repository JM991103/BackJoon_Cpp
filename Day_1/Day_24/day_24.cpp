#include <iostream>
#include <vector>
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
	//vector<int> s(n, 0);

	//for (int i = 0; i < n; i++)
	//{
	//	cin >> a[i];
	//}

	//for (int i = 0; i < n; i++)	// 삽입 정렬
	//{
	//	int insert_point = i;
	//	int insert_value = a[i];

	//	for (int j = i - 1; j >= 0; j--)
	//	{
	//		if (a[j] < a[i])
	//		{
	//			insert_point = j + 1;
	//			break;
	//		}
	//		if (j == 0)
	//		{
	//			insert_point = 0;
	//		}
	//	}
	//	for (int j = i; j > insert_point; j--)
	//	{
	//		a[j] = a[j - 1];
	//	}a[insert_point] = insert_value;
	//}

	//s[0] = a[0];	// 합배열 만들기

	//for (int i = 1; i < n; i++)
	//{
	//	s[i] = s[i - 1] + a[i];
	//}

	//int sum = 0;	// 합 배열 총합 구하기

	//for (int i = 0; i < n; i++)
	//{
	//	sum = sum + s[i];
	//}
	//
	//cout << sum;

	//int a, b;
	//cin >> a;
	//cin >> b;

	//cout << a + b;

	//int a, b;

	//while (1)
	//{
	//	cin >> a >> b;

	//	if (a == 0 && b == 0)
	//	{
	//		break;
	//	}

	//	if (a > b)
	//	{
	//		cout << "Yes" << "\n";
	//	}
	//	else
	//	{
	//		cout << "No" << "\n";
	//	}
	//}

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int temp = a + b + c + d;
	cout << temp / 60 << "\n" << temp % 60;
	
}