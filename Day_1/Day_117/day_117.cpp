#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class person
{
public:
	int age;
	string name;
};

person* P = new person[100001];

bool compare(person a, person b)
{
	return a.age < b.age;
}

int main()
{
	// 밑에 있는 구문은 C와 C++ 입출력의 Sysnchronization을 false로 바꿔서 C와 C++ 스타일의 입출력을 혼용하지 않게 되면서
	// C++의 입출력 시 독립적인 버퍼를 사용해 cout과 cin의 속도를 빠르게 해준다고 한다.
	// 또 cin과 cout이 묶여있는 것을 풀어줌으로써 속도 상승의 효과를 볼 수 있다.
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> P[i].age >> P[i].name;
	}

	stable_sort(P, P + n, compare);

	for (int i = 0; i < n; i++)
	{
		cout << P[i].age << " " << P[i].name << "\n";
	}

}