#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //int n, a, b, c, d;
    //int temp1;
    //cin >> n >> a >> b >> c >> d;

    //if (a % c == 0)
    //{
    //    temp1 = a / c;
    //}
    //else
    //{
    //    temp1 = a / c + 1;
    //}

    //if (b % d == 0)
    //{
    //    temp1 = max(temp1, b / d);
    //}
    //else
    //{
    //    temp1 = max(temp1, b / d + 1);
    //}

    //cout << n - temp1 << "\n";

    /*int h, m, s, d;

    cin >> h >> m >> s >> d;
    
    cout << (h + (m + (s + d) / 60) / 60) % 24 << " " << (m + (s + d) / 60) % 60 << " " << (s + d) % 60;*/

    int a, b, c;    
    
    cin >> a >> b >> c;

    if ((a+b+c) != 180)
    {
        cout << "Error";
    }
    else if (a == b && b == c)
    {
        cout << "Equilateral";
    }
    else if (a == b || a == c || b == c)
    {
        cout << "Isosceles";
    }
    else
    {
        cout << "Scalene";
    }   

}