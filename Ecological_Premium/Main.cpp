#include <iostream>

using namespace std;

int main()
{
    int n, f;

    do{
        cin >> n;
    }while(n >= 20 || n <= 0);

    int *res = new int[n];

    for (int i = 0; i < n; i++)
    {
        do{
            cin >> f;
        }while(f >= 20 || f <= 0);

        int **fArray = new int*[f];

        for(int j = 0; j < f; j++)
        {
            fArray[j] = new int[3];
        }

        res[i] = 0;

        for (int j = 0; j < f; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                do{
                    cin >> fArray[j][k];
                }while(fArray[j][k] >= 100000 || fArray[j][k] <= 0);
            }
        }
        
        for (int j = 0; j < f; j++)
        {
            res[i] += (fArray[j][0] * fArray[j][2]);
        }
        
    }
    
    for (int i = 0; i < n; i++)
        cout << res[i] << endl;
    
    return 0;
}