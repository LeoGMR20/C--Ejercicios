#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    long x1, y1, r1, x2, y2, r2;

    while (true)
    {
        scanf("%ld %ld %ld %ld %ld %ld", &x1, &y1, &r1, &x2, &y2, &r2);

        if (x1 + y1 + r1 + x2 + y2 + r2 == 0)
            break;

        sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) < r1 + r2 ? cout << "SI" : cout << "NO";
        cout << endl;
    }

    return 0;
}