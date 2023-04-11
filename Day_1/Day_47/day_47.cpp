#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //int n;
    //int temp = 0;
    //cin >> n;

    //for (int i = 0; i < n; i++)
    //{
    //    int a;
    //    cin >> a;

    //    temp = 0;

    //    for (int i = 0; i < a; i++)
    //    {
    //        int b;
    //        cin >> b;
    //        temp += b;
    //    }
    //    cout << temp << "\n";
    //}

    //int n;
    //cin >> n;

    //for (int row = 1; row <= n; row++)
    //{
    //    for (int i = 0; i < n - row; i++)
    //    {
    //        cout << " ";
    //    }
    //    for (int i = 0; i < row; i++)
    //    {
    //        cout << "*";
    //    }
    //    cout << "\n";
    //}

    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int i = n; i > row; i--)
        {
            cout << "*";
        }
        cout << "\n";
    }

}
