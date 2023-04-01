#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (isupper(s[i]))
            {
                s[i] = tolower(s[i]);
            }
        }
        cout << s << "\n";
    }
}