#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int resLex(int cad1, int cad2)
{
    if (cad1 < cad2)
    {
        return -1;
    }
    else if (cad1 > cad2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    string cadena1, cadena2;
    int res;

    scanf("%s%s", cadena1, cadena2);

    int cadInt1 = stoi(cadena1);
    int cadInt2 = stoi(cadena2);

    res = resLex(cadInt1, cadInt2);

    printf("%d", res);
    return 0;
}