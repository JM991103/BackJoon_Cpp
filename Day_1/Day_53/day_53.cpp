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

    /*int num;
    cin >> num;
    cin.ignore();

    for (int i = 1; i <= num; i++)
    {
        string s;
        getline(cin, s);
        cin.clear();
        cout << i << ". " << s << "\n";
    }*/

    /*int n;
    cin >> n;
    int a, b, c, d, e;
    float A = 350.34, B = 230.90, C = 190.55, D = 125.30, E = 180.90;


    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d >> e;
        float temp = (a * A) + (b * B) + (c * C) + (d * D) + (e * E);

        cout.precision(2);
        printf("$%.2f\n", temp);
    }*/

    int n, a, b;
    int temp1 = 100, temp2 = 100;

    cin >> n;
    while (n--)
    {
        cin >> a >> b;

        if (a > b)
        {
            temp2 -= a;
        }
        else if (a < b)
        {
            temp1 -= b;
        }        
    }
    cout << temp1 << "\n" << temp2 << "\n";
}