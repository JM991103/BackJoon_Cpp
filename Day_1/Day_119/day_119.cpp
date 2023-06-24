#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	/*long long n, m;
	cin >> n >> m;
	cout << (n + m) * (n - m) << "\n";*/

	int n;
	double a;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		cout << fixed;
		cout.precision(2);
		cout << "$" << a * 0.8f << "\n";
	}
}