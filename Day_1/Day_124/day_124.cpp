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

	/*int ques, s, t, class_time;

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
	}*/

	/*int a, b, c, d;

	cin >> a >> b >> c >> d;

	if (a + d <= b + c)
	{
		cout << a + d;
	}
	else
	{
		cout << b + c;
	}*/

	/*int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int V, E;
		cin >> V >> E;
		cout << (2 - V + E) << '\n';
	}*/

	int x, y, w, h;
	int temp1, temp2;

	cin >> x >> y >> w >> h;
	temp1 = min(x, y);
	temp2 = min(w - x, h - y);
	cout << min(temp1, temp2);
}