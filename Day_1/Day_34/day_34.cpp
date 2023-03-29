#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /*   int sh, sm, ss, eh, em, es;
       int start, end, t, h, m, s;
       for (int i = 0; i < 3; i++)
       {
           cin >> sh >> sm >> ss >> eh >> em >> es;

           start = (sh * 3600) + (sm * 60) + ss;
           end = (eh * 3600) + (em * 60) + es;

           t = end - start;
           h = t / 3600;
           m = (t % 3600) / 60;
           s = (t % 3600) % 60;

           cout << h << " " << m << " " << s << endl;
       }*/

       /*int n, m;

       while (1)
       {
           cin >> n >> m;

           if (n == 0 && m == 0)
           {
               break;
           }
           cout << n + m << "\n";
       }*/

       //int n;
       //int count = 0;
       //cin >> n;
       //int a[5];

       //for (int i = 0; i < 5; i++)
       //{
       //    cin >> a[i];

       //    if (n == a[i])
       //    {
       //        count++;
       //    }
       //}
       //cout << count;

    int s[4], m[2];

    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }
    sort(s, s + 4);

    for (int i = 0; i < 2; i++)
    {
        cin >> m[i];
    }
    sort(m, m + 2);

    cout << s[1] + s[2] + s[3] + m[1] << '\n';
}