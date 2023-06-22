#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

/// <summary>
/// ���̰� ���� ��� ���� ������ �񱳸� �Ͽ� �� ������ ��ȯ�ϰ�
/// ���̰� ���� ������ ���ڿ� ���̸� ���Ͽ� �����Ѵ�.
/// </summary>
/// <returns></returns>
bool CompareWith(string a, string b)
{	
	if (a.length() == b.length())
	{
		return a < b;
	}
	return a.length() < b.length();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	vector<string> vec;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str; 
		cin >> str;

		// find �Լ��� �ش� �ܾ �������� ���� ��� Vector.end()�� ��ȯ�Ѵ�.
		if (find(vec.begin(), vec.end(), str) == vec.end())
		{
			vec.push_back(str);
		}
	}
	sort(vec.begin(), vec.end(), CompareWith);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "\n";
	}
}