#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	/*int chicken, coke, beer;
	cin >> chicken >> coke >> beer;
	cout << min(chicken, coke / 2 + beer);*/

	//int n;

	//cin >> n;

	//if (n < 1 || n > 100)
	//	return 0;


	//for (int i = 0; i < n; i++)  // 1���� n �ٱ��� �ݺ� 
	//{
	//	for (int j = 0; j < i; j++)  //  i���� ����
	//	{
	//		cout << " ";
	//	}

	//	for (int k = n - i; k > 0; k--)  // n-i���� �� 
	//	{
	//		cout << "*";
	//	}

	//	cout << endl;
	//}

	//return 0;

	//string str;
	//cin >> str;
	//float result = 0;
	//cout << fixed;		// �Ҽ��� �Ʒ� ������ ��¹����� �����ϰڴٴ� �ǹ�
	//cout.precision(1);	// �Ҽ��� �Ʒ� (n)��ŭ�� �ڸ������� ����ϰڴٴ� �ǹ�
	//
	//switch (str[0])
	//{
	//case 'A' :
	//	result += 4.0;
	//	break;
	//case 'B':
	//	result += 3.0;
	//	break;
	//case 'C':
	//	result += 2.0;
	//	break;
	//case 'D':
	//	result += 1.0;
	//	break;	
	//}

	//switch (str[1])
	//{
	//case '+':
	//	result += 0.3;
	//	break;
	//case '-':
	//	result -= 0.3;
	//	break;
	//}

	//cout << result;

	/*int n, w, h, l;

	cin >> n >> w >> h >> l;

	int ans = (w / l) * (h / l);

	n < ans ? cout << n : cout << ans;

	return 0;*/

	/*string k;
	cin >> k;

	for (int i = 0; i < k.size(); i++)
	{
		if (k[i] >= 97 && k[i] <= 122)
		{
			k[i] -= 32;
		}
		else if (k[i] >= 65 && k[i] <= 90)
		{
			k[i] += 32;
		}
		cout << k[i];
	}
	cout << '\n';*/


	int a;

	bool check[31] = { 0 };

	for (int i = 1; i <= 28; i++)
	{
		cin >> a;
		check[a] = 1;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (check[i] == 0)
		{
			cout << i << "\n";
		}
	}
}