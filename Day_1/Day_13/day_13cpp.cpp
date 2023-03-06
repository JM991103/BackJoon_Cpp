#include <iostream>
using namespace std;

/// <summary>
/// ��й�ȣ üũ �迭
/// </summary>
int checkArr[4];

/// <summary>
/// ���� ���� �迭
/// </summary>
int myArr[4];

/// <summary>
/// �� ���� ���ڿ� ���� ������ �����ߴ��� �Ǵ��ϴ� �Լ�
/// </summary>
int checkSecet = 0;

void Add(char c);
void Remove(char c);

int main()
{
	ios::sync_with_stdio(false);
	std :: cin.tie(NULL);
	cout.tie(NULL);

	/// <summary>
	/// ���ڿ� ũ��
	/// </summary>
	int s;

	/// <summary>
	/// �κ� ���ڿ� ũ��
	/// </summary>
	int	p;
	std::cin >> s >> p;
	int result = 0;

	/// <summary>
	/// ���ڿ� ������
	/// </summary>
	string A;
	std::cin >> A;

	for (int i = 0; i < 4; i++)
	{
		std::cin >> checkArr[i];
		if (checkArr[i] == 0)
		{
			checkSecet++;
		}
	}

	for (int i = 0; i < p; i++) // �ʱ� p �κ� ���ڿ� ó��
	{
		Add(A[i]);
	}

	if (checkSecet == 4)
	{
		result++;
	} 
	
	for (int i = p; i < s; i++)
	{
		int j = i - p;
		Add(A[i]);
		Remove(A[j]);
		// 4�ڸ� ���� ���� ũ�Ⱑ ��� �����Ǿ��� ���� ��ȿ�� ��й�ȣ
		if (checkSecet == 4)
		{
			result++;
		}
	}

	cout << result << endl;
}

void Add(char c) // ���� ���� ���ڸ� ó���ϴ� �Լ�
{
	switch (c)
	{
	case 'A':
		myArr[0]++;
		if (myArr[0] == checkArr[0])
		{
			checkSecet++;
		}
		break;
	case 'C':
		myArr[1]++;
		if (myArr[1] == checkArr[1])
		{
			checkSecet++;
		}
		break;
	case 'G':
		myArr[2]++;
		if (myArr[2] == checkArr[2])
		{
			checkSecet++;
		}
		break;
	case 'T':
		myArr[3]++;
		if (myArr[3] == checkArr[3])
		{
			checkSecet++;
		}
		break;
	}
}

void Remove(char c) // ������ ���ڸ� ó���ϴ� �Լ�
{
	switch (c)
	{
	case 'A':
		if (myArr[0] == checkArr[0])
		{
			checkSecet--;
		}
		myArr[0]--;
		break;
	case 'C':
		if (myArr[1] == checkArr[1])
		{
			checkSecet--;
		}
		myArr[1]--;
		break;
	case 'G':
		if (myArr[2] == checkArr[2])
		{
			checkSecet--;
		}
		myArr[2]--;
		break;
	case 'T':
		if (myArr[3] == checkArr[3])
		{
			checkSecet--;
		}
		myArr[3]--;
		break;
	}

}