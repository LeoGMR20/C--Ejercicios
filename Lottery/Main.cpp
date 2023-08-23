#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int n, c, k, num, min = 0, i, j;
    list<int> resultados;

    while (true)
    {
        cin >> n >> c >> k;

        if (n == 0)
            break;

        int repeticiones[k + 1] = {0};
        resultados.clear();

        // Logic

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < c; j++)
            {
                cin >> num;
                repeticiones[num]++;
            }
        }

        min = n;

        for (i = 1; i <= k; i++)
        {
            if (repeticiones[i] < min)
                min = repeticiones[i];
        }

        for (i = 1; i <= k; i++)
        {
            if (repeticiones[i] == min)
                resultados.push_back(i);
        }

        // Print list
        resultados.sort();
        resultados.unique();
        for (int res : resultados)
            cout << res << " ";
        cout << endl;
    }

    return 0;
}