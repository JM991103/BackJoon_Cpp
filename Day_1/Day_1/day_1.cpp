#include <iostream>
using namespace std;

int main()
{
	/*int n = 0;
	string numbers;
	cin >> n;
	cin >> numbers;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += numbers[i] - '0';
	}
	cout << sum << "\n";*/

	int n = 0;
	int a[1000];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	long sum = 0;
	long max = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		sum = sum + a[i];
	}

	// 한 과목 관련된 수식을 모두 더한 후 관련된 수식으로 변환해 로직이 간단해짐
	double result = sum * 100.0 / max / n;
	cout << result << "\n";
}