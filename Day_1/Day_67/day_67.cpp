#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //int a, b;

    /*  while (true)
      {
          cin >> a >> b;

          if (a == 0 && b == 0)
          {
              break;
          }
          cout << a + b << "\n";
      }*/

    //int X;
    //cin >> X;

    //int count = 1, min = 64, sum = 64;

    //while (sum > X) {
    //    min = min / 2;
    //    if (sum - min >= X) {
    //        sum -= min;
    //    }
    //    else {
    //        count++;
    //    }
    //}

    //cout << count;


    int cnt = 0, guest, a[101] = { 0 }, num;

    cin >> guest;

    for (int i = 0; i < guest; i++)
    {
        cin >> num;
        if (a[num] > 0)
        {
            cnt++;
        }
        a[num]++;
    }
    cout << cnt << '\n';
}