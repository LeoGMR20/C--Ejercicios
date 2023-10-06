#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

// int resLex(string cad1, string cad2)
// {
//     return
// }

int main()
{
    string cadena1, cadena2;
    int res;

    scanf("%s%s", cadena1, cadena2);

    res = resLex(cadena1, cadena2);

    printf("%d", res);
    return 0;
}