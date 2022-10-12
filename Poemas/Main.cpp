#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    int n;
    string poema = "";

    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        string p;

        do{
            getline(cin, p);
        }while(p.length() > 100);

        for (int j = 0; j < p.length(); j++)
        {
            switch (toupper(p.at(j)))
            {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                p.at(j) = '-';
                break;
            
            default:
                continue;
                break;
            }
        }
        poema += p + "\n";
    }
    
    cout << poema << endl;
}