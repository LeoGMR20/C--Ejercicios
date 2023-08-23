#include <iostream>

using namespace std;

int main()
{
    int n;

    while (true)
    {
        cin >> n;

        if (n == 0)
            break;

        int j[n], m[n];

        for (int i = 0; i < n; i++)
        {
            cin >> j[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }

        cout << "a" << endl;
    }
    return 0;
}