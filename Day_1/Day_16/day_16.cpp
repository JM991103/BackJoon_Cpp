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
	//	// 스택이 비지 않고 현재 수열이 스택 top에 위치의 값보다 크면
	//	while (!myStack.empty() && A[myStack.top()] < A[i])
	//	{
	//		ans[myStack.top()] = A[i];	// 정답 배열에 오큰수를 현재 수열로 저장하기
	//		myStack.pop();
	//	}
	//	myStack.push(i);	// 신규 데이터 push
	//}

	//while (!myStack.empty())
	//{
	//	// 반복문을 다 돌고 나왔는데 스택이 비지 않는다면 빌 때까지
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
