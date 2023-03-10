#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> myqueue;
	int n;
	cin >> n;

	//for (int i = 1; i <= n; i++)	// 카드를 큐에 저장하기
	//{
	//	myqueue.push(i);
	//}

	//while (myqueue.size() > 1)	// 카드가 1장 남을 때까지
	//{
	//	myqueue.pop();	// 맨 위 카드를 버림
	//	myqueue.push(myqueue.front());	// 맨 위 카드를 가장 아래 카드 밑으로 이동
	//	myqueue.pop();
	//}

	for (int i = 1; i <= n; i++)
	{
		myqueue.push(i);
	}

	while (myqueue.size() > 1)
	{
		myqueue.pop();
		myqueue.push(myqueue.front());
		myqueue.pop();
	}

	cout << myqueue.front();
}