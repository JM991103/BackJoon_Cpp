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

	int ques, s, t, class_time;

	cin >> ques;

	while (ques--)
	{
		s = 0; 
		t = 0;

		int ans = 0;

		cin >> class_time;

		while (1)
		{
			if (class_time < s + t)
			{
				t--;
				break;
			}
			t++;
			s = t * t;
		}
		cout << t << "\n";
	}
}