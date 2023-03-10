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

	//for (int i = 1; i <= n; i++)	// ī�带 ť�� �����ϱ�
	//{
	//	myqueue.push(i);
	//}

	//while (myqueue.size() > 1)	// ī�尡 1�� ���� ������
	//{
	//	myqueue.pop();	// �� �� ī�带 ����
	//	myqueue.push(myqueue.front());	// �� �� ī�带 ���� �Ʒ� ī�� ������ �̵�
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