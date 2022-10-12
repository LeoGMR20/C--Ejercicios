#include "iostream"
#include "string"
#include <list>
#include <cstdlib>
#include <vector>



using namespace std;



int main()
{
   int N;
   cin >> N;



  int errores=0;
   for (int i = 0; i < N; i++) {
       string c1, c2;
       do {
           cin >> c1 >> c2;
       } while (c1.length() < 1 || c2.length()<1 || c1.length() > 50 || c2.length() > 50);
       if (c1.length()<c2.length()) {
           while (c1.length()<c2.length()) {
               c1 = "0" + c1;
           }
       }
       if (c2.length() < c1.length()) {
           while (c2.length() < c1.length()) {
               c2 = "0" + c2;
           }
       }
      
       for (int i = 0; i < c1.length();i++) {
            if (c1.substr(i, 1)!= c2.substr(i, 1)) {
                errores += 1;
            }
       }
       cout << errores;
       errores = 0;
   }



  return 0;
}