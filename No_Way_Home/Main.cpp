#include <iostream>

using namespace std;

int main(){
    int n, dinero = 0;
    bool cambio = true;
    cin >> n;

    int *nArray = new int[n];

    for (int j = 0; j < n; j++)
    {
        do{
            cin >> nArray[j];
        }while(nArray[j] != 100 && nArray[j] != 50 && nArray[j] != 25);
    }

    for (int j = 0; j < n; j++)
    {
        if(nArray[j] == 50 || nArray[j] == 100){
            if(dinero < (nArray[j] - 25)){
                cambio = false;
                break;
            }
        }
        dinero += 25;
    }
    if(cambio){
        cout << "SI" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}