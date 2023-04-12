#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, a, b, c, d;
    int temp1;
    cin >> n >> a >> b >> c >> d;

    if (a % c == 0)
    {
        temp1 = a / c;
    }
    else
    {
        temp1 = a / c + 1;
    }

    if (b % d == 0)
    {
        temp1 = max(temp1, b / d);
    }
    else
    {
        temp1 = max(temp1, b / d + 1);
    }

    cout << n - temp1 << "\n";
}