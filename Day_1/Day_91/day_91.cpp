#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int chicken, coke, beer;
	cin >> chicken >> coke >> beer;
	cout << min(chicken, coke / 2 + beer);
}