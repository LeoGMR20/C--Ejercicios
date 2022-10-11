#include <iostream>

using namespace std;

int main()
{
    int t, n, speed;

    do
    {
        cin >> t;
    } while(t > 50);

    int *res = new int[t];

    for (int i = 0; i < t; i++)
    {
        speed = 0;
        do
        {
            cin >> n;
        } while(n < 1 || n > 100);

        int *students = new int[n];

        for (int j = 0; j < n; j++)
        {
            do
            {
                cin >> students[j];
            } while(students[j] < 1 || students[j] > 10000);

            if (students[j] > speed)
            {
                speed = students[j];
            }
        }
        
        res[i] = speed;
    }

    for (int i = 0; i < t; i++)
    {
        cout << "Case " << (i+1) << ": " << res[i] << endl;
    }
    
    return 0;
}