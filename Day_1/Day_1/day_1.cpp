#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	string numbers;
	cin >> n;
	cin >> numbers;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += numbers[i] - '0';
	}
	cout << sum << "\n";
}