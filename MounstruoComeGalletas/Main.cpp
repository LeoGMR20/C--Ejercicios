#include <iostream>

using namespace std;

int main()
{
    int t, n, c, dias = 0;

    while (true)
    {
        cin >> t;

        if (t == 0)
            break;

        for (int i = 0; i < t; i++)
        {
            cin >> n >> c;

            dias = (n / c) + (n % c != 0 ? 1 : 0);

            cout << dias << endl;
        }
    }
    return 0;
}