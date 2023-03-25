#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	/*vector<int> a(5, 0);
	int temp = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		temp += a[i];
	}

	cout << temp;*/

	/*int n;
	cin >> n;
	int temp = n * 0.22;
	int temp2 = n - temp;
	int temp3 = temp * 0.2;
	int temp4 = n - temp3;
	cout << temp2 << " " << temp4;*/

	/*int n;
	cin >> n;

	for (int i = n; i > 0; i--)
	{
		cout << i << "\n";
	}*/

	//vector<int> a(3, 0);

	//for (int i = 0; i < 3; i++)
	//{
	//	cin >> a[i];
	//}

	//sort(a.begin(), a.end());

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << a[i] << " ";
	//}

	int n, m, temp;
	cin >> n >> m;

	for (int i = 0; i < 5; i++)
	{
		cin >> temp;
		cout << temp  - n * m<< " ";
	}
}