#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //int n, min = 100, sum = 0;

    //for (int i = 0; i < 7; i++)
    //{
    //    cin >> n;

    //    if (n % 2 == 1)
    //    {
    //        sum += n;
    //        if (n < min)
    //        {
    //            min = n;
    //        }
    //    }
    //}

    //if (sum == 0)
    //{
    //    cout << -1;
    //}
    //else
    //{
    //    cout << sum << "\n" << min;
    //}

    //int a, b, c, d;

    //for (int i = 0; i < 3; i++)
    //{
    //    cin >> a >> b >> c >> d;

    //    int temp = a + b + c + d;

    //    if (temp == 3)
    //    {
    //        cout << "A" << "\n";
    //    }
    //    else if (temp == 2)
    //    {
    //        cout << "B" << "\n";
    //    }
    //    else if (temp == 1)
    //    {
    //        cout << "C" << "\n";
    //    }
    //    else if (temp == 0)
    //    {
    //        cout << "D" << "\n";
    //    }
    //    else if (temp == 4)
    //    {
    //        cout << "E" << "\n";
    //    }
    //}
    /*int a, b;

    cin >> a >> b;

    if (a * (100 - b) / 100 >= 100) cout << 0;

    else cout << 1;*/

    /*cout << "I'm Sexy" << "\n";*/

    //int num, temp = 0;

    //while (1)
    //{
    //    cin >> num;

    //    if (num == -1)
    //    {
    //        break;
    //    }

    //    temp = temp + num;
    //}

    //cout << temp;

    int a[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];        
    }

    sort(a, a + 3);

    int d = a[1] - a[0];
    int d2 = a[2] - a[1];

    if (d > d2)
    {
        cout << a[0] + d2;
    }
    else if (d == d2)
    {
        cout << a[2] + d;
    }
    else
    {
        cout << a[1] + d;
    }
}