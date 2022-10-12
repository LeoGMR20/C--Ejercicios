#include <iostream>
using namespace std;
int main() {
  int c;
  cin >> c;
  for(int k = 0; k < c; k++)
  {
    int n, p;
    int d = 1;
    int res = 0;
    int cont10 = 0, cont20 = 0, cont30 = 0;
    cin >> n >> p;
    for(int i = 0; i < n; i++){
      switch(d){
        case 1:
          cont20++;
        break;
        case 2:
          cont20++;
        break;
        case 3:
          cont10++;
        break;
        case 4:
          cont20++;
        break;
        case 5:
          cont20++;
        break;
        case 6:
          cont30++;
        break;
        case 7:
          cont30++;
        break;
      }
      if (d == 7){
        d = 1;
      }
      else{
        d++;
      }
      
    }
    if (cont10 >= p){
      res = p * 10;
    }
    else{
      res = cont10 * 10;
      p = p - cont10;
      if (cont20 >= p){
        res = res + (p * 20);
      }
      else{
        res = res + (cont20 * 20);
        p = p - cont20;
        res = res + (p * 30);
      }
    }
    cout << res << endl;
  }
  
    
  return 0;
}