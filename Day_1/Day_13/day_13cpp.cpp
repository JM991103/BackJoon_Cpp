#include <iostream>
using namespace std;

/// <summary>
/// 비밀번호 체크 배열
/// </summary>
int checkArr[4];

/// <summary>
/// 현재 상태 배열
/// </summary>
int myArr[4];

/// <summary>
/// 몇 개의 문자에 대한 개수를 충족했는지 판단하는 함수
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
	/// 문자열 크기
	/// </summary>
	int s;

	/// <summary>
	/// 부분 문자열 크기
	/// </summary>
	int	p;
	std::cin >> s >> p;
	int result = 0;

	/// <summary>
	/// 문자열 데이터
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

	for (int i = 0; i < p; i++) // 초기 p 부분 문자열 처리
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
		// 4자리 수에 대한 크기가 모두 충족되었을 때는 유효한 비밀번호
		if (checkSecet == 4)
		{
			result++;
		}
	}

	cout << result << endl;
}

void Add(char c) // 새로 들어온 문자를 처리하는 함수
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

void Remove(char c) // 제거할 문자를 처리하는 함수
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