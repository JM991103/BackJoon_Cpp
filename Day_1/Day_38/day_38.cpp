#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //string s;
    //int n;
    //cin >> n;

    //for (int i = 0; i < n; i++)
    //{
    //    cin >> s;

    //    for (int i = 0; i < s.length(); i++)
    //    {
    //        if (isupper(s[i]))  // 대문자 찾기
    //        {
    //            s[i] = tolower(s[i]);   // 소문자로 변환
    //        }
    //    }
    //    cout << s << "\n";
    //}

    int n;
    cin >> n;
    cout << (1 << n);
}