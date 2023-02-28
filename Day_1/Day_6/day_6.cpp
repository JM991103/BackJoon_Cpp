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

	//vector<long> s(n, 0);
	//vector<long> c(m, 0);
	//long answer = 0;
	//cin >> s[0];
	//	
	//for (int i = 1; i < n; i++)
	//{
	//	int temp = 0;
	//	cin >> temp;
	//	s[i] = s[i - 1] + temp; 
	//}
	//for (int i = 0; i < n; i++)	// �� �迭�� ��� ���� % ���� �����ϱ�
	//{
	//	int remainder = s[i] % m;
	//	// 0 ~ i������ ���� �� ��ü�� 0�� �� ���信 ���ϱ�
	//	if (remainder == 0)
	//	{
	//		answer++;
	//	}
	//	//�������� ���� �ε����� ���� ����
	//	c[remainder]++;
	//}
	//for (int i = 0; i < m; i++)
	//{
	//	if (c[i] > 1)
	//	{
	//		// �������� ���� �ε��� �� 2���� �̴� ����� ���� ���ϱ�
	//		answer = answer + (c[i] * (c[i] - 1) / 2);
	//	}
	//}
	//cout << answer << endl;

	//int n = 0;
	//int	m = 0;
	//int s[100001] = {};
	//cin >> n >> m;

	//for (int i = 1; i <= n; i++)
	//{
	//	int temp;
	//	cin >> temp;
	//	s[i] = s[i - 1] + temp;
	//}

	//for (int i = 0; i < m; i++)
	//{
	//	int start, end;
	//	cin >> start >> end;
	//	cout << s[end] - s[start - 1] << "\n";
	//}
	
	int n = 0;
	int m = 0;
	cin >> n >> m;
	vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
	vector<vector<int>> d(n + 1, vector<int>(n + 1, 0));

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			// ���� �� ���ϱ�
			d[i][j] = d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1] + a[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		// ���� �� �迭�� ���ǿ� �亯�ϱ�
		int result = d[x2][y2] - d[x1 - 1][y2] - d[x2][y1 - 1] + d[x1 - 1][y1 - 1];
		cout << result << "\n";
	}


	return 0;
}
