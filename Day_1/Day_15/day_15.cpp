#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> a(n, 0);
	vector<char> resultV;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	stack<int> mystack;
	int num = 1;	// 오름차순 수
	bool result = true;

	for (int i = 0; i < a.size(); i++)
	{
		int su = a[i];	// 현재 수열의 수
		// 현재 수열값 >= 오름차순 자연수 값이 같아질 때까지 push() 수행
		if (su >= num)
		{
			while (su >= num) // push()
			{
				mystack.push(num++);
				resultV.push_back('+');
			}
			mystack.pop();
			resultV.push_back('-');
		}
		//현재 수열값 < 오름차순 자연수 : pop()을 수행하여 수열 원소를 꺼냄
		else
		{
			int n = mystack.top();
			mystack.pop();
			// 스택의 가장 위의 수가 만들어야 하는 수열의 수보다 크다면 수열 출력 불가능
			if (n > su)
			{
				cout << "NO";
				result = false;
				break;
			}
			else
			{
				resultV.push_back('-');
			}
		}
	}
	if (result)
	{
		for (int i = 0; i < resultV.size(); i++)
		{
			cout << resultV[i] << "\n";
		}
	}
}