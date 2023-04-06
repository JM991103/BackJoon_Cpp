#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int total[5];
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
    cout << id + 1 << " " << max << "\n";
}
