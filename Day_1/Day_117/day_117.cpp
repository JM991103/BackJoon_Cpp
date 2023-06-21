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
	// �ؿ� �ִ� ������ C�� C++ ������� Sysnchronization�� false�� �ٲ㼭 C�� C++ ��Ÿ���� ������� ȥ������ �ʰ� �Ǹ鼭
	// C++�� ����� �� �������� ���۸� ����� cout�� cin�� �ӵ��� ������ ���شٰ� �Ѵ�.
	// �� cin�� cout�� �����ִ� ���� Ǯ�������ν� �ӵ� ����� ȿ���� �� �� �ִ�.
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