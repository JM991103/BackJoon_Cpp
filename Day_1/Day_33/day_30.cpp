#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

//int s;
//char a[256];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//while (1)
	//{
	//	s = 0;

	//	cin.getline(a, 256);

	//	if (a[0] == '#')
	//	{
	//		break;
	//	}

	//	for (int i = 0; i < strlen(a); i++)
	//	{
	//		if (a[i] == 'a') s++;
	//		if (a[i] == 'e') s++;
	//		if (a[i] == 'i') s++;
	//		if (a[i] == 'o') s++;
	//		if (a[i] == 'u') s++;
	//		if (a[i] == 'A') s++;
	//		if (a[i] == 'E') s++;
	//		if (a[i] == 'I') s++;
	//		if (a[i] == 'O') s++;
	//		if (a[i] == 'U') s++;
	//	}
	//	cout << s << "\n";
	//}

	int n, m;
	int temp1 = 0, temp2 = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> n;
		temp1 = temp1 + n;
			
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> m;
		temp2 = temp2 + m;
	}

	if (temp1 == temp2)
	{
		cout << temp1;
	}
	else if(temp1 > temp2)
	{
		cout << temp1;
	}
	else
	{
		cout << temp2;
	}
}