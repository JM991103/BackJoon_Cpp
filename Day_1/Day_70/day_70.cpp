#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int n, score = 0, res[100], bonus = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> res[i];
		if (res[i] == 1) // �����̸�, 1�� �߰�
		{ 
			score++;
			if (res[i - 1] == 1) // �����̸鼭, ���� ������ �����̸�, �������� 1�� �߰�
			{ 
				bonus++;
				score += bonus; // �� ������ �������� ����.
			}
			else 
			{
				bonus = 0;
			}
		}
	}
	cout << score;
}