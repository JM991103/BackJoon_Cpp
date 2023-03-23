#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> a(5, 0);
	int temp = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		temp += a[i];
	}

	cout << temp;
}