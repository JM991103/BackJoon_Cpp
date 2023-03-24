#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	/*vector<int> a(5, 0);
	int temp = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		temp += a[i];
	}

	cout << temp;*/

	int n;
	cin >> n;
	int temp = n * 0.22;
	int temp2 = n - temp;
	int temp3 = temp * 0.2;
	int temp4 = n - temp3;
	cout << temp2 << " " << temp4;
}