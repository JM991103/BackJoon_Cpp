#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//int n, m;
	//cin >> n >> m;

	//vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
	//vector<vector<int>> d(n + 1, vector<int>(n + 1, 0));

	//for (int i = 1; i <= n; i++)
	//{
	//	for (int j = 1; j <= n; j++)
	//	{
	//		cin >> a[i][j];
	//		// 구간 합 구하기
	//		d[i][j] = d[i][j - 1] + d[i - 1][j] - d[i - 1][j - 1] + a[i][j];
	//	}
	//}

	//for (int i = 0; i < m; i++)
	//{
	//	int x1, y1, x2, y2;
	//	cin >> x1 >> y1 >> x2 >> y2;

	//	// 구간 합 배열로 질의에 답변하기
	//	int result = d[x2][y2] - d[x1 - 1][y2] - d[x2][y1 - 1] + d[x1 - 1][y1 - 1];
	//	cout << result << "\n";
	//}

	//int n = 0;
	//int m = 0;
	//cin >> n;

	//for (int i = 1; i <= n; i++)
	//{		
	//	m = m + i;
	//}
	//cout << m << "\n";

	//int n = 0;
	//cin >> n;

	//for (int i = 1; i <= n; i++)
	//{
	//	int x;
	//	int y;
	//	cin >> x >> y;

	//	cout << "Case #" << i << ": " << x << " + " << y << " = " << x + y << "\n";
	//}

	//int n = 0;
	//cin >> n;
	//int m[101] = { 0 };
	//int count = 0;

	//for (int i = 0; i < n; i++)
	//{
	//	int s;
	//	cin >> s;
	//	m[i] = s;
	//}

	//int v;
	//cin >> v;

	//for (int i = 0; i < n; i++)
	//{
	//	if (v == m[i])
	//	{
	//		count++;
	//	}
	//}

	//cout << count;

	//int n, m;
	//int x, y, z;
	//int count = 0;
	//int arr[101] = { 0 };
	//cin >> n >> m;

	//for (int i = 0; i < m; i++)
	//{
	//	cin >> x >> y >> z;

	//	for (int j = x; j <= y; j++)
	//	{
	//		arr[j] = z;
	//	}		
	//}

	//for (int i = 1; i <= n; i++)
	//{
	//	count++;
	//	cout << arr[i] << " ";
	//}
	//cout << endl;

	int n, m;
	int x, y;
	int temp;
	int arr[101] = { 0 };
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{				
		arr[i] = i + 1;		
	}

	for (int i = 0; i < m; i++)
	{
		cin >> x >> y;
		temp = arr[x - 1];
		arr[x - 1] = arr[y - 1];
		arr[y - 1] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}