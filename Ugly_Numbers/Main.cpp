#include <iostream>

using namespace std;

int maxDivide(int a, int b)
{
    while (a % b == 0)
        a = a / b;
    return a;
}

bool isUgly(int no)
{
    no = maxDivide(no, 2);
    no = maxDivide(no, 3);
    no = maxDivide(no, 5);

    return (no == 1) ? true : false;
}

int getUglyNumber(int n)
{
    int uglyNumber = 1, count = 1; 
    while (n > count) 
    {
        uglyNumber++;
        if (isUgly(uglyNumber))
            count++;
    }
    return uglyNumber;
}

int main(){

    int number = getUglyNumber(1500);
    
    cout << "The 1500'th ugly number is " << number << endl;

    return 0;
}

//Código fallido y todo feo :( XD

/*bool isPrimeNumber(int n);
bool isUglyNumber(int num);*/

/*bool isPrimeNumber(int n){
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isUglyNumber(int num){
    vector<int> primes;
    primes.resize(num / 2);
    int posPrime = 0;
    for (int i = 2; i < num / 2; i++)
    {
        if(isPrimeNumber(i)){
            primes[posPrime] == i;
            posPrime++;
        }
        else{
            continue;
        }
    }

    for(int n: primes){
        if(n == 2 || n == 3 || n == 5){
            continue;
        }
        else if(num % n == 0){
            return false;
        }
    }

    return true;
}*/