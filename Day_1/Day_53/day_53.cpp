#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //string name;
    //int age, weight;

    //while (true)
    //{
    //    cin >> name >> age >> weight;

    //    if (name == "#" && age == 0 && weight == 0)
    //    {
    //        break;
    //    }

    //    if (age > 17 || weight >= 80)
    //    {
    //        cout << name << " Senior" << "\n";
    //    }
    //    else
    //    {
    //        cout << name << " Junior" << "\n";
    //    }
    //}

    /*int burger1, burger2, burger3, coke, sprite;

    cin >> burger1 >> burger2 >> burger3 >> coke >> sprite;

    int burgerMin = min(burger1, burger2);
    burgerMin = min(burgerMin, burger3);
    int drinkMin = min(coke, sprite);

    cout << burgerMin + drinkMin - 50 << "\n";*/


    /*int r1, s;
    int result;

    cin >> r1 >> s;
    result = (s * 2) - r1;;

    cout << result << "\n";*/

    int num;
    cin >> num;
    cin.ignore();

    for (int i = 1; i <= num; i++)
    {
        string s;
        getline(cin, s);
        cin.clear();
        cout << i << ". " << s << "\n";
    }
}