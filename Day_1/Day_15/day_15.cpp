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
	int num = 1;	// �������� ��
	bool result = true;

	for (int i = 0; i < a.size(); i++)
	{
		int su = a[i];	// ���� ������ ��
		// ���� ������ >= �������� �ڿ��� ���� ������ ������ push() ����
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
		//���� ������ < �������� �ڿ��� : pop()�� �����Ͽ� ���� ���Ҹ� ����
		else
		{
			int n = mystack.top();
			mystack.pop();
			// ������ ���� ���� ���� ������ �ϴ� ������ ������ ũ�ٸ� ���� ��� �Ұ���
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