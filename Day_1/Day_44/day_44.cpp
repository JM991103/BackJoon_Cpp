#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int fun(int num);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /*   int total[5];
       int num;
       int max = 0;
       int id;

       for (int i = 0; i < 5; i++)
       {
           total[i] = 0;

           for (int j = 0; j < 4; j++)
           {
               cin >> num;
               total[i] += num;
           }

           if (max < total[i])
           {
               max = total[i];
               id = i;
           }
       }
       cout << id + 1 << " " << max << "\n";*/

       /*long long n, m;
       long long temp;

       cin >> n >> m;
       cin >> temp;

       if (n + m - 2 * temp >= 0)
       {
           cout << n + m - 2 * temp << "\n";
       }
       else
       {
           cout << n + m << "\n";
       }*/

    /*int n, m;

    while (cin >> n >> m)
    {
        cout << n + m << "\n";
    }*/

    int n;
    cin >> n;    

    int result = fun(n);

    cout << result << "\n";
    
}

int fun(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    return num * fun(num - 1);
}