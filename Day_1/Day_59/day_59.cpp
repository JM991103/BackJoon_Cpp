#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, min = 100, sum = 0;

    for (int i = 0; i < 7; i++)
    {
        cin >> n;

        if (n % 2 == 1)
        {
            sum += n;
            if (n < min)
            {
                min = n;
            }
        }
    }

    if (sum == 0)
    {
        cout << -1;
    }
    else
    {
        cout << sum << "\n" << min;
    }
}