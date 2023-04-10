#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int Fibo(int num);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m = 0;
    cin >> n;
    m = Fibo(n);
    cout << m;
}

int Fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }

    return num + Fibo(num - 1);
}