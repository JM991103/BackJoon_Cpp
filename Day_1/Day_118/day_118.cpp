#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

/// <summary>
/// 길이가 같을 경우 사전 순으로 비교를 하여 참 거짓을 반환하고
/// 길이가 같지 않으면 문자열 길이를 비교하여 정렬한다.
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

		// find 함수는 해당 단어가 존재하지 않을 경우 Vector.end()를 반환한다.
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