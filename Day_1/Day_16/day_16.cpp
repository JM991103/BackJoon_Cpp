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

	vector<int> A(n, 0);
	vector<int> ans(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	stack<int> myStack;
	myStack.push(0);

	//for (int i = 0; i < n; i++)
	//{
	//	// ������ ���� �ʰ� ���� ������ ���� top�� ��ġ�� ������ ũ��
	//	while (!myStack.empty() && A[myStack.top()] < A[i])
	//	{
	//		ans[myStack.top()] = A[i];	// ���� �迭�� ��ū���� ���� ������ �����ϱ�
	//		myStack.pop();
	//	}
	//	myStack.push(i);	// �ű� ������ push
	//}

	//while (!myStack.empty())
	//{
	//	// �ݺ����� �� ���� ���Դµ� ������ ���� �ʴ´ٸ� �� ������
	//	ans[myStack.top()] = -1;
	//	myStack.pop();
	//}

	//for (int i = 0; i < n; i++)
	//{
	//	cout << ans[i] << " ";
	//}

	for (int i = 0; i < n; i++)
	{
		while (!myStack.empty() && A[myStack.top()] < A[i]) 
		{
			ans[myStack.top()] = A[i];
			myStack.pop();
		}
		myStack.push(i);
	}

	while (!myStack.empty())
	{
		ans[myStack.top()] = -1;
		myStack.pop();
	}

	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << " ";
	}
}
